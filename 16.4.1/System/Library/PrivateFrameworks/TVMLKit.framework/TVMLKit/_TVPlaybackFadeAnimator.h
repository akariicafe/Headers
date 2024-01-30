@class NSString;

@interface _TVPlaybackFadeAnimator : NSObject <UIViewControllerAnimatedTransitioning>

@property (nonatomic) double transitionDuration;
@property (nonatomic) BOOL usesCustomEasing;
@property (nonatomic) BOOL shouldAnimateHalfwayThenPopIn;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
