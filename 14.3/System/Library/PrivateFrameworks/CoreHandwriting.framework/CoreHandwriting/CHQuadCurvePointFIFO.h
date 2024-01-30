@protocol CHPointFIFODrawingTarget;

@interface CHQuadCurvePointFIFO : CHPointFIFO

@property (nonatomic) struct vector<float __attribute__((ext_vector_type(4))), std::__1::allocator<float __attribute__((ext_vector_type(4)))> > { void *__begin_; void *__end_; struct __compressed_pair<float * __attribute__((ext_vector_type(4))), std::__1::allocator<float __attribute__((ext_vector_type(4)))> > { void *__value_; } __end_cap_; } prevPoints;
@property (nonatomic) struct vector<float __attribute__((ext_vector_type(4))), std::__1::allocator<float __attribute__((ext_vector_type(4)))> > { void *__begin_; void *__end_; struct __compressed_pair<float * __attribute__((ext_vector_type(4))), std::__1::allocator<float __attribute__((ext_vector_type(4)))> > { void *__value_; } __end_cap_; } points;
@property (nonatomic) struct vector<float __attribute__((ext_vector_type(4))), std::__1::allocator<float __attribute__((ext_vector_type(4)))> > { void *__begin_; void *__end_; struct __compressed_pair<float * __attribute__((ext_vector_type(4))), std::__1::allocator<float __attribute__((ext_vector_type(4)))> > { void *__value_; } __end_cap_; } controlPoints;
@property (nonatomic) void /* unknown type, empty encoding */ lastPoint;
@property (retain, nonatomic) id<CHPointFIFODrawingTarget> drawingTarget;
@property (nonatomic) float unitScale;
@property (nonatomic) BOOL emitInterpolatedPoints;
@property (copy) id /* block */ emissionHandler;
@property (nonatomic) struct CGPath { } *path;
@property (nonatomic) double lineWidth;

+ (void /* unknown type, empty encoding */)interpolateFromPoint:(id)a0 toPoint:(SEL)a1 controlPoint:(float)a2 time:(void /* unknown type, empty encoding */)a3;

- (void)clear;
- (void).cxx_destruct;
- (void)addPoint:(SEL)a0;
- (void)dealloc;
- (void)setUnitScaleForViewSize:(struct CGSize { double x0; double x1; })a0 normalizedSize:(struct CGSize { double x0; double x1; })a1 contentScaleFactor:(double)a2;
- (void)flush;
- (id).cxx_construct;
- (id)initWithFIFO:(id)a0;
- (id)initWithFIFO:(id)a0 drawingTarget:(id)a1;

@end
