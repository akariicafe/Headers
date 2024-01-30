@class UISlidingBarStateRequest, _UIPanelCoordinatingAnimator;

@interface _UIPanelAnimationState : NSObject

@property (copy, nonatomic) UISlidingBarStateRequest *fromRequest;
@property (copy, nonatomic) UISlidingBarStateRequest *toRequest;
@property (nonatomic) double progress;
@property (nonatomic, setter=setFinishingAnimation:) BOOL isFinishingAnimation;
@property (nonatomic) long long affectedSides;
@property (nonatomic) BOOL shouldAssignOffscreenWidthsToStateRequest;
@property (readonly, nonatomic) UISlidingBarStateRequest *stateRequest;
@property (retain, nonatomic) _UIPanelCoordinatingAnimator *animator;
@property (nonatomic) BOOL animatorShouldCoordinate;

+ (id)timingCurveProvider;
+ (double)defaultDuration;
+ (id)timingCurveProviderWithVelocity:(double)a0;

- (void).cxx_destruct;
- (id)description;

@end
