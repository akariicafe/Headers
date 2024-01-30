@class UIColor, DBAppDockViewController, NSString, UIView;

@interface DBAnimationSettings : NSObject

@property (retain, nonatomic) UIView *rootContainerView;
@property (retain, nonatomic) UIColor *rootContainerBackgroundColor;
@property (retain, nonatomic) UIView *toView;
@property (retain, nonatomic) UIView *toTransitionContainerView;
@property (retain, nonatomic) UIView *fromView;
@property (retain, nonatomic) UIView *fromTransitionContainerView;
@property (retain, nonatomic) DBAppDockViewController *appDockViewController;
@property (copy, nonatomic) NSString *toIdentifier;

- (void).cxx_destruct;

@end
