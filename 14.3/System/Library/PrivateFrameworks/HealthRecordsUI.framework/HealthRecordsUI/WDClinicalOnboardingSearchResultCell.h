@class NSArray, HKClinicalProviderSearchResult;

@interface WDClinicalOnboardingSearchResultCell : WDMedicalRecordBrandCell

@property (copy, nonatomic) HKClinicalProviderSearchResult *searchResult;
@property (copy, nonatomic) NSArray *searchTerms;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)setSearchResult:(id)a0 dataProvider:(id)a1 searchTerms:(id)a2;
- (void)_updateLabelVisibility;
- (void)_updateContentWithSearchResult:(id)a0 dataProvider:(id)a1 searchTerms:(id)a2;
- (void)_updateForContentSizeCategory:(id)a0;

@end
