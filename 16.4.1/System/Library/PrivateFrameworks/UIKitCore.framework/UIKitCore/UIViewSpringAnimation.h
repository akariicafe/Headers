@class NSString;
@protocol UIVectorOperatable;

@interface UIViewSpringAnimation : NSObject <UIIntervalAnimating> {
    id<UIVectorOperatable> _current;
    id<UIVectorOperatable> _velocity;
    id<UIVectorOperatable> _zero;
    struct { struct { double value; double velocity; } dampingRatioState; struct { double value; double velocity; } responseState; double tension; double friction; } _state;
    struct { struct { double targetValue; double tension; double friction; long long displacementFunction; } dampingRatioParameters; struct { double targetValue; double tension; double friction; long long displacementFunction; } responseParameters; struct { double targetValue; double tension; double friction; long long displacementFunction; } targetParameters; BOOL dampingRatioSmoothingDisabled; BOOL responseSmoothingDisabled; BOOL targetSmoothingDisabled; } _parameters;
    id<UIVectorOperatable> _distance;
    id<UIVectorOperatable> _scaledVelocity;
    id<UIVectorOperatable> _epsilon;
    float _velocityScalingFactor;
    BOOL _parametersInitialized;
}

@property (retain, nonatomic) id<UIVectorOperatable> targetValue;
@property (retain, nonatomic) id<UIVectorOperatable> velocity;
@property (retain, nonatomic) id<UIVectorOperatable> value;
@property (retain, nonatomic) id<UIVectorOperatable> intermediate;
@property (retain, nonatomic) id<UIVectorOperatable> intermediateVelocity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDescription:(id)a0 current:(id)a1 targetValue:(id)a2;
- (id)stepWithDelta:(double)a0;
- (void)updateWithDescription:(id)a0 initial:(BOOL)a1;
- (BOOL)isStable;
- (void)updateWithDescription:(id)a0;
- (id)initWithCurrent:(id)a0 targetValue:(id)a1;
- (void).cxx_destruct;

@end
