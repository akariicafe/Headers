@class NSMapTable;
@protocol BWInferenceJobProvider;

@interface BWInferenceSchedulerGraph : NSObject {
    id<BWInferenceJobProvider> _head;
    NSMapTable *_directedEdgesByNode;
}

- (void)dealloc;
- (id)initWithHeadNode:(id)a0 directedEdges:(id)a1;
- (void)enumerateVideoDestinationsFromJob:(id)a0 withBlock:(id /* block */)a1;
- (void)_visitJob:(id)a0 withEnRouteAccumulation:(id)a1 block:(id /* block */)a2;
- (void)visitProvidersWithBlock:(id /* block */)a0;

@end
