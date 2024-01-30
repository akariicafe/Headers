@class NSString, NSArray, VKMapModel, VKTimedAnimation;
@protocol VKInteractiveMapDelegate;

@interface VKMapCanvas : VKScreenCanvas <VKMapModelDelegate, VKInteractiveMap> {
    struct CGSize { double width; double height; } _lastCanvasSize;
    struct optional<float> { BOOL _hasValue; union ValueUnion { unsigned char data[4]; float type; } _value; } _lastValidCanvasSizeZoomLevel;
    VKTimedAnimation *_horizontalOffsetAnimation;
    struct shared_ptr<md::OverlayContainer> { struct OverlayContainer *__ptr_; struct __shared_weak_count *__cntrl_; } _overlayContainer;
}

@property (nonatomic) id<VKInteractiveMapDelegate> delegate;
@property (nonatomic) BOOL trafficEnabled;
@property (readonly, nonatomic) VKMapModel *map;
@property (nonatomic) double canonicalSkyHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSArray *overlays;
@property (readonly, nonatomic) NSArray *visibleTileSets;

+ (BOOL)supportsMapType:(int)a0 scale:(int)a1;

- (struct { double x0; double x1; })convertPointToCoordinate:(struct CGPoint { double x0; double x1; })a0;
- (id /* block */)globeAnnotationRectTest;
- (void)setMapType:(int)a0;
- (id)navigationPuck;
- (void)removeOverlay:(id)a0;
- (void)updateWithTimestamp:(double)a0 withContext:(void *)a1;
- (void)clearScene;
- (struct CGPoint { double x0; double x1; })convertCoordinateToPoint:(struct { double x0; double x1; })a0;
- (void)reloadStylesheet;
- (long long)tileSize;
- (void)updateCameraForFrameResize;
- (void)mapModel:(id)a0 selectedLabelMarkerWillDisappear:(const void *)a1;
- (void)transferStateFromCanvas:(id)a0;
- (void)insertOverlay:(id)a0 aboveOverlay:(id)a1;
- (id /* block */)annotationRectTest;
- (void)updateOverlays;
- (id)consoleString:(BOOL)a0;
- (id)initWithMapEngine:(void *)a0 inBackground:(BOOL)a1;
- (void)insertOverlay:(id)a0 belowOverlay:(id)a1;
- (id)markerAtScreenPoint:(struct CGPoint { double x0; double x1; })a0 enableExtendedFeatureMarkers:(BOOL)a1;
- (void)didBecomeInActive;
- (BOOL)isPointValidForGesturing:(struct CGPoint { double x0; double x1; })a0;
- (id)attributionsForCurrentRegion;
- (void)debugHighlightObjectAtPoint:(struct CGPoint { double x0; double x1; })a0 highlightTarget:(unsigned char)a1;
- (id /* block */)annotationCoordinateTest;
- (void)mapModelLabelsDidLayout:(id)a0;
- (void).cxx_destruct;
- (id /* block */)globeAnnotationCoordinateTest;
- (id)detailedDescription;
- (void)mapModelDidReloadStylesheet:(id)a0;
- (struct CGPoint { double x0; double x1; })convertMapPointToPoint:(struct { double x0; double x1; })a0;
- (void)mapModelDidUpdateMinMaxZoomLevel:(id)a0;
- (void)mapModel:(id)a0 labelMarkerDidChangeState:(const void *)a1;
- (struct CGPoint { double x0; double x1; })convertCoordinateToCameraModelPoint:(struct { double x0; double x1; })a0;
- (void)setCameraHorizontalOffset:(double)a0 duration:(double)a1 timingFunction:(id)a2;
- (void)goToTileX:(int)a0 Y:(int)a1 Z:(int)a2 tileSize:(int)a3;
- (void)populateDebugNode:(void *)a0 withOptions:(const void *)a1;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)setMapType:(int)a0 animated:(BOOL)a1;
- (struct optional<float> { BOOL x0; union ValueUnion { unsigned char x0[4]; float x1; } x1; })_zoomLevelForCanvasSize:(struct CGSize { double x0; double x1; })a0;
- (void)setContentsScale:(double)a0;
- (void)dealloc;
- (struct { double x0; double x1; })convertPointToMapPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)didBecomeActive;
- (id).cxx_construct;
- (void)addOverlay:(id)a0;
- (void)transitionToTracking:(BOOL)a0 mapMode:(long long)a1 startLocation:(struct { double x0; double x1; })a2 startCourse:(double)a3 cameraController:(id)a4 pounceCompletionHandler:(id /* block */)a5;
- (BOOL)shouldHideOffscreenSelectedAnnotation;

@end
