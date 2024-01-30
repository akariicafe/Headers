@interface PAEColorWheelChannelData : NSObject <NSCoding, NSCopying, FxCustomParameterInterpolation> {
    struct PAEColorWheelData { double r; double t; double sat; double e; } _value;
}

+ (id)channelDataWithRadius:(double)a0 theta:(double)a1 saturation:(double)a2 light:(double)a3;

- (double)radius;
- (void)setRadius:(double)a0;
- (double)theta;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (double)light;
- (void)reset;
- (BOOL)isEqualTo:(id)a0;
- (void)setSaturation:(double)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (double)saturation;
- (void)encodeWithCoder:(id)a0;
- (void)setLight:(double)a0;
- (void)setTheta:(double)a0;
- (id)interpolateBetween:(id)a0 withWeight:(float)a1;
- (BOOL)isAtDefaults;
- (id)initWithRadius:(double)a0 theta:(double)a1 saturation:(double)a2 light:(double)a3;

@end
