@class NSLayoutConstraint, NSString, CNStarkActionView;

@interface CNStarkContactPropertyCell : CNPropertyPhoneNumberCell <CNStarkActionViewDelegate>

@property (class, readonly, nonatomic) double labelViewFirstBaselineAnchorConstraintConstant;
@property (class, readonly, nonatomic) double valueLabelFirstBaselineAnchorConstraintConstant;
@property (class, readonly, nonatomic) double contentViewBottomAnchorConstraintConstant;
@property (class, readonly, nonatomic) double minimumContentHeight;

@property (readonly, nonatomic) CNStarkActionView *actionView1;
@property (readonly, nonatomic) CNStarkActionView *actionView2;
@property (nonatomic) BOOL allowsFocus;
@property (retain, nonatomic) NSLayoutConstraint *labelViewFirstBaselineAnchorConstraint;
@property (retain, nonatomic) NSLayoutConstraint *valueViewFirstBaselineAnchorConstraint;
@property (retain, nonatomic) NSLayoutConstraint *contentViewBottomAnchorConstraint;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInsets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)wantsHorizontalLayout;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setSeparatorStyle:(long long)a0;
- (BOOL)canBecomeFocused;
- (void)_cnui_applyContactStyle;
- (BOOL)allowsCellSelection;
- (BOOL)supportsValueColorUsesLabelColor;
- (void).cxx_destruct;
- (long long)transportTypeForActionType:(id)a0;
- (void)performActionForMessage;
- (id)variableConstraints;
- (id)constantConstraints;
- (void)actionViewTapped:(id)a0;
- (BOOL)supportsTintColorValue;
- (BOOL)shouldShowStar;
- (void)updateTransportButtons;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (void)performDefaultAction;

@end
