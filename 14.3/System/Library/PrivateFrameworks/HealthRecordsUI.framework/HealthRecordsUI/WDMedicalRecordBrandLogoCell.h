@class WDBrandLogoView, UIImageView, WDMedicalRecordBrandView, WDClinicalSourcesDataProvider;
@protocol HKClinicalBrandable;

@interface WDMedicalRecordBrandLogoCell : WDMedicalRecordGroupableCell

@property (readonly, nonatomic) UIImageView *disclosureChevronView;
@property (readonly, nonatomic) WDBrandLogoView *logoView;
@property (readonly, nonatomic) WDMedicalRecordBrandView *brandView;
@property (readonly, nonatomic) id<HKClinicalBrandable> brandable;
@property (readonly, nonatomic) WDClinicalSourcesDataProvider *dataProvider;
@property (nonatomic) double logoSize;
@property (nonatomic, getter=showsDisclosureChevron) BOOL showDisclosureChevron;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)_updateContentWithBrandable:(id)a0 dataProvider:(id)a1;
- (void)updateConstraints;
- (void)prepareForReuse;
- (id)_contentViewMarginsGuide;
- (void)setupSubviews;
- (void)setBrandable:(id)a0 dataProvider:(id)a1;
- (void)setUpConstraints;
- (void)_updateBasedOnAccessibilityCategory:(BOOL)a0;

@end
