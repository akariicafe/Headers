@class NSMutableDictionary;

@interface AVTAvatarPose : NSObject <NSCopying> {
    BOOL _hasNeckPosition;
    BOOL _hasNeckOrientation;
    NSMutableDictionary *_weights;
}

@property (nonatomic) void /* unknown type, empty encoding */ neckPosition;
@property (nonatomic) struct { void /* unknown type, empty encoding */ vector; } neckOrientation;
@property (nonatomic) double bakedAnimationBlendFactor;

+ (id)friendlyPose;
+ (id)neutralPose;
+ (id)posesForMemojiInPosePack:(id)a0;
+ (id)posesInPosePack:(id)a0 avatarSelectionBlock:(id /* block */)a1;
+ (id)posesInPosePack:(id)a0;
+ (id)posesForAnimojiNamed:(id)a0 inPosePack:(id)a1;

- (id)initWithScene:(id)a0;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)setWeights:(id)a0;
- (id)poseByMergingPose:(id)a0;
- (void)setWeight:(double)a0 forBlendShapeNamed:(id)a1;
- (double)weightForBlendShapeNamed:(id)a0;
- (id)initWithWeights:(id)a0 neckPosition:(void *)a1 neckOrientation:(struct { } *)a2 bakedAnimationBlendFactor:(double)a3;
- (BOOL)affectsPhysicsSimulation;

@end
