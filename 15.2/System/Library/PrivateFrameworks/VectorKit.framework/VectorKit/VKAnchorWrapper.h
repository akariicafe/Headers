@class NSString;
@protocol MDRenderTarget;

@interface VKAnchorWrapper : NSObject <VKAnchorDelegate> {
    struct shared_ptr<md::Anchor> { struct Anchor *__ptr_; struct __shared_weak_count *__cntrl_; } _anchor;
    struct CGPoint { double x; double y; } _screenPointInCanvas;
    struct CGSize { double width; double height; } _canvasSize;
    const void *_cameraContext;
    void *_anchorManager;
    struct Coordinate3D<Degrees, double> { struct Unit<DegreeUnitDescription, double> { double _value; } latitude; struct Unit<DegreeUnitDescription, double> { double _value; } longitude; struct Unit<MeterUnitDescription, double> { double _value; } altitude; } _lastCoordinate;
    BOOL _isUpdating;
    double _pointsPerMeter;
}

@property (nonatomic) id<MDRenderTarget> displayLayer;
@property (readonly, nonatomic) struct { double x0; double x1; } coordinate;
@property (readonly, nonatomic) struct { double x0; double x1; double x2; } coordinate3D;
@property (nonatomic) BOOL followsTerrain;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateIfNeeded;
- (void)anchorWorldPointDidChange:(void *)a0;
- (void)_updateCachedPoint;
- (struct shared_ptr<md::Anchor> { struct Anchor *x0; struct __shared_weak_count *x1; })_anchorWithContext:(void *)a0;
- (void).cxx_destruct;
- (struct CGPoint { double x0; double x1; })pointInLayer:(id)a0 bound:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)layoutWithContext:(const void *)a0;
- (double)pointOffsetForDistanceOffset:(double)a0;
- (void)dealloc;
- (id).cxx_construct;
- (void)destroyAnchor;

@end
