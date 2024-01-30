@class NSString, UIViewController, ICViewControllerManager;

@interface ICWindow : UIWindow

@property (readonly, nonatomic) ICViewControllerManager *ic_viewControllerManager;
@property (retain, nonatomic) NSString *windowIdentifier;
@property (retain, nonatomic) NSString *toolPickerIdentifier;
@property (retain, nonatomic) ICViewControllerManager *viewControllerManager;
@property (readonly, nonatomic) UIViewController *ic_topmostPresentedViewController;

- (id)initWithWindowScene:(id)a0;
- (void)setRootViewController:(id)a0;
- (BOOL)accessibilityElementsHidden;
- (void).cxx_destruct;

@end
