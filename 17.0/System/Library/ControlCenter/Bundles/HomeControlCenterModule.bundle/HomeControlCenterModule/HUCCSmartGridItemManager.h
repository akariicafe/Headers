@class HFStaticItemProvider, HFPredictionsManager, HFPredictionsItemProvider, NSMutableDictionary;
@protocol HUCCMosaicLayoutDelegate;

@interface HUCCSmartGridItemManager : HFItemManager <HFPredictionsManagerDelegate>

@property (retain, nonatomic) HFStaticItemProvider *homeItemProvider;
@property (retain, nonatomic) HFPredictionsManager *predictionsManager;
@property (retain, nonatomic) HFPredictionsItemProvider *predictionsItemProvider;
@property (weak, nonatomic) id<HUCCMosaicLayoutDelegate> mosaicLayoutDelegate;
@property (retain, nonatomic) NSMutableDictionary *mosaicLayoutDetails;
@property (nonatomic) unsigned long long chosenLayoutType;
@property (nonatomic) BOOL layoutWasChanged;
@property (nonatomic) BOOL numberOfPlaceholdersWasChanged;
@property (nonatomic) unsigned long long numberOfPlaceholderItems;

- (void).cxx_destruct;
- (id)_buildItemProvidersForHome:(id)a0;
- (id)_buildSectionsWithDisplayedItems:(id)a0;
- (void)_didFinishUpdateTransactionWithAffectedItems:(id)a0;
- (id)_itemsToHideInSet:(id)a0;
- (void)predictionsManagerDidUpdatePredictions:(id)a0;
- (BOOL)_shouldBuildItemProvidersAndModulesForNilHome;
- (id)_mosaicKeyForItem:(id)a0;
- (id)initWithMosaicLayoutDelegate:(id)a0;
- (void)loadDefaultProviderItem;
- (id)mosaicDetailsForDisplayedItemAtIndexPath:(id)a0;
- (id)mosaicDetailsForItem:(id)a0;

@end
