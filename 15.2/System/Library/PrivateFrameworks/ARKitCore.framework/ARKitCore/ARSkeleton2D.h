@class AR2DSkeletonDetectionResult;

@interface ARSkeleton2D : ARSkeleton <NSSecureCoding> {
    AR2DSkeletonDetectionResult *_skeleton;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) const void *jointLandmarks;

- (void)encodeWithCoder:(id)a0;
- (id)definition;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)jointCount;
- (BOOL)isJointTracked:(long long)a0;
- (id)initWithDetectedSkeleton:(id)a0;
- (void /* unknown type, empty encoding */)landmarkForJointNamed:(id)a0;

@end
