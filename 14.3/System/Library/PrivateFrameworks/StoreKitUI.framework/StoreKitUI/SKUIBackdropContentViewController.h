@class UIViewController;

@interface SKUIBackdropContentViewController : UIViewController

@property (nonatomic) long long backdropViewPrivateStyle;
@property (retain, nonatomic) UIViewController *contentViewController;

- (void).cxx_destruct;
- (void)loadView;
- (id)initWithContentViewController:(id)a0;

@end
