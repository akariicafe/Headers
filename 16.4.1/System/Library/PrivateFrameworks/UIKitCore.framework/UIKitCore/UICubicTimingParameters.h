@class _UIViewCubicTimingFunction, UISpringTimingParameters;

@interface UICubicTimingParameters : NSObject <UITimingCurveProvider>

@property (readonly, nonatomic) _UIViewCubicTimingFunction *timingFunction;
@property (retain, nonatomic) UISpringTimingParameters *springTimingParameters;
@property (readonly, nonatomic) long long animationCurve;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } controlPoint1;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } controlPoint2;
@property (readonly, nonatomic) long long timingCurveType;
@property (readonly, nonatomic) UICubicTimingParameters *cubicTimingParameters;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAnimationCurve:(long long)a0;
- (id)initWithCustomCurve:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_mediaTimingFunction;
- (BOOL)isEqual:(id)a0;
- (id)effectiveTimingFunction;
- (id)init;
- (void)_setAnimationCurve:(long long)a0;
- (id)description;
- (id)initWithControlPoint1:(struct CGPoint { double x0; double x1; })a0 controlPoint2:(struct CGPoint { double x0; double x1; })a1;
- (void).cxx_destruct;

@end
