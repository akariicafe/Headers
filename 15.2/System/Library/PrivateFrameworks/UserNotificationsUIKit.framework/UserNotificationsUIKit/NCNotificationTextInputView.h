@class UITextView, UIStackView, UIScribbleInteraction, UIInputContextHistory, NCNotificationAction, NSString, UIButton;
@protocol NCNotificationTextInputViewDelegate;

@interface NCNotificationTextInputView : UIView <UITextViewDelegate, UIScribbleInteractionDelegate>

@property (retain, nonatomic) UIStackView *horizontalStack;
@property (retain, nonatomic) UITextView *textView;
@property (retain, nonatomic) UIButton *button;
@property (retain, nonatomic) UIScribbleInteraction *scribbleInteraction;
@property (weak, nonatomic) id<NCNotificationTextInputViewDelegate> delegate;
@property (retain, nonatomic) NCNotificationAction *action;
@property (retain, nonatomic) UIInputContextHistory *inputContextHistory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)safeAreaInsetsDidChange;
- (BOOL)isFirstResponder;
- (BOOL)canResignFirstResponder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)scribbleInteractionDidFinishWriting:(id)a0;
- (void)_buttonPressed:(id)a0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (BOOL)canBecomeFirstResponder;
- (BOOL)resignFirstResponder;
- (void)setButtonTitle:(id)a0;
- (BOOL)becomeFirstResponder;
- (void)setPlaceholder:(id)a0;
- (void)textViewDidChange:(id)a0;
- (void)_updateForTextChange;
- (double)_textViewHeight;
- (double)_maximumTextViewHeight;
- (double)_textViewWidth;
- (double)_pencilModeHeight;

@end
