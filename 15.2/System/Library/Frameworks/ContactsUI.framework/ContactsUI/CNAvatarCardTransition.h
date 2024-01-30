@class UIView, NSString, UIPanGestureRecognizer;
@protocol UIViewControllerContextTransitioning;

@interface CNAvatarCardTransition : NSObject <UIViewControllerAnimatedTransitioning>

@property (retain, nonatomic) UIPanGestureRecognizer *gestureRecognizer;
@property (retain, nonatomic) id<UIViewControllerContextTransitioning> context;
@property (retain, nonatomic) UIView *presentedView;
@property (readonly, nonatomic) BOOL interactive;
@property BOOL reversed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)animateTransition:(id)a0;
- (double)transitionDuration:(id)a0;
- (void).cxx_destruct;

@end
