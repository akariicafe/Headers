@class NSMutableDictionary, MKMapView, VKOverlay, NSObject;
@protocol OS_dispatch_queue, MKOverlay;

@interface MKOverlayRenderer : NSObject {
    struct { struct { double x; double y; } origin; struct { double width; double height; } size; } _boundingMapRect;
    VKOverlay *_renderer;
    NSObject<OS_dispatch_queue> *_isolationQueue;
    MKMapView *_mapView;
    double _contentScaleFactor;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _runningAnimationsLock;
    NSMutableDictionary *_runningAnimations;
    union { int cg; long long extended; } _blendMode;
    unsigned char _blendModeType;
}

@property (nonatomic, getter=_blendMode, setter=_setBlendMode:) int blendMode;
@property (nonatomic, getter=_extendedBlendMode, setter=_setExtendedBlendMode:) long long extendedBlendMode;
@property (readonly, nonatomic) id<MKOverlay> overlay;
@property double alpha;
@property (readonly) double contentScaleFactor;

- (id)_mapView;
- (void)_setMapView:(id)a0;
- (id)initWithOverlay:(id)a0;
- (id)_renderer;
- (void)setContentScaleFactor:(double)a0;
- (void)_animateIfNecessaryForKey:(id)a0 withStepHandler:(id /* block */)a1;
- (void)_updateBlendMode;
- (id)_mk_overlayView;
- (void)set_boundingMapRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0;
- (id)_mk_overlayLayer;
- (void)set_renderer:(id)a0;
- (void).cxx_destruct;
- (BOOL)canDrawMapRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0 zoomScale:(double)a1;
- (struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })mapRectForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)init;
- (void)setNeedsDisplayInMapRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0;
- (struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })_boundingMapRect;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForMapRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0;
- (BOOL)_mayExtendOutsideBounds;
- (void)_forEachMapRectForKey:(const struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; } *)a0 withContext:(struct CGContext { } *)a1 performBlock:(id /* block */)a2;
- (struct { double x0; double x1; })mapPointForPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)setNeedsDisplayInMapRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0 zoomScale:(double)a1;
- (BOOL)overlay:(id)a0 canPossiblyDrawKey:(const struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; } *)a1;
- (BOOL)overlay:(id)a0 canDrawKey:(const struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; } *)a1;
- (void)overlay:(id)a0 drawKey:(const struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; } *)a1 inContext:(struct CGContext { } *)a2;
- (id)vectorDataForOverlay:(id)a0;
- (BOOL)overlayCanProvideVectorData:(id)a0;
- (BOOL)overlayCanProvideRasterTileData:(id)a0;
- (id)rasterTileProviderForOverlay:(id)a0;
- (void)drawMapRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0 zoomScale:(double)a1 inContext:(struct CGContext { } *)a2;
- (struct { double x0; double x1; })_originMapPoint;
- (void)setNeedsDisplay;
- (struct CGPoint { double x0; double x1; })pointForMapPoint:(struct { double x0; double x1; })a0;
- (BOOL)_hasNonDefaultBlendMode;
- (void)dealloc;
- (void)_updateRenderColors;

@end
