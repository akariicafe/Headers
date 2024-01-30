@class CHNotifyObserver, CallHistoryDBHandle;

@interface CallHistoryDBClientHandle : CHSynchronizedLoggable {
    id _observerCallTimersRef;
}

@property (readonly, nonatomic) CHNotifyObserver *callsDidChangeNotifyObserver;
@property (readonly, nonatomic) CallHistoryDBHandle *dbStoreHandle;

+ (id)createForClient;
+ (id)createForServer;

- (id)init:(BOOL)a0;
- (long long)deleteCallsWithPredicate:(id)a0;
- (id)fetchCoalescedCallsWithPredicate:(id)a0 sortDescriptors:(id)a1 limit:(unsigned long long)a2 offset:(unsigned long long)a3 batchSize:(unsigned long long)a4;
- (id)updateAllCallRecords:(id)a0 error:(id *)a1;
- (id)updateAllCallRecords_sync:(id)a0 error:(id *)a1;
- (id)updateCallsWithPredicate:(id)a0 propertiesToUpdate:(id)a1 error:(id *)a2;
- (id)fetchAll;
- (BOOL)deleteObjectWithUniqueId:(id)a0 error:(id *)a1;
- (BOOL)willHandleNotification_sync:(id)a0;
- (id)timerIncoming;
- (void)resetTimers;
- (id)fetchWithCallTypes:(unsigned int)a0;
- (BOOL)createCallRecord:(id)a0;
- (BOOL)updateCallRecord_sync:(id)a0 withChangeDict:(id)a1;
- (BOOL)deleteAll;
- (BOOL)createCallRecord:(id)a0 error:(id *)a1 save:(BOOL)a2;
- (id)fetchCallIdentifiersWithPredicate:(id)a0 sortDescriptors:(id)a1 limit:(unsigned long long)a2 offset:(unsigned long long)a3 batchSize:(unsigned long long)a4;
- (id)updateCallRecords_sync:(id)a0 error:(id *)a1 save:(BOOL)a2;
- (id)fetchCallsWithPredicate:(id)a0 sortDescriptors:(id)a1 limit:(unsigned long long)a2 offset:(unsigned long long)a3 batchSize:(unsigned long long)a4;
- (id)fetchObjectsWithUniqueIds:(id)a0;
- (id)updateCallRecords:(id)a0;
- (id)updateAllCallRecords:(id)a0;
- (id)fetchObjectWithUniqueId:(id)a0;
- (BOOL)saveDatabase:(id *)a0;
- (BOOL)createCallRecords:(id)a0 error:(id *)a1;
- (id)updateCallRecords:(id)a0 error:(id *)a1 save:(BOOL)a2;
- (BOOL)deleteObjectWithUniqueId:(id)a0;
- (unsigned int)getCallStatus_sync:(id)a0 isOriginated:(id)a1 isAnswered:(id)a2;
- (void)parseCallStatus_sync:(unsigned int)a0 isAnswered:(BOOL *)a1 isOriginated:(BOOL *)a2;
- (BOOL)resetAllTimers;
- (id)fetchAllObjectsWithUniqueId:(id)a0;
- (void)dealloc;
- (BOOL)createCallRecords:(id)a0;
- (id)convertToCHRecentCalls_sync:(id)a0 limit:(unsigned long long)a1;
- (unsigned long long)fetchCoalescedCallCountWithPredicate:(id)a0 sortDescriptors:(id)a1;
- (id)timerLastReset;
- (BOOL)deleteObjectWithUniqueId:(id)a0 error:(id *)a1 save:(BOOL)a2;
- (BOOL)deleteAll:(id *)a0;
- (BOOL)deleteObjectsWithUniqueIds:(id)a0 error:(id *)a1;
- (BOOL)createCallRecord:(id)a0 error:(id *)a1;
- (void)registerForNotifications;
- (id)manager;
- (id)convertToCHRecentCalls_sync:(id)a0;
- (void)unRegisterForNotifications;
- (BOOL)moveCallRecordsFromDatabaseAtURL:(id)a0;
- (id)fetchObjectsWithPredicate:(id)a0;
- (void)setStoreObject_sync:(id)a0 withClientObject:(id)a1;
- (BOOL)deleteObjectsWithUniqueIds:(id)a0;
- (void)handleCallTimersSave_sync:(id)a0;
- (id)fetchAllNoLimit;
- (void)handleCallRecordSave_sync;
- (id)timerLifetime;
- (id)updateCallRecords:(id)a0 error:(id *)a1;
- (unsigned long long)fetchCallCountWithPredicate:(id)a0 sortDescriptors:(id)a1;
- (id)timerOutgoing;
- (void).cxx_destruct;

@end
