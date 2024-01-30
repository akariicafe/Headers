@class PPLocalTopicStore, PPLocalNamedEntityStore, PPLocalEventStore, PPLocalLocationStore, PPLocalConnectionsStore, PPLocalQuickTypeBroker, PPLocalContactStore, PPSQLDatabase;

@interface PPFeedbackStorage : NSObject {
    PPSQLDatabase *_db;
    PPLocalNamedEntityStore *_namedEntityStoreOverride;
    PPLocalTopicStore *_topicStoreOverride;
    PPLocalLocationStore *_locationStoreOverride;
    PPLocalQuickTypeBroker *_quickTypeBrokerOverride;
    PPLocalContactStore *_contactStoreOverride;
    PPLocalEventStore *_eventStoreOverride;
    PPLocalConnectionsStore *_connectionsStoreOverride;
}

+ (id)storeTypeDescription:(unsigned char)a0;
+ (void)transformOfferedItemsIntoEngagementAndRejection:(id)a0;
+ (void)logFeedback:(id)a0 domain:(unsigned char)a1 domainStatus:(int)a2;

- (id)locationStore;
- (id)init;
- (id)contactStore;
- (void).cxx_destruct;
- (id)initWithDatabase:(id)a0 namedEntityStoreOverride:(id)a1 topicStoreOverride:(id)a2 locationStoreOverride:(id)a3 quickTypeBrokerOverride:(id)a4 contactStoreOverride:(id)a5 eventStoreOverride:(id)a6 connectionsStoreOverride:(id)a7;
- (id)quickTypeBroker;
- (void)_emitMaxRowCountEvent;
- (BOOL)_clearPendingFeedbackRecordsWithStoreType:(unsigned char)a0 limit:(int)a1;
- (id)topicStore;
- (BOOL)deleteAllPendingFeedbackOlderThanDate:(id)a0 deletedCount:(unsigned long long *)a1 error:(id *)a2;
- (id)connectionsStore;
- (BOOL)storePendingFeedback:(id)a0 storeType:(unsigned char)a1 error:(id *)a2;
- (BOOL)processPendingFeedbackWithStoreType:(unsigned char)a0 shouldContinueBlock:(id /* block */)a1 error:(id *)a2;
- (id)namedEntityStore;
- (id)eventStore;
- (void)filterPendingFeedbackItems:(id)a0 storeType:(unsigned char)a1 timestamp:(double)a2 clientIdentifier:(id)a3 clientBundleId:(id)a4 mappingId:(id)a5;

@end
