@class UIButton, NSString, SKUIRedeemCameraLandingView, UIImage, UIView, UIScrollView, SKUIRedeemTextField;
@protocol SKUIRedeemCameraViewDelegate;

@interface SKUIIPadRedeemCameraView : UIView <UITextFieldDelegate> {
    SKUIRedeemTextField *_inputAccessoryTextField;
    SKUIRedeemCameraLandingView *_landingView;
    UIView *_redeemerView;
    UIScrollView *_scrollView;
    UIButton *_termsButton;
    SKUIRedeemTextField *_textField;
}

@property (weak, nonatomic) id<SKUIRedeemCameraViewDelegate> delegate;
@property (nonatomic) BOOL enabled;
@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) NSString *text;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutSubviews;
- (void)showKeyboard;
- (void)start;
- (void).cxx_destruct;
- (void)_hideKeyboard;
- (void)textFieldDidEndEditing:(id)a0;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void)dealloc;
- (id)initWithClientContext:(id)a0;
- (void)_termsButtonAction:(id)a0;
- (void)_landingButtonAction:(id)a0;
- (id)_newTextFieldWithClientContext:(id)a0 placeholderColor:(id)a1;
- (void)textFieldTextDidChange:(id)a0;
- (void)keyboardDidChange:(id)a0;
- (double)_adjustVerticalSpacingForHeight:(double)a0;

@end
