@class NSString, CAMediaTimingFunction;

@interface BSAnimationSettings : NSObject <NSCopying, NSMutableCopying, NSSecureCoding, BSXPCCoding> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    float _lock_speed;
    double _lock_storedDuration;
    double _lock_delay;
    double _lock_frameInterval;
    struct CAFrameRateRange { float minimum; float maximum; float preferred; } _lock_frameRange;
    unsigned int _lock_highFrameRateReason;
    CAMediaTimingFunction *_lock_timingFunction;
    double _lock_mass;
    double _lock_stiffness;
    double _lock_damping;
    double _lock_epsilon;
    double _lock_initialVelocity;
    BOOL _lock_storedDurationIsDirty;
    BOOL _mutable;
    BOOL _isSpring;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double mass;
@property (readonly, nonatomic) double stiffness;
@property (readonly, nonatomic) double damping;
@property (readonly, nonatomic) double epsilon;
@property (readonly, nonatomic) double initialVelocity;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) double delay;
@property (readonly, nonatomic) double frameInterval;
@property (readonly, nonatomic) struct CAFrameRateRange { float x0; float x1; float x2; } preferredFrameRateRange;
@property (readonly, nonatomic) unsigned int highFrameRateReason;
@property (readonly, nonatomic) CAMediaTimingFunction *timingFunction;
@property (readonly, nonatomic) float speed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)settingsWithDuration:(double)a0 delay:(double)a1;
+ (id)settingsWithDuration:(double)a0 timingFunction:(id)a1;
+ (id)settingsWithDuration:(double)a0;
+ (id)settingsWithDuration:(double)a0 delay:(double)a1 timingFunction:(id)a2;

- (id)initWithXPCDictionary:(id)a0;
- (void)encodeWithXPCDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)applyToCAAnimation:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (BOOL)isSpringAnimation;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
