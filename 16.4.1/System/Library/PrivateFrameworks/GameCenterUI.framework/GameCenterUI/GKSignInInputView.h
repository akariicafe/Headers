@class NSLayoutConstraint;

@interface GKSignInInputView : UIView

@property (retain, nonatomic) NSLayoutConstraint *topToSignInBaselineConstraint;
@property (retain, nonatomic) NSLayoutConstraint *bottomToSignInBaselineConstraint;
@property (retain, nonatomic) NSLayoutConstraint *signInBaselineToPromptTextTopConstraint;
@property (retain, nonatomic) NSLayoutConstraint *inputViewHeightConstraint;
@property (retain, nonatomic) NSLayoutConstraint *promptTextToProgressIndicatorTopConstraint;
@property (retain, nonatomic) NSLayoutConstraint *signInFormToSignInLabelTopConstraint;
@property (retain, nonatomic) NSLayoutConstraint *signInInputViewHeightConstraint;

- (void).cxx_destruct;
- (id)allVariableConstraints;
- (void)setupConstraintConstantsForOrientation:(long long)a0;

@end
