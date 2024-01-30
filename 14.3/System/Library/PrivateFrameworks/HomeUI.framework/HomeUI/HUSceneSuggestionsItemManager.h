@class HFItem, HFActionSetSuggestionItemProvider;

@interface HUSceneSuggestionsItemManager : HFItemManager

@property (retain, nonatomic) HFActionSetSuggestionItemProvider *suggestionItemProvider;
@property (retain, nonatomic) HFItem *addCustomSceneItem;

- (void).cxx_destruct;
- (unsigned long long)_numberOfSections;
- (id)_identifierForSection:(unsigned long long)a0;
- (id)_buildItemProvidersForHome:(id)a0;
- (id)_titleForSectionWithIdentifier:(id)a0;
- (id)_sectionIdentifierForItem:(id)a0;
- (id)_currentSectionIdentifiers;

@end
