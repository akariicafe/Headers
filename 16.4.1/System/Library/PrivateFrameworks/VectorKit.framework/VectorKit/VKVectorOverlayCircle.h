@interface VKVectorOverlayCircle : VKVectorOverlayData {
    struct { struct { double x; double y; } origin; struct { double width; double height; } size; } _mapRect;
    struct CGColor { } *_fillColor;
    struct CGColor { } *_strokeColor;
    double _lineWidth;
    double _alpha;
    struct unfair_lock { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock; } _propertiesLock;
    struct shared_ptr<md::CircleOverlayRenderable::Style> { struct Style *__ptr_; struct __shared_weak_count *__cntrl_; } _style;
}

@property (readonly, nonatomic, getter=_renderable) struct shared_ptr<md::CircleOverlayRenderable> { struct CircleOverlayRenderable *__ptr_; struct __shared_weak_count *__cntrl_; } renderable;
@property (readonly, nonatomic, getter=_bounds) struct Box<double, 2> { struct Matrix<double, 2, 1> { double _e[2]; } _minimum; struct Matrix<double, 2, 1> { double _e[2]; } _maximum; } bounds;
@property (nonatomic) double lineWidth;
@property (nonatomic) struct CGColor { } *fillColor;
@property (nonatomic) struct CGColor { } *strokeColor;
@property (nonatomic) double alpha;

- (id).cxx_construct;
- (void)setBlendMode:(long long)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithMapRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0 lineWidth:(double)a1 fillColor:(struct CGColor { } *)a2 strokeColor:(struct CGColor { } *)a3 alpha:(double)a4;
- (void)_updateStyleColor;

@end
