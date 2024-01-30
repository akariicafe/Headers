@class MKMapView, NSObject;
@protocol OS_dispatch_queue, MKOverlay;

@interface MKOverlayView : UIView {
    struct { struct { double x; double y; } origin; struct { double width; double height; } size; } _boundingMapRect;
    id _renderer;
    NSObject<OS_dispatch_queue> *_isolationQueue;
    MKMapView *_mapView;
}

@property (readonly, nonatomic) id<MKOverlay> overlay;

- (BOOL)_canDrawContent;
- (id)initWithCoder:(id)a0;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setNeedsDisplay;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (id)initWithOverlay:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)_mapView;
- (id)_renderer;
- (struct { double x0; double x1; })_originMapPoint;
- (id)_mk_overlayView;
- (struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })mapRectForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForMapRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0;
- (struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })_boundingMapRect;
- (void)_forEachMapRectForKey:(const struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; } *)a0 withContext:(struct CGContext { } *)a1 performBlock:(id /* block */)a2;
- (BOOL)_mayExtendOutsideBounds;
- (id)_mk_overlayLayer;
- (void)_setMapView:(id)a0;
- (void)_updateRenderColors;
- (BOOL)areOverlayResourcesRequired:(id)a0;
- (BOOL)canDrawMapRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0 zoomScale:(double)a1;
- (id)customTileProviderForOverlay:(id)a0;
- (void)drawMapRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0 zoomScale:(double)a1 inContext:(struct CGContext { } *)a2;
- (struct { double x0; double x1; })mapPointForPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)overlay:(id)a0 canDrawKey:(const struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; } *)a1;
- (BOOL)overlay:(id)a0 canPossiblyDrawKey:(const struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; } *)a1;
- (void)overlay:(id)a0 drawKey:(const struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; } *)a1 inContext:(struct CGContext { } *)a2;
- (void)overlay:(id)a0 drawKey:(const struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; } *)a1 withData:(id)a2 inIOSurface:(struct __IOSurface { } *)a3;
- (BOOL)overlayCanProvideCustomTileData:(id)a0;
- (BOOL)overlayCanProvideRasterTileData:(id)a0;
- (BOOL)overlayCanProvideVectorData:(id)a0;
- (struct CGPoint { double x0; double x1; })pointForMapPoint:(struct { double x0; double x1; })a0;
- (id)rasterTileProviderForOverlay:(id)a0;
- (void)setNeedsDisplayInMapRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0;
- (void)setNeedsDisplayInMapRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0 zoomScale:(double)a1;
- (void)set_boundingMapRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0;
- (void)set_renderer:(id)a0;
- (id)vectorDataForOverlay:(id)a0;

@end
