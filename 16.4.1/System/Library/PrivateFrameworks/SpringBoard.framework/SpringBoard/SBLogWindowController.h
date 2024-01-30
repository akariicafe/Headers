@class UITextView, SBWindow, UIWindowScene;

@interface SBLogWindowController : UIViewController

@property (class, weak, nonatomic) UIWindowScene *windowScene;

@property (retain, nonatomic) SBWindow *logWindow;
@property (retain, nonatomic) UITextView *logTextView;

+ (id)sharedInstance;
+ (id)sharedInstanceIfAvailable;

- (void)show;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)hide;
- (void)_createAndUpdateWindowIfNecessary;
- (void).cxx_destruct;

@end
