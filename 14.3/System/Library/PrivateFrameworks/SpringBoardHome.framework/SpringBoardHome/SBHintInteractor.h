@class NSString, UIInteractionProgress;
@protocol SBViewControllerContextTransitioning;

@interface SBHintInteractor : NSObject <UIInteractionProgressObserver, SBViewControllerInteractiveTransitioning> {
    id<SBViewControllerContextTransitioning> _transitionContext;
    struct { struct { double value; BOOL inclusive; } start; struct { double value; BOOL inclusive; } end; } _hintInterval;
}

@property (readonly, nonatomic) UIInteractionProgress *interactionProgress;
@property (readonly, nonatomic) double maxHintProgress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) double completionSpeed;
@property (readonly, nonatomic) long long completionCurve;
@property (readonly, nonatomic) BOOL wantsInteractiveStart;

- (BOOL)supportsRestarting;
- (void)interactionProgress:(id)a0 didEnd:(BOOL)a1;
- (void)cancelTransition;
- (void)startInteractiveTransition:(id)a0;
- (void).cxx_destruct;
- (void)updateTransition:(double)a0;
- (void)finishInteractiveTransition;
- (void)interactionProgressDidUpdate:(id)a0;
- (void)_updateInteractionPercentComplete:(double)a0;
- (id)initWithInteractionProgress:(id)a0 maxHintProgress:(double)a1;

@end
