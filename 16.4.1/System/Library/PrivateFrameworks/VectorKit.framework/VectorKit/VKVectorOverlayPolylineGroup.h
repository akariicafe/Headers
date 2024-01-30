@class NSArray;

@interface VKVectorOverlayPolylineGroup : VKVectorOverlayData {
    struct CGColor { } *_color;
    double _lineWidth;
    double _alpha;
    long long _lineJoin;
    long long _lineCap;
    double _miterLimit;
    double _strokeStart;
    double _strokeEnd;
    struct unfair_lock { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock; } _propertiesLock;
}

@property (readonly, nonatomic) struct shared_ptr<md::PolylineOverlayStyle> { struct PolylineOverlayStyle *__ptr_; struct __shared_weak_count *__cntrl_; } style;
@property (readonly, nonatomic) NSArray *polylines;
@property (nonatomic) double lineWidth;
@property (nonatomic) long long lineJoin;
@property (nonatomic) long long lineCap;
@property (nonatomic) struct CGColor { } *color;
@property (nonatomic) double alpha;
@property (nonatomic) double miterLimit;
@property (nonatomic) double strokeStart;
@property (nonatomic) double strokeEnd;

- (id).cxx_construct;
- (void)setBlendMode:(long long)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithPolylines:(id)a0;
- (void)setColorStopColors:(id)a0 locations:(id)a1;
- (void)_updateStyleColor;

@end
