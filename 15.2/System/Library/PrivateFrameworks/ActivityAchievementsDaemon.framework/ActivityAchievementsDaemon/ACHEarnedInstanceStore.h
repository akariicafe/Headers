@class ACHEarnedInstanceEntityWrapper, NSHashTable, NSArray, NSString, ACHEarnedInstanceDuplicateUtility, HDProfile, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface ACHEarnedInstanceStore : NSObject <ACHEarnedInstanceEntitySyncedEarnedInstancesObserver, ACHEarnedInstanceEntityJournalEntryAppliedObserver>

@property (weak, nonatomic) HDProfile *profile;
@property (retain, nonatomic) ACHEarnedInstanceEntityWrapper *entityWrapper;
@property (retain, nonatomic) ACHEarnedInstanceDuplicateUtility *duplicateUtility;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *earnedInstanceQueue;
@property (retain, nonatomic) NSMutableArray *allEarnedInstances;
@property (nonatomic) BOOL initialEarnedInstanceFetchComplete;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *observerQueue;
@property (retain, nonatomic) NSHashTable *observers;
@property (nonatomic) unsigned char device;
@property (readonly, nonatomic) NSArray *earnedInstances;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void).cxx_destruct;
- (id)earnedInstancesForTemplateUniqueName:(id)a0;
- (BOOL)earnedInstanceEntityDidReceiveSyncedEarnedInstances:(id)a0 provenance:(long long)a1;
- (void)earnedInstanceEntityDidApplyJournalEntriesInsertedEarnedInstances:(id)a0 removedEarnedInstances:(id)a1;
- (BOOL)removeEarnedInstances:(id)a0 error:(id *)a1;
- (BOOL)removeAllEarnedInstancesWithError:(id *)a0;
- (BOOL)loadAllEarnedInstancesFromDatabaseIfNecessary;
- (BOOL)addEarnedInstances:(id)a0 databaseContext:(id)a1 error:(id *)a2;
- (BOOL)addEarnedInstances:(id)a0 error:(id *)a1;
- (BOOL)_queue_addEarnedInstances:(id)a0 provenance:(long long)a1 databaseContext:(id)a2 triggerSync:(BOOL)a3 error:(id *)a4;
- (void)_queue_appendOrInsertEarnedInstanceToInMemoryStore:(id)a0;
- (void)_notifyObserversOfAddedEarnedInstances:(id)a0;
- (id)_queue_earnedInstancesArray;
- (id)_queue_addEarnedInstancesWithSingleTemplate:(id)a0 provenance:(long long)a1 databaseContext:(id)a2 error:(id *)a3;
- (BOOL)_queue_removeEarnedInstances:(id)a0 error:(id *)a1;
- (void)_notifyObserversOfRemovedEarnedInstances:(id)a0;
- (void)_notifyInitialFetchComplete;
- (id)initWithProfile:(id)a0 earnedInstanceEntityWrapper:(id)a1 earnedInstanceDuplicateUtility:(id)a2 device:(unsigned char)a3;

@end
