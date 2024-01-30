@class ASCABLELoginChoice, NSObject, ASCAuthorizationPresentationContext;
@protocol OS_os_activity;

@interface ASCredentialRequestCABLEClientViewController : ASCredentialRequestPaneViewController {
    ASCAuthorizationPresentationContext *_presentationContext;
    ASCABLELoginChoice *_loginChoice;
    NSObject<OS_os_activity> *_authorizationActivity;
}

- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)_titleText;
- (void)_setUpIconView;
- (void)_setUpTitleView;
- (void)_addAboveIconSpacerView;
- (void)_addBelowQRCodeSpacerView;
- (double)_marginAboveIcon;
- (double)_marginBelowQRCode;
- (double)_marginBelowSecurityKeyButton;
- (id)_qrCodeMessage;
- (void)_setUpQRCodeView;
- (void)_setUpSecurityKeyButtonViewIfNeeded;
- (void)_useSecurityKeyButtonTapped;
- (id)initWithPresentationContext:(id)a0 loginChoice:(id)a1 activity:(id)a2;

@end
