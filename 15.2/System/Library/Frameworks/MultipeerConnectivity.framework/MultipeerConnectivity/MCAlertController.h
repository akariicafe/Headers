@class UIWindow;

@interface MCAlertController : UIAlertController

@property (retain, nonatomic) UIWindow *alertWindow;
@property (copy, nonatomic) id /* block */ viewWillAppearHandler;
@property (copy, nonatomic) id /* block */ viewDidDisappearHandler;

- (void)viewWillAppear:(BOOL)a0;
- (void)dismiss;
- (void)viewDidDisappear:(BOOL)a0;
- (void)show;
- (void)dealloc;

@end
