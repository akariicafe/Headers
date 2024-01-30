@class CHNotifyObserver, CallHistoryDBHandle;

@interface CallHistoryDBClientHandle : CHSynchronizedLoggable {
    id _observerCallTimersRef;
}

@property (readonly, nonatomic) CHNotifyObserver *callsDidChangeNotifyObserver;
@property (readonly, nonatomic) CallHistoryDBHandle *dbStoreHandle;

+ (id)createForServer;
+ (id)createForClient;

- (id)init:(BOOL)a0;
- (void)parseCallStatus_sync:(unsigned int)a0 isAnswered:(BOOL *)a1 isOriginated:(BOOL *)a2;
- (id)manager;
- (BOOL)deleteObjectWithUniqueId:(id)a0 error:(id *)a1;
- (id)fetchCallIdentifiersWithPredicate:(id)a0 sortDescriptors:(id)a1 limit:(unsigned long long)a2 offset:(unsigned long long)a3 batchSize:(unsigned long long)a4;
- (id)timerLastReset;
- (id)fetchObjectsWithUniqueIds:(id)a0;
- (id)convertToCHRecentCalls_sync:(id)a0 limit:(unsigned long long)a1;
- (void)handleCallRecordSave_sync;
- (unsigned int)getCallStatus_sync:(id)a0 isOriginated:(id)a1 isAnswered:(id)a2;
- (id)updateAllCallRecords:(id)a0;
- (BOOL)createCallRecords:(id)a0 error:(id *)a1;
- (unsigned long long)fetchCallCountWithPredicate:(id)a0 sortDescriptors:(id)a1;
- (id)updateCallRecords_sync:(id)a0 error:(id *)a1 save:(BOOL)a2;
- (id)fetchObjectsWithPredicate:(id)a0;
- (BOOL)deleteAll:(id *)a0;
- (void)unRegisterForNotifications;
- (id)fetchCallsWithPredicate:(id)a0 sortDescriptors:(id)a1 limit:(unsigned long long)a2 offset:(unsigned long long)a3 batchSize:(unsigned long long)a4;
- (id)fetchAllObjectsWithUniqueId:(id)a0;
- (BOOL)resetAllTimers;
- (id)fetchCoalescedCallsWithPredicate:(id)a0 sortDescriptors:(id)a1 limit:(unsigned long long)a2 offset:(unsigned long long)a3 batchSize:(unsigned long long)a4;
- (id)updateAllCallRecords_sync:(id)a0 error:(id *)a1;
- (id)timerOutgoing;
- (BOOL)deleteObjectWithUniqueId:(id)a0 error:(id *)a1 save:(BOOL)a2;
- (BOOL)createCallRecord:(id)a0 error:(id *)a1;
- (void)resetTimers;
- (id)fetchAllNoLimit;
- (BOOL)deleteObjectWithUniqueId:(id)a0;
- (void).cxx_destruct;
- (BOOL)updateCallRecord_sync:(id)a0 withChangeDict:(id)a1;
- (BOOL)willHandleNotification_sync:(id)a0;
- (id)fetchAll;
- (id)fetchWithCallTypes:(unsigned int)a0;
- (void)handleCallTimersSave_sync:(id)a0;
- (unsigned long long)fetchCoalescedCallCountWithPredicate:(id)a0 sortDescriptors:(id)a1;
- (BOOL)createCallRecord:(id)a0 error:(id *)a1 save:(BOOL)a2;
- (id)timerLifetime;
- (void)setStoreObject_sync:(id)a0 withClientObject:(id)a1;
- (id)fetchObjectWithUniqueId:(id)a0;
- (long long)deleteCallsWithPredicate:(id)a0;
- (BOOL)createCallRecords:(id)a0;
- (BOOL)moveCallRecordsFromDatabaseAtURL:(id)a0;
- (id)updateCallRecords:(id)a0 error:(id *)a1;
- (BOOL)deleteAll;
- (id)updateCallsWithPredicate:(id)a0 propertiesToUpdate:(id)a1 error:(id *)a2;
- (BOOL)createCallRecord:(id)a0;
- (void)registerForNotifications;
- (BOOL)deleteObjectsWithUniqueIds:(id)a0;
- (id)updateAllCallRecords:(id)a0 error:(id *)a1;
- (void)dealloc;
- (BOOL)saveDatabase:(id *)a0;
- (id)updateCallRecords:(id)a0;
- (id)updateCallRecords:(id)a0 error:(id *)a1 save:(BOOL)a2;
- (id)timerIncoming;
- (BOOL)deleteObjectsWithUniqueIds:(id)a0 error:(id *)a1;
- (id)convertToCHRecentCalls_sync:(id)a0;

@end
