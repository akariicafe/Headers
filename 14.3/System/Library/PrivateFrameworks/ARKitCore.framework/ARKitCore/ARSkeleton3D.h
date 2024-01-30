@class ARCoreRESkeletonResult;

@interface ARSkeleton3D : ARSkeleton <NSSecureCoding> {
    ARCoreRESkeletonResult *_skeleton;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) ARCoreRESkeletonResult *coreRESkeleton;
@property (readonly, nonatomic) const struct { void /* unknown type, empty encoding */ x0[4]; } *jointModelTransforms;
@property (readonly, nonatomic) const struct { void /* unknown type, empty encoding */ x0[4]; } *jointLocalTransforms;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)definition;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (unsigned long long)jointCount;
- (BOOL)isJointTracked:(long long)a0;
- (id)initWithCoreRESkeletonResult:(id)a0;
- (struct { void /* unknown type, empty encoding */ x0[4]; })modelTransformForJointName:(id)a0;
- (struct { void /* unknown type, empty encoding */ x0[4]; })localTransformForJointName:(id)a0;

@end
