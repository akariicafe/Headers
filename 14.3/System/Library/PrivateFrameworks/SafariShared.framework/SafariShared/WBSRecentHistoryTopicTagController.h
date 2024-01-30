@class WBSHistory;

@interface WBSRecentHistoryTopicTagController : NSObject {
    WBSHistory *_history;
}

@property (nonatomic) unsigned long long maximumNumberOfTopics;
@property (nonatomic) double timeIntervalBeforeNowForFetchingTags;

- (void).cxx_destruct;
- (void)loadTopicsWithCompletionHandler:(id /* block */)a0;
- (id)initWithHistory:(id)a0;

@end
