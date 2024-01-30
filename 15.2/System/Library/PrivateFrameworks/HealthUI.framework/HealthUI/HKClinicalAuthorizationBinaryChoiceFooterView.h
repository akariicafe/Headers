@class UIButton, NSLayoutConstraint;

@interface HKClinicalAuthorizationBinaryChoiceFooterView : UIView

@property (readonly, nonatomic) NSLayoutConstraint *secondaryFirstBaselineToPrimaryBottomConstraint;
@property (readonly, nonatomic) UIButton *primaryButton;
@property (readonly, nonatomic) UIButton *secondaryButton;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (void)_updateForCurrentContentSizeCategory;
- (void)_setUpSubviews;
- (void)_setUpConstraints;

@end
