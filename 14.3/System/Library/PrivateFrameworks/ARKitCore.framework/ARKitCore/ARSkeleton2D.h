@class AR2DSkeletonDetectionResult;

@interface ARSkeleton2D : ARSkeleton <NSSecureCoding> {
    AR2DSkeletonDetectionResult *_skeleton;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) const void *jointLandmarks;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)definition;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (unsigned long long)jointCount;
- (BOOL)isJointTracked:(long long)a0;
- (id)initWithDetectedSkeleton:(id)a0;
- (void /* unknown type, empty encoding */)landmarkForJointNamed:(id)a0;

@end
