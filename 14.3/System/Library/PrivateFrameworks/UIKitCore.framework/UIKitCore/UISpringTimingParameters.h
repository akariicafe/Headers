@class UICubicTimingParameters;

@interface UISpringTimingParameters : NSObject <NSSecureCoding, UITimingCurveProvider>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double dampingRatio;
@property (nonatomic) BOOL implicitDuration;
@property (nonatomic) double mass;
@property (nonatomic) double stiffness;
@property (nonatomic) double damping;
@property (readonly, nonatomic) double settlingDuration;
@property (readonly, nonatomic) struct CGVector { double dx; double dy; } initialVelocity;
@property (readonly, nonatomic) long long timingCurveType;
@property (readonly, nonatomic) UICubicTimingParameters *cubicTimingParameters;
@property (readonly, nonatomic) UISpringTimingParameters *springTimingParameters;

+ (void)_convertMass:(double)a0 stiffness:(double)a1 damping:(double)a2 toDampingRatio:(double *)a3 response:(double *)a4;
+ (void)_convertDampingRatio:(double)a0 response:(double)a1 toMass:(double *)a2 stiffness:(double *)a3 damping:(double *)a4;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDampingRatio:(double)a0 response:(double)a1 initialVelocity:(struct CGVector { double x0; double x1; })a2;
- (id)initWithMass:(double)a0 stiffness:(double)a1 damping:(double)a2 initialVelocity:(struct CGVector { double x0; double x1; })a3;
- (id)initWithCoder:(id)a0;
- (id)initWithDampingRatio:(double)a0 initialVelocity:(struct CGVector { double x0; double x1; })a1;
- (id)description;
- (id)_mediaTimingFunction;
- (BOOL)isEqual:(id)a0;
- (id)initWithDampingRatio:(double)a0 response:(double)a1;
- (id)effectiveTimingFunction;
- (id)initWithVelocity:(struct CGVector { double x0; double x1; })a0;
- (id)initWithDampingRatio:(double)a0;
- (void)encodeWithCoder:(id)a0;

@end
