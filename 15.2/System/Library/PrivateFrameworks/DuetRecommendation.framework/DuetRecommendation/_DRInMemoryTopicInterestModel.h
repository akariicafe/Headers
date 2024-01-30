@class _DRTopicInterestSummary, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface _DRInMemoryTopicInterestModel : NSObject <_DRTopicInterestModeling> {
    NSMutableArray *_topics;
    _DRTopicInterestSummary *_summary;
    NSObject<OS_dispatch_queue> *_syncQueue;
}

+ (id)predicateForTopicInteractionsBefore:(id)a0;
+ (id)predicateForTopicsWithPrefix:(id)a0;
+ (id)predicateForTopicInteractionsAfter:(id)a0;

- (void).cxx_destruct;
- (id)init;
- (void)purgeEntriesWithPrefix:(id)a0 earlierThanDate:(id)a1;
- (void)recordPresentationOfTopics:(id)a0 onDate:(id)a1;
- (void)recordSelectionOfTopics:(id)a0 onDate:(id)a1;
- (id)computeSummaryWithFilter:(id)a0;
- (void)enumerateTopicCountsWithFilter:(id)a0 block:(id /* block */)a1;
- (void)purgeEntriesEarlierThanDate:(id)a0;

@end
