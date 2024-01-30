@class UIView, NSString, UIImage, SKUIRedeemTextField, SKUIClientContext, UIButton, SKUIRedeemITunesPassLockup, SKUIRedeemCameraLandingView, SKUIITunesPassConfiguration;
@protocol SKUIRedeemCameraViewDelegate;

@interface SKUIRedeemCameraView : UIView <UITextFieldDelegate> {
    SKUIClientContext *_clientContext;
    SKUIRedeemTextField *_inputAccessoryTextField;
    SKUIRedeemITunesPassLockup *_iTunesPassLockup;
    SKUIRedeemCameraLandingView *_landingView;
    UIView *_overlay;
    UIView *_redeemerView;
    UIButton *_termsButton;
    SKUIRedeemTextField *_textField;
    BOOL _displayRedeem;
}

@property (weak, nonatomic) id<SKUIRedeemCameraViewDelegate> delegate;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) SKUIITunesPassConfiguration *ITunesPassConfiguration;
@property (copy, nonatomic) NSString *text;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_hideKeyboard;
- (void).cxx_destruct;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void)dealloc;
- (id)initWithClientContext:(id)a0;
- (BOOL)textFieldShouldBeginEditing:(id)a0;
- (void)keyboardDidShow:(id)a0;
- (void)layoutSubviews;
- (void)keyboardDidHide:(id)a0;
- (void)showKeyboard;
- (BOOL)textFieldShouldEndEditing:(id)a0;
- (void)start;
- (void)keyboardWillShow:(id)a0;
- (void)keyboardWillHide:(id)a0;
- (void)_termsButtonAction:(id)a0;
- (void)_tapGestureAction:(id)a0;
- (void)_landingButtonAction:(id)a0;
- (id)_newTextFieldWithClientContext:(id)a0 placeholderColor:(id)a1;
- (void)textFieldTextDidChange:(id)a0;
- (void)_iTunesPassLearnMoreAction:(id)a0;
- (BOOL)_isShowingRedeemer;
- (void)_pauseRedeemer;
- (void)_showRedeemer:(BOOL)a0;
- (void)_resumeRedeemer;

@end
