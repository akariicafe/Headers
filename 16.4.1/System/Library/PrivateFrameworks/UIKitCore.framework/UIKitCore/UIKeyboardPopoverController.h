@class UIView;

@interface UIKeyboardPopoverController : UIViewController

@property (retain, nonatomic) UIView *contentView;
@property (nonatomic) struct CGSize { double width; double height; } contentSize;

- (BOOL)isPresented;
- (long long)overrideUserInterfaceStyle;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (BOOL)_canShowWhileLocked;
- (void)viewDidLoad;
- (id)init;
- (void).cxx_destruct;
- (BOOL)handleHardwareKeyboardEvent:(id)a0;

@end
