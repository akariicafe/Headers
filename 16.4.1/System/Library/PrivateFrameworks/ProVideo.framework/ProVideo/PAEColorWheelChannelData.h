@interface PAEColorWheelChannelData : NSObject <NSSecureCoding, NSCopying, FxCustomParameterInterpolation_v2> {
    struct PAEColorWheelData { double r; double t; double sat; double e; } _value;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)channelDataWithRadius:(double)a0 theta:(double)a1 saturation:(double)a2 light:(double)a3;

- (double)saturation;
- (double)radius;
- (void)setRadius:(double)a0;
- (void)encodeWithCoder:(id)a0;
- (void)setTheta:(double)a0;
- (double)theta;
- (id)initWithCoder:(id)a0;
- (void)setSaturation:(double)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void)reset;
- (double)light;
- (id)initWithRadius:(double)a0 theta:(double)a1 saturation:(double)a2 light:(double)a3;
- (id)interpolateBetween:(id)a0 withWeight:(float)a1;
- (BOOL)isAtDefaults;
- (void)setLight:(double)a0;

@end
