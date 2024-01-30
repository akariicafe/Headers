@class UIWindow;

@interface MCAlertController : UIAlertController

@property (retain, nonatomic) UIWindow *alertWindow;
@property (copy, nonatomic) id /* block */ viewWillAppearHandler;
@property (copy, nonatomic) id /* block */ viewDidDisappearHandler;

- (void)show;
- (void)dealloc;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)dismiss;

@end
