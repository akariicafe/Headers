@class NSMutableDictionary, CAAnimation, NSArray, NSString, NSMutableArray;

@interface MDLTransformStack : NSObject <NSCopying, MDLTransformComponent>

@property (copy, nonatomic) NSMutableArray *transformOps;
@property (retain, nonatomic) NSMutableDictionary *animatedValues;
@property (readonly, nonatomic) CAAnimation *transformAnimation;
@property (readonly, copy, nonatomic) NSArray *keyTimes;
@property (nonatomic) struct { void /* unknown type, empty encoding */ x0[4]; } matrix;
@property (nonatomic) BOOL resetsTransform;
@property (readonly, nonatomic) double minimumTime;
@property (readonly, nonatomic) double maximumTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct { void /* unknown type, empty encoding */ x0[4]; })globalTransformWithObject:(id)a0 atTime:(double)a1;
+ (struct { void /* unknown type, empty encoding */ x0[4]; })localTransformWithObject:(id)a0 atTime:(double)a1;

- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)count;
- (void)setLocalTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a0;
- (id)addMatrixOp:(id)a0 inverse:(BOOL)a1;
- (id)addRotateXOp:(id)a0 inverse:(BOOL)a1;
- (id)addRotateYOp:(id)a0 inverse:(BOOL)a1;
- (id)addRotateZOp:(id)a0 inverse:(BOOL)a1;
- (id)addTranslateOp:(id)a0 inverse:(BOOL)a1;
- (id)addScaleOp:(id)a0 inverse:(BOOL)a1;
- (id)addRotateOp:(id)a0 order:(unsigned long long)a1 inverse:(BOOL)a2;
- (id)addOrientOp:(id)a0 inverse:(BOOL)a1;
- (struct { void /* unknown type, empty encoding */ x0[4]; })float4x4AtTime:(double)a0;
- (struct { void /* unknown type, empty encoding */ x0[4]; })double4x4AtTime:(double)a0;
- (id)animatedVector3WithName:(id)a0 shouldCreateIfMissing:(BOOL)a1;
- (id)animatedScalarWithName:(id)a0 shouldCreateIfMissing:(BOOL)a1;
- (id)animatedMatrix4x4WithName:(id)a0 shouldCreateIfMissing:(BOOL)a1;
- (id)animatedQuaternionWithName:(id)a0 shouldCreateIfMissing:(BOOL)a1;
- (struct { void /* unknown type, empty encoding */ x0[4]; })localTransformAtTime:(double)a0;
- (void)clearTransformStack;
- (void)setLocalTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a0 forTime:(double)a1;
- (BOOL)isScaleRotateTransformOrder;
- (id)decomposedTransformAnimation;
- (id)animatedVector4WithName:(id)a0 shouldCreateIfMissing:(BOOL)a1;
- (id)animatedValueWithName:(id)a0;

@end
