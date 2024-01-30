@class NSObject;
@protocol OS_dispatch_queue;

@interface _DKKnowledgeStorageLogging : NSObject <_DKKnowledgeStorageEventNotificationDelegate> {
    NSObject<OS_dispatch_queue> *_notificationQueue;
}

- (void)knowledgeStorage:(id)a0 didInsertEventsWithStreamNameCounts:(id)a1;
- (void)knowledgeStorage:(id)a0 didDeleteEventsWithStreamNameCounts:(id)a1;
- (void)knowledgeStorage:(id)a0 didTombstoneEventsWithStreamNameCounts:(id)a1;
- (void)knowledgeStorage:(id)a0 didInsertLocalEventsWithStreamNameCounts:(id)a1;
- (id)init;
- (void).cxx_destruct;

@end
