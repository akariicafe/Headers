@class HKElectrocardiogramChartView, UIView, NSArray, HKRoundedHeaderView, NSString, UIImageView, NSLayoutConstraint, HKElectrocardiogram, HKDateCache, UILabel;

@interface HKElectrocardiogramCardView : UIView <HKDateCacheObserver>

@property (weak, nonatomic) HKDateCache *dateCache;
@property (nonatomic, getter=isOnboarding) BOOL onboarding;
@property (nonatomic) long long activeAlgorithmVersion;
@property (readonly, nonatomic) BOOL isSampleInteractive;
@property (retain, nonatomic) HKRoundedHeaderView *headerView;
@property (retain, nonatomic) UIView *cellBackgroundView;
@property (retain, nonatomic) UIImageView *heartImageView;
@property (retain, nonatomic) UILabel *averageHeartRateLabel;
@property (retain, nonatomic) UILabel *symptomsLabel;
@property (retain, nonatomic) HKElectrocardiogramChartView *graphView;
@property (retain, nonatomic) NSLayoutConstraint *averageHeartRateLabelFirstBaselineConstraint;
@property (retain, nonatomic) NSLayoutConstraint *averageHeartRateLabelWidthConstraint;
@property (retain, nonatomic) NSLayoutConstraint *symptomsLabelFirstBaselineConstraint;
@property (retain, nonatomic) NSLayoutConstraint *graphTopConstraint;
@property (retain, nonatomic) NSLayoutConstraint *heartImageViewHeightConstraint;
@property (retain, nonatomic) NSArray *regularConstraints;
@property (retain, nonatomic) NSArray *largeTextConstraints;
@property (retain, nonatomic) HKElectrocardiogram *sample;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)_graphHeight;
+ (double)estimatedHeight;
+ (id)_accessibilityContentSizeCategory;
+ (double)_headerBottomToAverageHeartRateBaseline;
+ (double)_averageHeartRateBaselineToGraphTop;
+ (double)_graphBottomToCardBottom;
+ (id)_averageHeartRateSymptomsFont;
+ (id)_averageHeartRateSymptomsFontForElectrocardiogram:(id)a0;
+ (double)_averageHeartRateBaselineToSymptomBaseline;
+ (id)_averageHeartRateSymptomsTextStyle;
+ (id)_averageHeartRateSymptomsBoldFont;

- (void)tintColorDidChange;
- (void)_updateForCurrentSizeCategory;
- (void)updateUI;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_setupUI;
- (id)_cardBackgroundColor;
- (void)traitCollectionDidChange:(id)a0;
- (void)_setupConstraints;
- (id)initWithSample:(id)a0 dateCache:(id)a1 onboarding:(BOOL)a2 activeAlgorithmVersion:(long long)a3 isSampleInteractive:(BOOL)a4;
- (void)dateCacheDidUpdate:(id)a0 onNotification:(id)a1;
- (void)_updateTextConstraints;
- (BOOL)_isLayingOutForAccessibility;
- (id)_chevronColor;
- (void)_setUpGraph;
- (id)_cardHeaderColor;
- (id)_graphBackgroundColor;
- (void)_updateGraphTopConstraint;

@end
