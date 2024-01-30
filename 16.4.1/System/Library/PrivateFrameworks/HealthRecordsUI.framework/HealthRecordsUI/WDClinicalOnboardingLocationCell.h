@class HKClinicalProvider;

@interface WDClinicalOnboardingLocationCell : WDClinicalLocationCell

@property (readonly, copy, nonatomic) HKClinicalProvider *provider;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;
- (void).cxx_destruct;
- (void)_setupSubviews;
- (void)_updateContentWithBrandable:(id)a0 dataProvider:(id)a1;
- (void)_updateForContentSizeCategory:(id)a0;
- (void)setProvider:(id)a0 dataProvider:(id)a1;

@end
