@class CallHistoryDBHandle;

@interface CallHistoryDBClientHandle : CHSynchronizedLoggable {
    id _observerCallRecordRef;
    id _observerCallTimersRef;
}

@property (readonly, nonatomic) CallHistoryDBHandle *dbStoreHandle;

+ (id)createForServer;
+ (id)createForClient;

- (id)updateCallsWithPredicate:(id)a0 propertiesToUpdate:(id)a1 error:(id *)a2;
- (BOOL)deleteObjectsWithUniqueIds:(id)a0;
- (id)updateCallRecords:(id)a0;
- (void)registerForNotifications;
- (id)init;
- (id)init:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)moveCallRecordsFromDatabaseAtURL:(id)a0;
- (unsigned int)getCallStatus_sync:(id)a0 isOriginated:(id)a1 isAnswered:(id)a2;
- (BOOL)createCallRecord:(id)a0;
- (BOOL)createCallRecords:(id)a0;
- (void)dealloc;
- (void)handleCallRecordSave_sync:(id)a0;
- (void)handleCallTimersSave_sync:(id)a0;
- (BOOL)deleteObjectsWithUniqueIds:(id)a0 error:(id *)a1;
- (void)setStoreObject_sync:(id)a0 withClientObject:(id)a1;
- (unsigned long long)fetchCallCountWithPredicate:(id)a0 sortDescriptors:(id)a1;
- (void)unRegisterForNotifications;
- (long long)deleteCallsWithPredicate:(id)a0;
- (id)fetchAll;
- (id)updateAllCallRecords_sync:(id)a0 error:(id *)a1;
- (id)updateCallRecords_sync:(id)a0 error:(id *)a1 save:(BOOL)a2;
- (BOOL)deleteAll;
- (BOOL)createCallRecords:(id)a0 error:(id *)a1;
- (BOOL)deleteAll:(id *)a0;
- (id)timerLastReset;
- (id)timerIncoming;
- (BOOL)saveDatabase:(id *)a0;
- (id)fetchCoalescedCallsWithPredicate:(id)a0 sortDescriptors:(id)a1 limit:(unsigned long long)a2 offset:(unsigned long long)a3 batchSize:(unsigned long long)a4;
- (id)updateAllCallRecords:(id)a0;
- (id)updateAllCallRecords:(id)a0 error:(id *)a1;
- (id)fetchAllNoLimit;
- (id)fetchObjectsWithUniqueIds:(id)a0;
- (id)fetchAllObjectsWithUniqueId:(id)a0;
- (BOOL)deleteObjectWithUniqueId:(id)a0;
- (id)fetchCallsWithPredicate:(id)a0 sortDescriptors:(id)a1 limit:(unsigned long long)a2 offset:(unsigned long long)a3 batchSize:(unsigned long long)a4;
- (id)fetchWithCallTypes:(unsigned int)a0;
- (id)fetchCallIdentifiersWithPredicate:(id)a0 sortDescriptors:(id)a1 limit:(unsigned long long)a2 offset:(unsigned long long)a3 batchSize:(unsigned long long)a4;
- (id)timerOutgoing;
- (BOOL)deleteObjectWithUniqueId:(id)a0 error:(id *)a1 save:(BOOL)a2;
- (BOOL)resetAllTimers;
- (id)convertToCHRecentCalls_sync:(id)a0;
- (id)fetchObjectsWithPredicate:(id)a0;
- (unsigned long long)fetchCoalescedCallCountWithPredicate:(id)a0 sortDescriptors:(id)a1;
- (id)timerLifetime;
- (void)parseCallStatus_sync:(unsigned int)a0 isAnswered:(BOOL *)a1 isOriginated:(BOOL *)a2;
- (id)convertToCHRecentCalls_sync:(id)a0 limit:(unsigned long long)a1;
- (BOOL)deleteObjectWithUniqueId:(id)a0 error:(id *)a1;
- (BOOL)willHandleNotification_sync:(id)a0;
- (id)fetchObjectWithUniqueId:(id)a0;
- (id)manager;
- (BOOL)createCallRecord:(id)a0 error:(id *)a1;
- (BOOL)updateCallRecord_sync:(id)a0 withChangeDict:(id)a1;
- (id)updateCallRecords:(id)a0 error:(id *)a1;
- (BOOL)createCallRecord:(id)a0 error:(id *)a1 save:(BOOL)a2;
- (id)updateCallRecords:(id)a0 error:(id *)a1 save:(BOOL)a2;
- (void)resetTimers;

@end
