@class NSMutableDictionary, HFItem;
@protocol HFServiceLikeItem;

@interface HUAccessorySceneListContentItemManager : HUServiceGridItemManager

@property (readonly, nonatomic) NSMutableDictionary *committedActionBuildersByActionSetID;
@property (readonly, nonatomic) unsigned long long contentSource;
@property (readonly, nonatomic) HFItem<HFServiceLikeItem> *serviceLikeItem;
@property (nonatomic) BOOL persistAddedSuggestions;

+ (id)computeNumberOfItemsToDisplayForContentSource:(unsigned long long)a0 serviceLikeItem:(id)a1 home:(id)a2;
+ (id)createItemProviderForContentSource:(unsigned long long)a0 serviceLikeItem:(id)a1 home:(id)a2 persistAddedSuggestions:(BOOL)a3;

- (void).cxx_destruct;
- (id)_buildItemProvidersForHome:(id)a0;
- (id)_transformedUpdateOutcomeForItem:(id)a0 proposedOutcome:(id)a1;
- (id)suggestionItemProvider;
- (id)initWithDelegate:(id)a0 contentSource:(unsigned long long)a1 serviceLikeItem:(id)a2;
- (id)commitSelectionChangesWithSelectedItems:(id)a0;
- (id)actionSetBuilderForItem:(id)a0;
- (id)initWithDelegate:(id)a0 sourceItem:(id)a1 shouldGroupByRoom:(BOOL)a2 shouldShowSectionHeaders:(BOOL)a3 itemProvidersCreator:(id /* block */)a4;

@end
