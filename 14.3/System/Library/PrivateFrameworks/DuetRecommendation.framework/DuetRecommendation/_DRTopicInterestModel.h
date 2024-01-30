@class _DKKnowledgeStorage, NSObject;
@protocol OS_dispatch_queue;

@interface _DRTopicInterestModel : NSObject <_DRTopicInterestModeling>

@property (retain) NSObject<OS_dispatch_queue> *syncQueue;
@property (retain) _DKKnowledgeStorage *storage;

+ (id)topicPresentedCategory;
+ (id)predicateForTopicsWithPrefix:(id)a0;
+ (id)predicateForTopicInteractionsAfter:(id)a0;
+ (id)topicActionCategoryType;
+ (id)newsStorageDirectory;
+ (id)predicateForTopicInteractionsBefore:(id)a0;
+ (id)topicSelectedCategory;

- (id)init;
- (void).cxx_destruct;
- (void)enumerateTopicCountsWithFilter:(id)a0 block:(id /* block */)a1;
- (id)computeSummaryWithFilter:(id)a0;
- (void)purgeEntriesEarlierThanDate:(id)a0;
- (id)initWithStorageDirectory:(id)a0 localOnly:(BOOL)a1;
- (void)recordPresentationOfTopics:(id)a0 onDate:(id)a1;
- (id)initWithStorageDirectory:(id)a0;
- (void)recordSelectionOfTopics:(id)a0 onDate:(id)a1;
- (void)purgeEntriesWithPrefix:(id)a0 earlierThanDate:(id)a1;

@end
