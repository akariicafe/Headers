@interface PAEColorWheelChannelData : NSObject <NSSecureCoding, NSCopying, FxCustomParameterInterpolation_v2> {
    struct PAEColorWheelData { double r; double t; double sat; double e; } _value;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)channelDataWithRadius:(double)a0 theta:(double)a1 saturation:(double)a2 light:(double)a3;

- (double)radius;
- (double)saturation;
- (double)theta;
- (void)encodeWithCoder:(id)a0;
- (double)light;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setRadius:(double)a0;
- (void)reset;
- (void)setSaturation:(double)a0;
- (void)setLight:(double)a0;
- (void)setTheta:(double)a0;
- (id)interpolateBetween:(id)a0 withWeight:(float)a1;
- (BOOL)isAtDefaults;
- (id)initWithRadius:(double)a0 theta:(double)a1 saturation:(double)a2 light:(double)a3;

@end
