@class NSArray, ARCoachingBlendableSplineGroup, ARCoachingControlPointContainer;
@protocol MTLBuffer;

@interface ARCoachingMetalSplineData : NSObject

@property (readonly, nonatomic) id<MTLBuffer> controlPointsBuffer;
@property (readonly, nonatomic) id<MTLBuffer> controlPointIndicesBuffer;
@property (readonly, nonatomic) id<MTLBuffer> patchUserDataBuffer;
@property (readonly, nonatomic) id<MTLBuffer> tessellationFactorsBuffer;
@property (readonly, nonatomic) id<MTLBuffer> instanceBuffer;
@property (readonly, nonatomic) int patchCount;
@property (readonly, nonatomic) NSArray *instanceTransforms;
@property (readonly, nonatomic) ARCoachingBlendableSplineGroup *shapes;
@property (readonly, nonatomic) ARCoachingControlPointContainer *recordedControlPoints;
@property (readonly, nonatomic) void /* unknown type, empty encoding */ recordedScale;
@property (readonly, nonatomic) void /* unknown type, empty encoding */ recordedTranslation;

- (id)init:(id)a0;
- (void).cxx_destruct;
- (void)computeInstanceTransformScale:(SEL)a0;
- (void)computeInstanceTransformScale:(id)a0 s1:(SEL)a1 t:(float)a2;
- (void)computeInstanceTransformScale:(SEL)a0 t:(float)a1;
- (void)computeInstanceTransformTranslate:(SEL)a0 index:(int)a1;
- (void)computeInstanceTransformTranslate:(SEL)a0 t:(float)a1 index:(int)a2;
- (void)computeInstanceTransformTranslate:(id)a0 x1:(SEL)a1 t:(float)a2 index:(int)a3;
- (void)computeShapeBlendWithEnd:(struct { float x0; } *)a0 endCount:(int)a1;
- (void)computeShapeBlendWithEnd:(struct { float x0; } *)a0 endCount:(int)a1 t:(float)a2;
- (void)computeShapeBlendWithStart:(struct { float x0; } *)a0 startCount:(int)a1 end:(struct { float x0; } *)a2 endCount:(int)a3 t:(float)a4;
- (void)makeShapes;
- (void)recordState;
- (void)resetInstanceTransforms:(id)a0;
- (id)shapeBlendWithStart:(struct { float x0; } *)a0 startCount:(int)a1 end:(struct { float x0; } *)a2 endCount:(int)a3 t:(float)a4;

@end
