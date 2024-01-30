@class NSString;
@protocol SBViewControllerContextTransitioning;

@interface SBPercentPassthroughInteractiveTransition : NSObject <SBViewControllerInteractiveTransitioning> {
    id<SBViewControllerContextTransitioning> _transitionContext;
}

@property (nonatomic) double completionSpeed;
@property (nonatomic) long long completionCurve;
@property (readonly, nonatomic) BOOL wantsInteractiveStart;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startInteractiveTransition:(id)a0;
- (void)updateTransition:(double)a0;
- (BOOL)supportsRestarting;
- (void)cancelTransition;
- (void)finishInteractiveTransition;
- (id)init;
- (void).cxx_destruct;

@end
