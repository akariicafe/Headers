@class UILayoutGuide, UILabel, NSLayoutConstraint, UIButton;

@interface WDClinicalOnboardingNoGeoView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UIButton *locationServicesButton;
@property (retain, nonatomic) NSLayoutConstraint *subtitleBaselineConstraint;
@property (retain, nonatomic) NSLayoutConstraint *locationServicesButtonBaselineConstraint;
@property (retain, nonatomic) NSLayoutConstraint *containerCenterYConstraint;
@property (retain, nonatomic) UILayoutGuide *containerLayoutGuide;

- (void)_updateForCurrentSizeCategory;
- (id)init;
- (void).cxx_destruct;
- (void)_tappedLocationServices:(id)a0;
- (void)layoutSubviews;
- (void)_setupSubviews;
- (void)traitCollectionDidChange:(id)a0;
- (void)_setupConstraints;

@end
