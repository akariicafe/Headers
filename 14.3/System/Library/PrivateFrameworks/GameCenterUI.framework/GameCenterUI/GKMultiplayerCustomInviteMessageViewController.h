@class NSString, UITextField, UIVisualEffectView, NSObject, UIButton;
@protocol GKMultiplayerCustomInviteMessageViewControllerDelegate;

@interface GKMultiplayerCustomInviteMessageViewController : UIViewController <UITextFieldDelegate>

@property (retain, nonatomic) UITextField *messageTextField;
@property (retain, nonatomic) UIButton *doneButton;
@property (retain, nonatomic) UIVisualEffectView *backgroundEffectView;
@property (weak, nonatomic) NSObject<GKMultiplayerCustomInviteMessageViewControllerDelegate> *delegate;
@property (retain, nonatomic) NSString *message;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)donePressed:(id)a0;
- (id)blurEffectForTraitCollection:(id)a0;
- (void)viewDidLoad;

@end
