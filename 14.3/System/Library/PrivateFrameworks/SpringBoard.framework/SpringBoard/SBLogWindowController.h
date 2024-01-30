@class SBMainScreenActiveInterfaceOrientationWindow, UITextView;

@interface SBLogWindowController : UIViewController

@property (retain, nonatomic) SBMainScreenActiveInterfaceOrientationWindow *logWindow;
@property (retain, nonatomic) UITextView *logTextView;

+ (id)sharedInstance;
+ (id)sharedInstanceIfAvailable;

- (void)show;
- (void).cxx_destruct;
- (void)hide;
- (id)initWithNibName:(id)a0 bundle:(id)a1;

@end
