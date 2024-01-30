@class NSObject, NSString, DNDSClientDetailsProvider, DNDSModeAssertionStore;
@protocol OS_os_transaction, DNDSBackingStore;

@interface DNDSModeAssertionManager : NSObject <DNDSBackingStoreDelegate, DNDSSysdiagnoseDataProvider, DNDSModeAssertionQuerying, DNDSModeAssertionUpdating> {
    id<DNDSBackingStore> _backingStore;
    DNDSModeAssertionStore *_store;
    DNDSClientDetailsProvider *_clientDetailsProvider;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _storeLock;
    NSObject<OS_os_transaction> *_nonPersistentAssertionTransaction;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *sysdiagnoseDataIdentifier;

- (id)sysdiagnoseDataIdentifier;
- (void)_loadDataFromBackingStore;
- (BOOL)_saveDataToBackingStoreWithError:(id *)a0;
- (id)backingStore:(id)a0 migrateDictionaryRepresentation:(id)a1 fromVersionNumber:(unsigned long long)a2 toVersionNumber:(unsigned long long)a3;
- (id)initWithBackingStoreURL:(id)a0 clientDetailsProvider:(id)a1;
- (id)sysdiagnoseDataForDate:(id)a0 redacted:(BOOL)a1;
- (void).cxx_destruct;
- (id)initWithBackingStore:(id)a0 clientDetailsProvider:(id)a1;
- (void)_resolveTransactionForModeAssertionStore;
- (id)modeAssertionInvalidationsMatchingPredicate:(id)a0;
- (void)dealloc;
- (id)updateModeAssertionsWithContextHandler:(id /* block */)a0 error:(id *)a1;
- (id)modeAssertionsMatchingPredicate:(id)a0;
- (id)clientDetailsForClientIdentifier:(id)a0;

@end
