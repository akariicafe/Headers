@class _DKEventQuery;
@protocol _DKKnowledgeQuerying;

@interface ATXKnowledgeStorePublisher : BPSPublisher

@property (readonly, nonatomic) _DKEventQuery *query;
@property (readonly, nonatomic) id<_DKKnowledgeQuerying> store;

- (id)initWithEventQuery:(id)a0 knowledgeStore:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)subscribe:(id)a0;

@end
