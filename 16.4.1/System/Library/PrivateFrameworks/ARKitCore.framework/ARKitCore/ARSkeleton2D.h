@class ABPK2DDetectionResult;

@interface ARSkeleton2D : ARSkeleton <NSSecureCoding> {
    ABPK2DDetectionResult *_skeleton;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) const void *jointLandmarks;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)definition;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)isJointTracked:(long long)a0;
- (id)initWithDetectedSkeleton:(id)a0;
- (unsigned long long)jointCount;
- (void /* unknown type, empty encoding */)landmarkForJointNamed:(id)a0;

@end
