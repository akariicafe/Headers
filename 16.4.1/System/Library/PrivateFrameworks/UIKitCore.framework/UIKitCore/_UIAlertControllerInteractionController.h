@class UIAlertController, NSString;
@protocol UIViewControllerContextTransitioning;

@interface _UIAlertControllerInteractionController : UIPercentDrivenInteractiveTransition <UIForceInteractionController, UIInteractionProgressObserver>

@property (retain, nonatomic) UIAlertController *alertController;
@property (retain, nonatomic) id<UIViewControllerContextTransitioning> context;
@property (readonly, nonatomic) double completionSpeed;
@property (readonly, nonatomic) long long completionCurve;
@property (readonly, nonatomic) BOOL wantsInteractiveStart;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startInteractiveTransition:(id)a0;
- (void)interactionProgressDidUpdate:(id)a0;
- (void)interactionProgress:(id)a0 didEnd:(BOOL)a1;
- (void).cxx_destruct;

@end
