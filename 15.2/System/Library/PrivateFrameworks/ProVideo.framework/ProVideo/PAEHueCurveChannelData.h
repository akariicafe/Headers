@interface PAEHueCurveChannelData : NSObject <NSSecureCoding, NSCopying, FxCustomParameterInterpolation_v2> {
    void *_curve_private;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)channelDataWithCurve:(const void *)a0;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCurve:(const void *)a0;
- (void)dealloc;
- (void)reset;
- (double)evaluate:(double)a0;
- (void *)curveRef;
- (id)interpolateBetween:(id)a0 withWeight:(float)a1;
- (BOOL)isAtDefaults;

@end
