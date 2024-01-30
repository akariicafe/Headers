@class UIView, NSString, _TVRTextField, UINavigationBar, TVRCKeyboardAttributes, UIButton, RTIInputSystemSourceSession, UIVisualEffectView;
@protocol _TVRKeyboardViewDelegate;

@interface _TVRKeyboardView : UIView <UITextFieldDelegate, RTIInputSystemPayloadDelegate>

@property (retain, nonatomic) UINavigationBar *navigationBar;
@property (retain, nonatomic) UIView *textFieldWrapper;
@property (retain, nonatomic) _TVRTextField *textField;
@property (retain, nonatomic) UIView *separator;
@property (retain, nonatomic) UIButton *dictationButton;
@property (retain, nonatomic) UIVisualEffectView *effectView;
@property (retain, nonatomic) RTIInputSystemSourceSession *currentSourceSession;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) TVRCKeyboardAttributes *attributes;
@property (weak, nonatomic) id<_TVRKeyboardViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)_separatorHeight;
- (BOOL)becomeFirstResponder;
- (BOOL)resignFirstResponder;
- (void).cxx_destruct;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_textDidChange:(id)a0;
- (void)handleTextActionPayload:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_cancelButton:(id)a0;
- (void)_dictationButtonTapped:(id)a0;
- (void)_dictationButtonReleased:(id)a0;
- (void)enableDictationButton:(BOOL)a0;

@end
