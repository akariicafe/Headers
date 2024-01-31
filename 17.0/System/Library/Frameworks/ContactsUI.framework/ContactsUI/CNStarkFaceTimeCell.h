@class CNStarkActionView, NSDictionary, NSString, UILabel;
@protocol CNPropertyCellDelegate;

@interface CNStarkFaceTimeCell : CNContactCell <CNStarkActionViewDelegate>

@property (retain, nonatomic) UILabel *faceTimeLabel;
@property (readonly, nonatomic) CNStarkActionView *actionView;
@property (weak, nonatomic) id<CNPropertyCellDelegate> delegate;
@property (copy, nonatomic) NSDictionary *labelTextAttributes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)requiresConstraintBasedLayout;

- (void)setSeparatorStyle:(long long)a0;
- (void).cxx_destruct;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)_cnui_applyContactStyle;
- (void)actionViewTapped:(id)a0;
- (id)constantConstraints;
- (void)performDefaultAction;
- (BOOL)shouldShowStar;
- (BOOL)supportsTintColorValue;
- (void)updateTransportButtons;
- (id)variableConstraints;

@end
