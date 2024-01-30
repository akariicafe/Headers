@class UIView, NSString, AKInlineSignInViewController, AKAppleIDAuthenticationInAppContext, UILabel, UIButton;
@protocol CSEraseDeviceAuthViewControllerDelegate;

@interface CSEraseDeviceAuthViewController : UIViewController <AKInlineSignInViewControllerDelegate> {
    UIButton *_cancelButton;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIView *_containerView;
    UIView *_labelsContainerView;
    AKInlineSignInViewController *_authenticationViewController;
    UIView *_springView;
}

@property (weak, nonatomic) id<CSEraseDeviceAuthViewControllerDelegate> delegate;
@property (nonatomic) AKAppleIDAuthenticationInAppContext *authContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)signInViewController:(id)a0 didAuthenticateWithResults:(id)a1 error:(id)a2;
- (BOOL)_canShowWhileLocked;
- (void)loadView;
- (void).cxx_destruct;
- (void)_activateConstraints;
- (void)_handleCancelButtonAction;
- (id)_authenticationView;
- (void)_updateForFailedAppleIDAuthentication;
- (void)setSubtitleLabelText:(id)a0;

@end
