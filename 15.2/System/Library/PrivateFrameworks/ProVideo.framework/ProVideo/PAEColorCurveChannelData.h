@interface PAEColorCurveChannelData : NSObject <NSSecureCoding, NSCopying, FxCustomParameterInterpolation_v2> {
    void *_curve_private;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)channelDataWithRed:(double)a0 green:(double)a1 blue:(double)a2 curve:(const void *)a3;
+ (id)channelDataWithRed:(double)a0 green:(double)a1 blue:(double)a2;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (double)red;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (double)green;
- (void)dealloc;
- (void)reset;
- (double)evaluate:(double)a0;
- (id)initWithRed:(double)a0 green:(double)a1 blue:(double)a2;
- (double)blue;
- (void *)curveRef;
- (id)interpolateBetween:(id)a0 withWeight:(float)a1;
- (BOOL)isAtDefaults;
- (id)initWithRed:(double)a0 green:(double)a1 blue:(double)a2 curve:(const void *)a3;

@end
