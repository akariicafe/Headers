@class _DKKnowledgeStore, _CDClientContext;

@interface BMAppClipLaunchSource : BMStoreSource

@property (readonly, nonatomic) _CDClientContext *contextStore;
@property (readonly, nonatomic) _DKKnowledgeStore *knowledgeStore;

- (void).cxx_destruct;
- (void)sendEvent:(id)a0;
- (id)initWithIdentifier:(id)a0;

@end
