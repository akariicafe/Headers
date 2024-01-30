@class NSMapTable;
@protocol BWInferenceJobProvider;

@interface BWInferenceSchedulerGraph : NSObject {
    id<BWInferenceJobProvider> _head;
    NSMapTable *_directedEdgesByNode;
}

- (void)visitProvidersWithBlock:(id /* block */)a0;
- (void)enumerateVideoDestinationsFromJob:(id)a0 withBlock:(id /* block */)a1;
- (id)initWithHeadNode:(id)a0 directedEdges:(id)a1;
- (void)dealloc;

@end
