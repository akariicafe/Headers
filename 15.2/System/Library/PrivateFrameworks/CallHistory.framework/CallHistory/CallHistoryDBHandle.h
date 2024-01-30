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

+ (id)createForServer;
+ (id)createForClient;
+ (id)createWithDBManager:(id)a0;

- (void)handlePersistentStoreChangedNotification:(id)a0;
- (long long)deleteManagedCalls:(id)a0;
- (id)initWithDBManager:(id)a0;
- (id)getArrayForCallTypeMask:(unsigned int)a0;
- (BOOL)performSaveWithBackgroundTaskAssertion:(id)a0 error:(id *)a1;
- (id)timerLastReset;
- (void)handleCallRecordContextDidSaveNotification:(id)a0;
- (id)fetchObjectsWithUniqueIds:(id)a0;
- (id)fetchWithPredicate:(id)a0 forEntity:(id)a1 withLimit:(BOOL)a2;
- (void)mergeCallDBPropChangesFromRemoteAppSave;
- (id)fetchObjectsWithPredicate:(id)a0;
- (void)unRegisterForNotifications;
- (BOOL)saveTimers:(id /* block */)a0;
- (id)fetchAllObjectsWithUniqueId:(id)a0;
- (unsigned long long)fetchManagedCallCountWithPredicate:(id)a0 sortDescriptors:(id)a1;
- (BOOL)resetAllTimers;
- (id)timerOutgoing;
- (void)updateCallDBProperties;
- (BOOL)save:(id *)a0;
- (void)postTimersChangedNotification;
- (void)resetTimers;
- (BOOL)handleSaveForCallRecordContext:(id)a0 error:(id *)a1;
- (void)registerForNotifications:(id)a0;
- (id)fetchAllNoLimit;
- (void)deleteObjectWithUniqueId:(id)a0;
- (void)mergeCallRecordChangesFromRemoteAppSave;
- (void).cxx_destruct;
- (long long)deleteManagedCallsWithPredicate:(id)a0;
- (id)fetchAll;
- (id)fetchWithCallTypes:(unsigned int)a0;
- (id)timerLifetime;
- (id)fetchWithPredicate:(id)a0 forEntity:(id)a1;
- (id)fetchObjectWithUniqueId:(id)a0;
- (id)updateManagedCallsWithPredicate:(id)a0 propertiesToUpdate:(id)a1;
- (id)fetchManagedCallIdentifiersWithPredicate:(id)a0 sortDescriptors:(id)a1 limit:(unsigned long long)a2 offset:(unsigned long long)a3 batchSize:(unsigned long long)a4;
- (BOOL)moveCallRecordsFromDatabaseAtURL:(id)a0;
- (id)createCallRecord;
- (void)deleteAll;
- (id)callDBProperties;
- (void)deleteObjectsWithUniqueIds:(id)a0;
- (void)dealloc;
- (id)callRecordContext;
- (id)fetchManagedCallsWithPredicate:(id)a0 sortDescriptors:(id)a1 limit:(unsigned long long)a2 offset:(unsigned long long)a3 batchSize:(unsigned long long)a4;
- (id)timerIncoming;
- (void)handleCallDBPropContextDidSaveNotification:(id)a0;

@end
