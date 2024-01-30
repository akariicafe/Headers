@class SBMainScreenActiveInterfaceOrientationWindow, UITextView;

@interface SBLogWindowController : UIViewController

@property (retain, nonatomic) SBMainScreenActiveInterfaceOrientationWindow *logWindow;
@property (retain, nonatomic) UITextView *logTextView;

+ (id)sharedInstance;
+ (id)sharedInstanceIfAvailable;

- (void).cxx_destruct;
- (void)hide;
- (void)show;
- (id)initWithNibName:(id)a0 bundle:(id)a1;

@end
