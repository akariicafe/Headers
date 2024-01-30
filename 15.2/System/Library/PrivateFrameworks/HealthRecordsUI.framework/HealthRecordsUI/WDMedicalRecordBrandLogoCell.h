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
- (void)updateConstraints;
- (void)setupSubviews;
- (void)prepareForReuse;
- (void)setUpConstraints;
- (void)_updateBasedOnAccessibilityCategory:(BOOL)a0;
- (void)setBrandable:(id)a0 dataProvider:(id)a1;
- (void)_updateContentWithBrandable:(id)a0 dataProvider:(id)a1;
- (id)_contentViewMarginsGuide;

@end
