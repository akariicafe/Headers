@class PPLocalTopicStore, PPLocalNamedEntityStore, PPLocalEventStore, PPLocalLocationStore, PPLocalConnectionsStore, _PASLock, PPLocalQuickTypeBroker, PPLocalContactStore, PPSQLDatabase;

@interface PPFeedbackStorage : NSObject {
    PPSQLDatabase *_db;
    PPLocalNamedEntityStore *_namedEntityStoreOverride;
    PPLocalTopicStore *_topicStoreOverride;
    PPLocalLocationStore *_locationStoreOverride;
    PPLocalQuickTypeBroker *_quickTypeBrokerOverride;
    PPLocalContactStore *_contactStoreOverride;
    PPLocalEventStore *_eventStoreOverride;
    PPLocalConnectionsStore *_connectionsStoreOverride;
    _PASLock *_lock;
}

+ (id)storeTypeDescription:(unsigned char)a0;
+ (void)logFeedback:(id)a0 domain:(unsigned char)a1 domainStatus:(unsigned char)a2;

- (id)pendingTopicFeedback;
- (id)mappedTopicsPendingFeedbackWithShouldContinueBlock:(id /* block */)a0;
- (BOOL)deleteExpiredFeedbackWithShouldContinueBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)processPendingFeedbackWithShouldContinueBlock:(id /* block */)a0 error:(id *)a1;
- (BOOL)storePendingFeedback:(id)a0 storeType:(unsigned char)a1 error:(id *)a2;

@end
