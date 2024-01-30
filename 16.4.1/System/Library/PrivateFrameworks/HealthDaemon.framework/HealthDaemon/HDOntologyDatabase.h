@class HKObserverSet, NSString, HDProfile, HDOntologyBackingStore;

@interface HDOntologyDatabase : NSObject <HDOntologyBackingStoreObserver> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    HKObserverSet *_databaseAvailableObservers;
    HKObserverSet *_importObservers;
}

@property (retain, nonatomic) HDOntologyBackingStore *unitTesting_ontologyBackingStore;
@property (readonly, weak, nonatomic) HDProfile *profile;
@property (readonly, nonatomic, getter=isAvailable) BOOL available;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)ontologyContentVersionWithTransaction:(id)a0 error:(id *)a1;

- (void)invalidateAndWait;
- (void)ontologyBackingStore:(id)a0 didBecomeAvailable:(BOOL)a1;
- (id)initWithProfile:(id)a0;
- (void)removeOntologyDatabaseAvailabilityObserver:(id)a0;
- (id)unitTesting_schemaVersionWithError:(id *)a0;
- (void)removeOntologyImportStatusObserver:(id)a0;
- (void)addOntologyImportStatusObserver:(id)a0;
- (void)addOntologyDatabaseAvailabilityObserver:(id)a0;
- (void)unitTesting_close;
- (BOOL)performTransactionWithError:(id *)a0 transactionHandler:(id /* block */)a1;
- (BOOL)unitTesting_performWriteTransactionWithError:(id *)a0 transactionHandler:(id /* block */)a1;
- (id)init;
- (BOOL)performTransactionWithDatabaseTransaction:(id)a0 error:(id *)a1 transactionHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (id)ontologyContentVersionWithError:(id *)a0;

@end
