@class HKClinicalProvider;

@interface WDClinicalOnboardingLocationCell : WDClinicalLocationCell

@property (readonly, copy, nonatomic) HKClinicalProvider *provider;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)_setupSubviews;
- (void)_updateForContentSizeCategory:(id)a0;
- (void)_updateContentWithBrandable:(id)a0 dataProvider:(id)a1;
- (void)setProvider:(id)a0 dataProvider:(id)a1;

@end
