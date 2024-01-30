@class _DKKnowledgeStorage, NSObject;
@protocol OS_dispatch_queue;

@interface _DRTopicInterestModel : NSObject <_DRTopicInterestModeling>

@property (retain) NSObject<OS_dispatch_queue> *syncQueue;
@property (retain) _DKKnowledgeStorage *storage;

+ (id)topicActionCategoryType;
+ (id)topicPresentedCategory;
+ (id)topicSelectedCategory;
+ (id)predicateForTopicInteractionsBefore:(id)a0;
+ (id)predicateForTopicsWithPrefix:(id)a0;
+ (id)newsStorageDirectory;
+ (id)predicateForTopicInteractionsAfter:(id)a0;

- (void).cxx_destruct;
- (id)init;
- (id)initWithStorageDirectory:(id)a0;
- (id)initWithStorageDirectory:(id)a0 localOnly:(BOOL)a1;
- (void)purgeEntriesWithPrefix:(id)a0 earlierThanDate:(id)a1;
- (void)recordPresentationOfTopics:(id)a0 onDate:(id)a1;
- (void)recordSelectionOfTopics:(id)a0 onDate:(id)a1;
- (id)computeSummaryWithFilter:(id)a0;
- (void)enumerateTopicCountsWithFilter:(id)a0 block:(id /* block */)a1;
- (void)purgeEntriesEarlierThanDate:(id)a0;

@end
