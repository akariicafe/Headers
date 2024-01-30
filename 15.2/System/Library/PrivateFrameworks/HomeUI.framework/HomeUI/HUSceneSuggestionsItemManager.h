@class HREActionSetRecommendationItemProvider, HFItem;

@interface HUSceneSuggestionsItemManager : HFItemManager

@property (retain, nonatomic) HREActionSetRecommendationItemProvider *suggestionItemProvider;
@property (retain, nonatomic) HFItem *addCustomSceneItem;

+ (id)computeNumberOfSuggestionsInHome:(id)a0;
+ (id)suggestionsItemProviderInHome:(id)a0;

- (void).cxx_destruct;
- (id)_identifierForSection:(unsigned long long)a0;
- (id)_sectionIdentifierForItem:(id)a0;
- (unsigned long long)_numberOfSections;
- (id)_buildItemProvidersForHome:(id)a0;
- (id)currentSectionIdentifiersSnapshot;
- (id)_titleForSectionWithIdentifier:(id)a0;
- (id)_currentSectionIdentifiers;

@end
