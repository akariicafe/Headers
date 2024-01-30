@class UILabel, NSString, NSLayoutConstraint;

@interface HKElectrocardiogramInfoView : UIStackView

@property (retain, nonatomic) UILabel *heartRateLabel;
@property (retain, nonatomic) UILabel *bodyLabel;
@property (retain, nonatomic) NSLayoutConstraint *heartRateLabelLeadingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *heartRateFirstBaselineConstraint;
@property (retain, nonatomic) NSLayoutConstraint *heartImageViewHeightConstraint;
@property (retain, nonatomic) NSString *heartRateText;
@property (retain, nonatomic) NSString *bodyText;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateConstraints;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (id)_bodyView;
- (void)_addSubviews;
- (id)_heartRateView;

@end
