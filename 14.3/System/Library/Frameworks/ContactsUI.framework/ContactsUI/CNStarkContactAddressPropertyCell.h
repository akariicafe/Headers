@class NSLayoutConstraint, NSString, CNStarkActionView;

@interface CNStarkContactAddressPropertyCell : CNPropertyPostalAddressCell <CNStarkActionViewDelegate>

@property (readonly, nonatomic) CNStarkActionView *actionView;
@property (retain, nonatomic) NSLayoutConstraint *labelViewFirstBaselineAnchorConstraint;
@property (retain, nonatomic) NSLayoutConstraint *valueViewFirstBaselineAnchorConstraint;
@property (retain, nonatomic) NSLayoutConstraint *contentViewBottomAnchorConstraint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setSeparatorStyle:(long long)a0;
- (void).cxx_destruct;
- (void)_cnui_applyContactStyle;
- (void)actionViewTapped:(id)a0;
- (BOOL)supportsTintColorValue;
- (BOOL)shouldShowStar;
- (void)updateTransportButtons;
- (id)variableConstraints;
- (id)constantConstraints;
- (void)performDefaultAction;
- (BOOL)supportsValueColorUsesLabelColor;

@end
