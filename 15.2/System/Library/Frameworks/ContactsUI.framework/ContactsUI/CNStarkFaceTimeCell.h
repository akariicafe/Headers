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

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setSeparatorStyle:(long long)a0;
- (void)_cnui_applyContactStyle;
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
