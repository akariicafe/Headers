@interface _UIViewAnimationAttributes : NSObject <NSSecureCoding> {
    unsigned long long _options;
    struct CAFrameRateRange { float minimum; float maximum; float preferred; } _preferredFrameRateRange;
    unsigned int _updateReason;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic, getter=_duration) double duration;
@property (readonly, nonatomic, getter=_delay) double delay;
@property (readonly, nonatomic, getter=_frameInterval) double frameInterval;
@property (readonly, nonatomic, getter=_preferredFrameRateRange) struct CAFrameRateRange { float x0; float x1; float x2; } preferredFrameRateRange;
@property (readonly, nonatomic, getter=_updateReason) unsigned int updateReason;
@property (readonly, nonatomic, getter=_curve) long long curve;
@property (readonly, nonatomic, getter=_hasSpringAttributes) BOOL hasSpringAttributes;
@property (readonly, nonatomic, getter=_springDamping) double springDamping;
@property (readonly, nonatomic, getter=_springVelocity) double springVelocity;
@property (readonly, nonatomic, getter=_springMass) double springMass;
@property (readonly, nonatomic, getter=_springStiffness) double springStiffness;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
