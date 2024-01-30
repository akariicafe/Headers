@class PPNamedEntityStore, WBSHistory, WBSRecentHistoryTopicTagController, CKContextClient, NSDate, NSObject, NSArray;
@protocol OS_dispatch_queue;

@interface WBSForYouTopicManager : NSObject {
    WBSRecentHistoryTopicTagController *_historyTopicTagController;
    PPNamedEntityStore *_namedEntityStore;
    NSObject<OS_dispatch_queue> *_internalQueue;
    WBSHistory *_history;
    CKContextClient *_contextClient;
    NSDate *_lastContextKitRequestDate;
    NSArray *_mostRecentUserVisibleTopics;
}

- (void).cxx_destruct;
- (id)initWithHistory:(id)a0 contextClient:(id)a1;
- (void)_createInternalQueueIfNecessary;
- (void)contextKitTopicsWithCompletionHandler:(id /* block */)a0;
- (void)portraitNamedEntitiesWithCompletionHandler:(id /* block */)a0;

@end
