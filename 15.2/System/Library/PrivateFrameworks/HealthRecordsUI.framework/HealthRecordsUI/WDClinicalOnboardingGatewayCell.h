@class UIStackView, WDBrandLogoView, HKBorderLineView, UILabel, NSLayoutConstraint;

@interface WDClinicalOnboardingGatewayCell : WDMedicalRecordGroupableCell

@property (readonly, nonatomic) WDBrandLogoView *logoView;
@property (readonly, nonatomic) UILabel *titleLabel;
@property (readonly, nonatomic) UILabel *subtitleLabel;
@property (readonly, nonatomic) UILabel *detailLabel;
@property (readonly, nonatomic) HKBorderLineView *featureDownloadView;
@property (readonly, nonatomic) HKBorderLineView *featureSharingView;
@property (readonly, nonatomic) UILabel *featureDownloadTitleLabel;
@property (readonly, nonatomic) UILabel *featureDownloadTextLabel;
@property (readonly, nonatomic) UILabel *featureSharingTitleLabel;
@property (readonly, nonatomic) UILabel *featureSharingTextLabel;
@property (readonly, nonatomic) NSLayoutConstraint *featureDownloadBottomConstraint;
@property (readonly, nonatomic) NSLayoutConstraint *featureSharingBottomConstraint;
@property (readonly, nonatomic) UILabel *tapToConnectLabel;
@property (readonly, nonatomic) NSLayoutConstraint *tapToConnectLabelHeightConstraint;
@property (readonly, nonatomic) UIStackView *outerSpecContainerView;
@property (readonly, nonatomic) UIStackView *verticalSpecContainerView;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)_updateLabelVisibility;
- (void).cxx_destruct;
- (void)setupSubviews;
- (void)prepareForReuse;
- (void)tintColorDidChange;
- (void)setUpConstraints;
- (void)_updateForContentSizeCategory:(id)a0;
- (void)_updateBasedOnAccessibilityCategory:(BOOL)a0;
- (id)_contentViewMarginsGuide;
- (void)configureWithGateway:(id)a0 dataProvider:(id)a1 connected:(BOOL)a2;
- (void)_createLogoView;
- (void)_createTitleLabel;
- (void)_createSubtitleLabel;
- (void)_createDetailLabel;
- (void)_createDownloadAvailableView;
- (void)_createSharingAvailableView;
- (void)_createVerticalSpecContainerView;
- (void)_createTapToConnectLabel;
- (void)_createOuterSpecContainerView;
- (void)_constrainStackViewContainerWithinContentView;
- (void)_positionTapToConnectLabel;

@end
