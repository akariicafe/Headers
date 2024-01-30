@class _DKKnowledgeStore, _DKEventStream;

@interface PRSCoreDuet : NSObject

@property (retain) _DKKnowledgeStore *knowledgeStore;
@property (retain) _DKEventStream *spotlightStream;

- (id)getRankedCategoriesDictionaryWithPredictionWindow:(double)a0 predictionInterval:(double)a1;
- (void)addResultCategoryAndGroupToHistory:(id)a0 groupName:(id)a1 error:(id)a2;
- (void).cxx_destruct;
- (id)initWithStreamName:(id)a0;

@end
