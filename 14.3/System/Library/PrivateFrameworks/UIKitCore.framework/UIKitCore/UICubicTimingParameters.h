@class _UIViewCubicTimingFunction, UISpringTimingParameters;

@interface UICubicTimingParameters : NSObject <UITimingCurveProvider>

@property (readonly, nonatomic) _UIViewCubicTimingFunction *timingFunction;
@property (retain, nonatomic) UISpringTimingParameters *springTimingParameters;
@property (readonly, nonatomic) long long animationCurve;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } controlPoint1;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } controlPoint2;
@property (readonly, nonatomic) long long timingCurveType;
@property (readonly, nonatomic) UICubicTimingParameters *cubicTimingParameters;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)_mediaTimingFunction;
- (id)initWithControlPoint1:(struct CGPoint { double x0; double x1; })a0 controlPoint2:(struct CGPoint { double x0; double x1; })a1;
- (void)_setAnimationCurve:(long long)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithAnimationCurve:(long long)a0;
- (id)effectiveTimingFunction;
- (id)initWithCustomCurve:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
