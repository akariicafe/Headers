@class SFAutomaticPasswordExplanationView;
@protocol SFAutomaticPasswordInputViewSizing, SFAutomaticPasswordInputViewDelegate;

@interface SFAutomaticPasswordInputView : UIInputView {
    SFAutomaticPasswordExplanationView *_explanationView;
}

@property (readonly, nonatomic) long long keyboardType;
@property (weak, nonatomic) id<SFAutomaticPasswordInputViewDelegate> delegate;
@property (weak, nonatomic) id<SFAutomaticPasswordInputViewSizing> inputViewSizing;
@property (nonatomic) BOOL shouldAllowSelfSizing;
@property (nonatomic) long long keyboardAppearance;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (BOOL)allowsSelfSizing;
- (void).cxx_destruct;
- (id)initWithInputViewStyle:(long long)a0 keyboardType:(long long)a1;
- (void)_useStrongPasswordButtonAction:(id)a0;
- (void)_useCustomPasswordButtonAction:(id)a0;

@end
