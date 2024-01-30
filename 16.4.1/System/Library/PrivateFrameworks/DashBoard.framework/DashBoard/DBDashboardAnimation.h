@class DBAppDockViewController, NSString, UIColor, UIView;

@interface DBDashboardAnimation : NSObject

@property (readonly, nonatomic) DBAppDockViewController *appDockViewController;
@property (readonly, nonatomic) UIView *fromTransitionContainerView;
@property (readonly, nonatomic) UIView *fromView;
@property (readonly, copy, nonatomic) NSString *toIdentifier;
@property (readonly, nonatomic) UIView *toTransitionContainerView;
@property (readonly, nonatomic) UIView *toView;
@property (readonly, nonatomic) UIView *rootContainerView;
@property (readonly, nonatomic) UIColor *rootContainerBackgroundColor;

- (id)initWithSettings:(id)a0;
- (void).cxx_destruct;
- (void)startAnimationWithCompletion:(id /* block */)a0;

@end
