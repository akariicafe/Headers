@class TSURetainedPointerKeyDictionary, NSSet, NSDictionary, NSArray, NSMutableArray;
@protocol TSDLayerAndSubviewHosting;

@interface TSDCanvasSubviewsController : NSObject {
    NSDictionary *_repsByChildView;
    id<TSDLayerAndSubviewHosting> _host;
    NSArray *_alternateLayersForViews;
    BOOL _needsLayout;
    BOOL _hasBeenTornDown;
    NSMutableArray *_subviewLayers;
    TSURetainedPointerKeyDictionary *_repViewControllersByChildView;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _mutex;
}

@property (readonly, nonatomic) NSSet *repChildViews;

- (void)setNeedsLayout;
- (void)updateTopLevelLayersForTiling:(id)a0;
- (void)teardown;
- (void)dealloc;
- (void)updateViewsFromReps;
- (void)removeSubviews:(id)a0;
- (id)initWithLayerAndSubviewHost:(id)a0;
- (void)p_recursivelyFindHostingRepsForRep:(id)a0 accumulatingHostingReps:(id)a1;
- (void)p_recursivelyFindAlternateLayersForRep:(id)a0 accumulatingLayers:(id)a1 repsByChildLayer:(id)a2;
- (id)p_topLevelReps;
- (void)p_recursivelyFindChildViewsForRep:(id)a0 accumulatingViews:(id)a1 accumulatingRepsByChildView:(id)a2;
- (id)updateAlternateLayersForViews;
- (void)p_sortSubviews:(id)a0;
- (void)addSubviews:(id)a0;
- (void)p_sortLayers:(id)a0;
- (void)syncPerformBlock:(id /* block */)a0;

@end
