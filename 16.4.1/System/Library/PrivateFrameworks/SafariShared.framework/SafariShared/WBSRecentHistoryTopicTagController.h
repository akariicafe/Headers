@class WBSHistory;

@interface WBSRecentHistoryTopicTagController : NSObject {
    WBSHistory *_history;
}

@property (nonatomic) unsigned long long maximumNumberOfTopics;
@property (nonatomic) double timeIntervalBeforeNowForFetchingTags;

- (id)initWithHistory:(id)a0;
- (void).cxx_destruct;
- (void)loadTopicsWithCompletionHandler:(id /* block */)a0;

@end
