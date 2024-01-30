@class NSString, CallDBManager, NSManagedObjectContext;

@interface CallHistoryDBHandle : CHLogger {
    NSManagedObjectContext *fCallRecordContext;
    NSManagedObjectContext *fCallDBPropertiesContext;
    id _observerCallRecordRef;
    id _observerCallDBPropRef;
    id _moveCallRecordsFromTempStoreRef;
    id _dataStoreAddedRef;
}

@property (readonly, nonatomic) NSString *objectId;
@property (readonly, nonatomic) CallDBManager *callDBManager;

+ (id)createWithDBManager:(id)a0;
+ (id)createForServer;
+ (id)createForClient;

- (BOOL)save:(id *)a0;
- (void)handleCallDBPropContextDidSaveNotification:(id)a0;
- (void)deleteObjectsWithUniqueIds:(id)a0;
- (id)fetchManagedCallsWithPredicate:(id)a0 sortDescriptors:(id)a1 limit:(unsigned long long)a2 offset:(unsigned long long)a3 batchSize:(unsigned long long)a4;
- (unsigned long long)fetchManagedCallCountWithPredicate:(id)a0 sortDescriptors:(id)a1;
- (void)updateCallDBProperties;
- (id)fetchManagedCallIdentifiersWithPredicate:(id)a0 sortDescriptors:(id)a1 limit:(unsigned long long)a2 offset:(unsigned long long)a3 batchSize:(unsigned long long)a4;
- (void).cxx_destruct;
- (BOOL)moveCallRecordsFromDatabaseAtURL:(id)a0;
- (void)registerForNotifications:(id)a0;
- (void)dealloc;
- (void)mergeCallDBPropChangesFromRemoteAppSave;
- (id)callRecordContext;
- (id)fetchWithPredicate:(id)a0 forEntity:(id)a1;
- (void)unRegisterForNotifications;
- (id)fetchAll;
- (void)mergeCallRecordChangesFromRemoteAppSave;
- (void)deleteAll;
- (id)timerLastReset;
- (void)handleCallRecordContextDidSaveNotification:(id)a0;
- (id)timerIncoming;
- (id)getArrayForCallTypeMask:(unsigned int)a0;
- (id)initWithDBManager:(id)a0;
- (id)fetchWithPredicate:(id)a0 forEntity:(id)a1 withLimit:(BOOL)a2;
- (id)callDBProperties;
- (BOOL)handleSaveForCallRecordContext:(id)a0 error:(id *)a1;
- (void)postTimersChangedNotification;
- (id)fetchAllNoLimit;
- (id)fetchObjectsWithUniqueIds:(id)a0;
- (id)fetchAllObjectsWithUniqueId:(id)a0;
- (BOOL)performSaveWithBackgroundTaskAssertion:(id)a0 error:(id *)a1;
- (void)deleteObjectWithUniqueId:(id)a0;
- (id)fetchWithCallTypes:(unsigned int)a0;
- (id)timerOutgoing;
- (id)createCallRecord;
- (BOOL)resetAllTimers;
- (id)fetchObjectsWithPredicate:(id)a0;
- (long long)deleteManagedCallsWithPredicate:(id)a0;
- (id)updateManagedCallsWithPredicate:(id)a0 propertiesToUpdate:(id)a1;
- (id)timerLifetime;
- (void)handlePersistentStoreChangedNotification:(id)a0;
- (id)fetchObjectWithUniqueId:(id)a0;
- (BOOL)saveTimers:(id /* block */)a0;
- (long long)deleteManagedCalls:(id)a0;
- (void)resetTimers;

@end
