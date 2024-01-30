@class NSLayoutConstraint, UILabel, UIView, UIButton;

@interface WDClinicalOnboardingNoGeoView : UIView

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UIButton *locationServicesButton;
@property (retain, nonatomic) NSLayoutConstraint *subtitleBaselineConstraint;
@property (retain, nonatomic) NSLayoutConstraint *locationServicesButtonBaselineConstraint;
@property (retain, nonatomic) NSLayoutConstraint *containerCenterYConstraint;

- (void)layoutSubviews;
- (void)_updateForCurrentSizeCategory;
- (void)_setupConstraints;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (id)init;
- (void)_setupSubviews;
- (void)_tappedLocationServices:(id)a0;

@end
