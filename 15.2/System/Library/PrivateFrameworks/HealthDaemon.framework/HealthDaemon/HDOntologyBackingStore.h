@class HKObserverSet, NSString, HDAssertionManager, NSURL, HDSimpleGraphDatabase, NSObject, HDDaemon;
@protocol OS_dispatch_queue;

@interface HDOntologyBackingStore : NSObject <HDContentProtectionObserver, HDHealthDaemonReadyObserver, HDHealthRecordsAccountExistenceObserver, HDOntologyAssetAvailabilityObserver, HDProtectedResourceStoreProvider, HDProtectedResourceStore, HDAssertionObserver, HDProfileManagerObserver, HDDatabaseProtectedDataObserver> {
    _Atomic BOOL _invalidated;
    NSURL *_ontologyURL;
    NSString *_threadLocalTransactionKey;
    HKObserverSet *_observers;
    NSObject<OS_dispatch_queue> *_observationQueue;
    _Atomic BOOL _isDatabaseOpen;
    _Atomic BOOL _isObservingAssetAvailability;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _availabilityLock;
    BOOL _available;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _databaseLock;
    HDSimpleGraphDatabase *_graphDatabase;
    NSObject<OS_dispatch_queue> *_protectedResourceAssertionQueue;
    HDAssertionManager *_protectedResourceAssertionManager;
}

@property (readonly, weak, nonatomic) HDDaemon *daemon;
@property (readonly, nonatomic, getter=isAvailable) BOOL available;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *protectedResourceIdentifier;

+ (id)unitTesting_ontologyBackingStoreForDaemon:(id)a0 baseURL:(id)a1;
+ (id)unitTesting_ontologyURLWithBaseURL:(id)a0;

- (id)initWithDaemon:(id)a0;
- (void)daemonReady:(id)a0;
- (void)accountExistenceNotifier:(id)a0 didChangeHealthRecordAccountExistence:(BOOL)a1;
- (void)assertionManager:(id)a0 assertionInvalidated:(id)a1;
- (void)checkInProtectedResource:(id)a0;
- (void)contentProtectionStateChanged:(long long)a0 previousState:(long long)a1;
- (void)close;
- (void)obliterateWithReason:(id)a0;
- (id)_initWithDaemon:(id)a0 baseURL:(id)a1;
- (BOOL)performOntologyTransactionForWrite:(BOOL)a0 profile:(id)a1 databaseTransaction:(id)a2 error:(id *)a3 transactionHandler:(id /* block */)a4;
- (void).cxx_destruct;
- (id)init;
- (id)protectedResourceStoreForProfile:(id)a0;
- (void)profileListDidChange;
- (void)registerOntologyDatabase:(id)a0;
- (void)database:(id)a0 protectedDataDidBecomeAvailable:(BOOL)a1;
- (void)assetProvider:(id)a0 didChangeAvailability:(long long)a1;
- (id)requestProtectedResourceAccessAssertionForOwnerIdentifier:(id)a0 error:(id *)a1;
- (void)invalidate;
- (BOOL)forceImportOntologyAssetWithURL:(id)a0 error:(id *)a1;
- (id)checkOutProtectedResourceWithAssertion:(id)a0 transaction:(id)a1 error:(id *)a2;

@end
