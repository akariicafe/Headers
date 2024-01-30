@class NSObject, _DKKnowledgeContentProvider, _DKContentProviderCache;
@protocol OS_dispatch_queue, _DKKnowledgeQuerying;

@interface _DKQueryDispatcher : NSObject <_DKKnowledgeQuerying> {
    NSObject<OS_dispatch_queue> *_queryQueue;
    NSObject<OS_dispatch_queue> *_defaultResponseQueue;
    id<_DKKnowledgeQuerying> _knowledgeStore;
    _DKKnowledgeContentProvider *_knowledgeContentProvider;
}

@property (retain, nonatomic) _DKContentProviderCache *contentProviderCache;

- (id)executeQuery:(id)a0 error:(id *)a1;
- (void)executeQuery:(id)a0 responseQueue:(id)a1;
- (id)initWithKnowledgeStore:(id)a0;
- (void).cxx_destruct;
- (void)executeQuery:(id)a0 responseQueue:(id)a1 withCompletion:(id /* block */)a2;

@end
