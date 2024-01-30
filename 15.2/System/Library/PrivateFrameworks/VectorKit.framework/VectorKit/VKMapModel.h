@class NSArray;
@protocol VKMapModelDelegate;

@interface VKMapModel : NSObject {
    long long _tileSize;
    const void *_mapEngineSettings;
    struct AnimationRunner { struct MapEngine *x0; } *_animationRunner;
    void *_renderer;
    struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _rendererMutex;
    void *_logicManager;
    struct FeatureAttributeSet { struct vector<gss::FeatureAttributePair, geo::StdAllocator<gss::FeatureAttributePair, gss::Allocator>> { struct FeatureAttributePair *__begin_; struct FeatureAttributePair *__end_; struct __compressed_pair<gss::FeatureAttributePair *, geo::StdAllocator<gss::FeatureAttributePair, gss::Allocator>> { struct FeatureAttributePair *__value_; struct StdAllocator<gss::FeatureAttributePair, gss::Allocator> { struct Allocator *_allocator; } __value_; } __end_cap_; } _attributes; } _mapFeatureStyleAttributes;
    struct shared_ptr<gss::StylesheetQuery<gss::PropertyID>> { void *__ptr_; struct __shared_weak_count *__cntrl_; } _styleQuery;
    int _metroArea;
    BOOL _forceMapDrawStyleUpdate;
    struct shared_ptr<md::TaskContext> { struct TaskContext *__ptr_; struct __shared_weak_count *__cntrl_; } _taskContext;
}

@property (nonatomic) int mapType;
@property (nonatomic) float standardMapZoomLevelTransitionZ;
@property (nonatomic) BOOL localizeLabels;
@property (nonatomic) unsigned char labelScaleFactor;
@property (nonatomic) id<VKMapModelDelegate> delegate;
@property (readonly, nonatomic) NSArray *visibleTileSets;
@property (nonatomic) BOOL disableTransitLines;

- (id)navigationPuck;
- (void)reloadStylesheet;
- (void)forceMapType:(int)a0 animated:(BOOL)a1;
- (void)setStyleManager:(struct shared_ptr<gss::StylesheetManager<gss::PropertyID>> { void *x0; struct __shared_weak_count *x1; })a0 forRealistic:(BOOL)a1;
- (id)initWithTarget:(id)a0 renderer:(void *)a1 taskContext:(struct shared_ptr<md::TaskContext> { struct TaskContext *x0; struct __shared_weak_count *x1; })a2 logicManager:(void *)a3 mapEngineSettings:(const void *)a4 animationRunner:(struct AnimationRunner { struct MapEngine *x0; } *)a5;
- (void)destroyRenderer;
- (void)debugHighlightObjectAtPoint:(struct CGPoint { double x0; double x1; })a0 highlightTarget:(unsigned char)a1;
- (void).cxx_destruct;
- (void)performStylesheetDidReload;
- (void)_setStyleManagerFromMapType:(int)a0;
- (void)updateMapDrawStyleWithContext:(const void *)a0;
- (struct shared_ptr<gss::StylesheetManager<gss::PropertyID>> { void *x0; struct __shared_weak_count *x1; })_styleManager;
- (void)layoutWithContext:(const void *)a0;
- (void)setMapType:(int)a0 animated:(BOOL)a1;
- (void)dealloc;
- (double)northYaw;
- (id).cxx_construct;

@end
