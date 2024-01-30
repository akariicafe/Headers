@class UIView, NSString, NSArray, PKGlyphView, PKPaymentAuthorizationLayout, UIButton, NSMutableArray, NSLayoutConstraint, UILabel;
@protocol PKPaymentAuthorizationFooterViewDelegate;

@interface PKPaymentAuthorizationFooterView : UIView <PKGlyphViewDelegate> {
    UILabel *_labelView;
    PKGlyphView *_glyphView;
    UIButton *_payWithPasscodeButton;
    UILabel *_passbookPaymentDetailsView;
    UIView *_separatorView;
    UIView *_lockupView;
    NSString *_overrideString;
    unsigned long long _stateTransitionIndex;
    BOOL _deferringState;
    BOOL _deferredStateRequiresRetry;
    NSString *_deferredStateString;
    BOOL _biometricSuccessOutstanding;
    NSMutableArray *_completionHandlers;
    NSMutableArray *_deferredCompletionHandlers;
    NSLayoutConstraint *_separatorLeftConstraint;
    NSArray *_hiddenConstraints;
    NSArray *_staticRegularConstraints;
    NSMutableArray *_dynamicRegularConstraints;
    BOOL _compact;
    BOOL _compactUserIntent;
    long long _constraintState;
    long long _queuedConstraintState;
    BOOL _constraintsDirty;
    BOOL _isPad;
    BOOL _hasPearl;
    double _minimumHeight;
    unsigned int _emphasizedEdge;
}

@property (nonatomic) long long state;
@property (retain, nonatomic) PKPaymentAuthorizationLayout *layout;
@property (nonatomic) unsigned long long requestType;
@property (nonatomic) unsigned long long confirmationStyle;
@property (nonatomic) long long userIntentStyle;
@property (retain, nonatomic) NSString *biometricConfirmationTitle;
@property (retain, nonatomic) NSString *confirmationTitle;
@property (retain, nonatomic) NSString *authorizingTitle;
@property (nonatomic) BOOL occludesBodyView;
@property (weak, nonatomic) id<PKPaymentAuthorizationFooterViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_prepareConstraints;
- (void).cxx_destruct;
- (void)dealloc;
- (void)updateConstraints;
- (void)_createSubviews;
- (BOOL)_shouldCompact;
- (void)setState:(long long)a0 string:(id)a1 animated:(BOOL)a2;
- (BOOL)setConstraintState:(long long)a0;
- (id)_titleLabelAttributedString:(id)a0;
- (id)_titleAttributedStringForState:(long long)a0;
- (id)_payWithPasscodeTitleForState:(long long)a0;
- (void)_payWithPasscodePressed;
- (id)createDefaultHeightConstraintForConstraintState:(long long)a0;
- (void)setHidden:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 layout:(id)a1;
- (void)updateRotation;
- (void)setState:(long long)a0 string:(id)a1 animated:(BOOL)a2 withCompletion:(id /* block */)a3;
- (void)glyphView:(id)a0 revealingCheckmark:(BOOL)a1;
- (void)glyphViewUserIntentEdgeDidChange:(id)a0;

@end
