@class UITextView, NSString, UIVisualEffectView, NSObject, UIButton;
@protocol GKMultiplayerCustomInviteMessageViewControllerDelegate;

@interface GKMultiplayerCustomInviteMessageViewController : UIViewController

@property (retain, nonatomic) UIButton *doneButton;
@property (retain, nonatomic) UITextView *messageTextField;
@property (retain, nonatomic) UIVisualEffectView *backgroundEffectView;
@property (weak, nonatomic) NSObject<GKMultiplayerCustomInviteMessageViewControllerDelegate> *delegate;
@property (retain, nonatomic) NSString *message;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)donePressed:(id)a0;

@end
