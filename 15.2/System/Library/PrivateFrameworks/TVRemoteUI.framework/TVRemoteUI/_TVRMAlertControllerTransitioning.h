@class NSString, UIView;

@interface _TVRMAlertControllerTransitioning : NSObject <UIViewControllerAnimatedTransitioning>

@property (nonatomic) BOOL isPresentation;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *dimmingView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)animateTransition:(id)a0;
- (double)transitionDuration:(id)a0;
- (void).cxx_destruct;

@end
