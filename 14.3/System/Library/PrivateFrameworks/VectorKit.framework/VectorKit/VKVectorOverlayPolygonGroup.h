@class NSArray;

@interface VKVectorOverlayPolygonGroup : VKVectorOverlayData {
    struct CGColor { } *_fillColor;
    struct CGColor { } *_strokeColor;
    double _lineWidth;
    long long _lineJoin;
    double _miterLimit;
    double _alpha;
    double _strokeStart;
    double _strokeEnd;
    struct unfair_lock { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock; } _propertiesLock;
}

@property (readonly, nonatomic, getter=_style) struct shared_ptr<md::PolygonOverlayRenderable::Style> { struct Style *__ptr_; struct __shared_weak_count *__cntrl_; } style;
@property (readonly, nonatomic) NSArray *polygons;
@property (nonatomic) double lineWidth;
@property (nonatomic) long long lineJoin;
@property (nonatomic) struct CGColor { } *fillColor;
@property (nonatomic) struct CGColor { } *strokeColor;
@property (nonatomic) double alpha;
@property (nonatomic) double miterLimit;
@property (nonatomic) double strokeStart;
@property (nonatomic) double strokeEnd;

- (void).cxx_destruct;
- (void)dealloc;
- (void)_updateStyleColor;
- (id).cxx_construct;
- (id)initWithPolygons:(id)a0;

@end
