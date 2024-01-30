@class NSString, ICViewControllerManager;

@interface ICWindow : UIWindow

@property (retain, nonatomic) NSString *windowIdentifier;
@property (retain, nonatomic) ICViewControllerManager *viewControllerManager;

- (void).cxx_destruct;
- (id)initWithWindowScene:(id)a0;
- (id)ic_viewControllerManager;

@end
