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

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setSeparatorStyle:(long long)a0;
- (void)_cnui_applyContactStyle;
- (BOOL)supportsValueColorUsesLabelColor;
- (void).cxx_destruct;
- (id)variableConstraints;
- (id)constantConstraints;
- (void)actionViewTapped:(id)a0;
- (BOOL)supportsTintColorValue;
- (BOOL)shouldShowStar;
- (void)updateTransportButtons;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (void)performDefaultAction;

@end
