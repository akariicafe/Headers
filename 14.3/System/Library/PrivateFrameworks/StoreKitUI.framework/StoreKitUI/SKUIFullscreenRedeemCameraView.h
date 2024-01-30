@class NSString, _UIBackdropView, UIImage, UIView, SKUIRedeemTextField;
@protocol SKUIRedeemCameraViewDelegate;

@interface SKUIFullscreenRedeemCameraView : UIView <UITextFieldDelegate> {
    UIView *_overlay;
    UIView *_redeemerView;
    SKUIRedeemTextField *_textField;
    _UIBackdropView *_textFieldSafeAreaBackdrop;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _keyboardRect;
    BOOL _enabled;
}

@property (weak, nonatomic) id<SKUIRedeemCameraViewDelegate> delegate;
@property (nonatomic) BOOL enabled;
@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) NSString *text;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_hideKeyboard;
- (void).cxx_destruct;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void)textFieldDidBeginEditing:(id)a0;
- (void)dealloc;
- (id)initWithClientContext:(id)a0;
- (void)textFieldDidEndEditing:(id)a0;
- (void)keyboardDidShow:(id)a0;
- (void)layoutSubviews;
- (void)keyboardDidHide:(id)a0;
- (void)showKeyboard;
- (void)start;
- (void)keyboardWillShow:(id)a0;
- (void)keyboardWillHide:(id)a0;
- (id)_newTextFieldWithClientContext:(id)a0;
- (void)_tapGestureAction:(id)a0;
- (void)textFieldTextDidChange:(id)a0;
- (void)_pauseRedeemer;
- (void)_resumeRedeemer;

@end
