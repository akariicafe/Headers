@interface PAEOffsetColorCurveChannelData : NSObject <NSSecureCoding, NSCopying, FxCustomParameterInterpolation_v2> {
    void *_curve_private;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)channelDataWithRed:(double)a0 green:(double)a1 blue:(double)a2;
+ (id)channelDataWithRed:(double)a0 green:(double)a1 blue:(double)a2 curve:(const void *)a3;

- (void)encodeWithCoder:(id)a0;
- (double)green;
- (double)evaluate:(double)a0;
- (double)red;
- (id)initWithCoder:(id)a0;
- (double)blue;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)description;
- (void)reset;
- (id)initWithRed:(double)a0 green:(double)a1 blue:(double)a2;
- (BOOL)conformFromColorCurve:(id)a0;
- (void *)curveRef;
- (id)initWithRed:(double)a0 green:(double)a1 blue:(double)a2 curve:(const void *)a3;
- (id)interpolateBetween:(id)a0 withWeight:(float)a1;
- (BOOL)isAtDefaults;

@end
