@class _SFTextSuggestion, UILabel, NSMutableArray, UIButton;
@protocol _SFAutoFillInputViewDelegate;

@interface _SFAutoFillInputView : UIInputView {
    _SFTextSuggestion *_suggestion;
    UILabel *_explanationLabel;
    UIButton *_keyboardButton;
    UIButton *_otherPasswordsButton;
    UIButton *_fillCredentialButton;
    NSMutableArray *_dynamicConstraints;
}

@property (weak, nonatomic) id<_SFAutoFillInputViewDelegate> delegate;

- (void).cxx_destruct;
- (void)updateConstraints;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithHostString:(id)a0 credentialSource:(id)a1 suggestion:(id)a2;
- (void)_updateFillCredentialButtonLabelMetrics;
- (void)_fillCredential:(id)a0;
- (void)_showStandardKeyboard:(id)a0;
- (void)_showMorePasswords:(id)a0;

@end
