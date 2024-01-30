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

- (void)keyboardDidHide:(id)a0;
- (void)showKeyboard;
- (void)keyboardWillHide:(id)a0;
- (void)_hideKeyboard;
- (void)textFieldDidEndEditing:(id)a0;
- (void)textFieldDidBeginEditing:(id)a0;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void)keyboardWillShow:(id)a0;
- (void)dealloc;
- (void)layoutSubviews;
- (void)start;
- (void).cxx_destruct;
- (void)keyboardDidShow:(id)a0;
- (void)_resumeRedeemer;
- (id)_newTextFieldWithClientContext:(id)a0;
- (void)_pauseRedeemer;
- (void)_tapGestureAction:(id)a0;
- (id)initWithClientContext:(id)a0;
- (void)textFieldTextDidChange:(id)a0;

@end
