@class UITextView, UIStackView, UIScribbleInteraction, NSString, NCNotificationAction, UIButton;
@protocol NCNotificationTextInputViewDelegate;

@interface NCNotificationTextInputView : UIView <UITextViewDelegate, UIScribbleInteractionDelegate>

@property (retain, nonatomic) UIStackView *horizontalStack;
@property (retain, nonatomic) UITextView *textView;
@property (retain, nonatomic) UIButton *button;
@property (retain, nonatomic) UIScribbleInteraction *scribbleInteraction;
@property (weak, nonatomic) id<NCNotificationTextInputViewDelegate> delegate;
@property (retain, nonatomic) NCNotificationAction *action;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)becomeFirstResponder;
- (BOOL)canResignFirstResponder;
- (BOOL)resignFirstResponder;
- (void)safeAreaInsetsDidChange;
- (void)setPlaceholder:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (void)_buttonPressed:(id)a0;
- (void)scribbleInteractionDidFinishWriting:(id)a0;
- (BOOL)canBecomeFirstResponder;
- (BOOL)isFirstResponder;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)textViewDidChange:(id)a0;
- (void)setButtonTitle:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)_updateForTextChange;
- (double)_textViewHeight;
- (double)_maximumTextViewHeight;
- (double)_textViewWidth;
- (double)_pencilModeHeight;

@end
