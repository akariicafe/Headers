@class UIStackView, WDBrandLogoView, UILayoutGuide, UILabel;

@interface WDClinicalOnboardingGatewayCell : WDMedicalRecordGroupableCell

@property (readonly, nonatomic) WDBrandLogoView *logoView;
@property (readonly, nonatomic) UILabel *titleLabel;
@property (readonly, nonatomic) UILabel *subtitleLabel;
@property (readonly, nonatomic) UILabel *detailLabel;
@property (readonly, nonatomic) UILabel *tapToConnectLabel;
@property (readonly, nonatomic) UIStackView *verticalSpecContainerView;
@property (readonly, nonatomic) UILayoutGuide *centerLogoInTitlesLayoutGuide;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)tintColorDidChange;
- (void).cxx_destruct;
- (void)_updateLabelVisibility;
- (void)prepareForReuse;
- (id)_contentViewMarginsGuide;
- (void)setupSubviews;
- (void)setUpConstraints;
- (void)configureWithGateway:(id)a0 dataProvider:(id)a1 connected:(BOOL)a2;
- (void)_createLogoView;
- (void)_createCenterLogoInTitlesLayoutGuide;
- (void)_createTitleLabel;
- (void)_createSubtitleLabel;
- (void)_createDetailLabel;
- (void)_createTapToConnectLabel;
- (void)_createVerticalSpecContainerView;
- (void)_constrainStackViewContainerWithinContentView;
- (void)_positionLogoViewContentLeading;
- (void)_updateForContentSizeCategory:(id)a0;
- (void)_updateBasedOnAccessibilityCategory:(BOOL)a0;

@end
