@class NSString, CallDBManager, NSManagedObjectContext;

@interface CallHistoryDBHandle : CHLogger {
    NSManagedObjectContext *fCallRecordContext;
    NSManagedObjectContext *fCallDBPropertiesContext;
    id _observerCallRecordRef;
    id _observerCallDBPropRef;
    id _moveCallRecordsFromTempStoreRef;
    id _dataStoreAddedRef;
}

@property (class, readonly, copy, nonatomic) NSString *objectId;

@property (nonatomic) long long callsDidChangeDarwinNotificationCount;
@property (readonly, nonatomic) CallDBManager *callDBManager;

+ (id)createForClient;
+ (id)createWithDBManager:(id)a0;
+ (id)createForServer;

- (BOOL)save:(id *)a0;
- (BOOL)performSaveWithBackgroundTaskAssertion:(id)a0 error:(id *)a1;
- (id)initWithDBManager:(id)a0;
- (id)fetchManagedCallsWithPredicate:(id)a0 sortDescriptors:(id)a1 limit:(unsigned long long)a2 offset:(unsigned long long)a3 batchSize:(unsigned long long)a4;
- (void)updateCallDBProperties;
- (id)fetchWithPredicate:(id)a0 forEntity:(id)a1;
- (id)fetchAll;
- (id)callDBProperties;
- (id)timerIncoming;
- (void)resetTimers;
- (long long)deleteManagedCallsWithPredicate:(id)a0;
- (BOOL)saveTimers:(id /* block */)a0;
- (id)fetchWithCallTypes:(unsigned int)a0;
- (void)deleteAll;
- (id)callRecordContext;
- (id)fetchObjectsWithUniqueIds:(id)a0;
- (void)handleCallDBPropContextDidSaveNotification:(id)a0;
- (BOOL)handleSaveForCallRecordContext:(id)a0 error:(id *)a1;
- (id)fetchObjectWithUniqueId:(id)a0;
- (void)handleCallRecordContextDidSaveNotification:(id)a0;
- (void)deleteObjectWithUniqueId:(id)a0;
- (unsigned long long)fetchManagedCallCountWithPredicate:(id)a0 sortDescriptors:(id)a1;
- (BOOL)resetAllTimers;
- (id)fetchAllObjectsWithUniqueId:(id)a0;
- (void)postTimersChangedNotification;
- (void)dealloc;
- (id)createCallRecord;
- (id)timerLastReset;
- (id)fetchWithPredicate:(id)a0 forEntity:(id)a1 withLimit:(BOOL)a2;
- (long long)deleteManagedCalls:(id)a0;
- (void)registerForNotifications:(id)a0;
- (void)handlePersistentStoreChangedNotification:(id)a0;
- (void)mergeCallRecordChangesFromRemoteAppSave;
- (void)unRegisterForNotifications;
- (BOOL)moveCallRecordsFromDatabaseAtURL:(id)a0;
- (id)fetchObjectsWithPredicate:(id)a0;
- (void)deleteObjectsWithUniqueIds:(id)a0;
- (id)fetchAllNoLimit;
- (id)timerLifetime;
- (void)mergeCallDBPropChangesFromRemoteAppSave;
- (id)fetchManagedCallIdentifiersWithPredicate:(id)a0 sortDescriptors:(id)a1 limit:(unsigned long long)a2 offset:(unsigned long long)a3 batchSize:(unsigned long long)a4;
- (id)timerOutgoing;
- (id)getArrayForCallTypeMask:(unsigned int)a0;
- (id)updateManagedCallsWithPredicate:(id)a0 propertiesToUpdate:(id)a1;
- (void).cxx_destruct;

@end
