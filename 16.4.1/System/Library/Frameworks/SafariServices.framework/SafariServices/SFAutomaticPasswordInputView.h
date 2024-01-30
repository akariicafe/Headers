@class SFAutomaticPasswordExplanationView;
@protocol SFAutomaticPasswordInputViewSizing, SFAutomaticPasswordInputViewDelegate;

@interface SFAutomaticPasswordInputView : UIInputView {
    SFAutomaticPasswordExplanationView *_explanationView;
}

@property (readonly, nonatomic) long long keyboardType;
@property (weak, nonatomic) id<SFAutomaticPasswordInputViewDelegate> delegate;
@property (weak, nonatomic) id<SFAutomaticPasswordInputViewSizing> inputViewSizing;
@property (nonatomic) BOOL shouldAllowSelfSizing;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setKeyboardAppearance:(long long)a0;
- (long long)keyboardAppearance;
- (BOOL)allowsSelfSizing;
- (void).cxx_destruct;
- (void)_useStrongPasswordButtonAction:(id)a0;
- (id)initWithInputViewStyle:(long long)a0 keyboardType:(long long)a1;

@end
