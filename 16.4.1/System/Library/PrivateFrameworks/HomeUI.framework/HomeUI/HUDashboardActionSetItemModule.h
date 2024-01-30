@class HUDashboardContext, HFActionSetItemProvider, NAFuture, NSSet, NSString, HFPredictedActionSetItemProvider;
@protocol HFCharacteristicValueSource;

@interface HUDashboardActionSetItemModule : HFItemModule <HFItemHiding, HFPredictionsManagerDelegate>

@property (retain, nonatomic) HUDashboardContext *context;
@property (retain, nonatomic) HFActionSetItemProvider *actionSetItemProvider;
@property (retain, nonatomic) HFPredictedActionSetItemProvider *predictedActionSetItemProvider;
@property (retain, nonatomic) NAFuture *initialPredictionUpdateFuture;
@property (retain, nonatomic) id<HFCharacteristicValueSource> valueSource;
@property (retain, nonatomic) id<HFCharacteristicValueSource> valueSource;
@property (readonly, nonatomic) NSSet *predictedActionSetItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_updateFilters;
- (void).cxx_destruct;
- (id /* block */)_itemComparator;
- (id)_itemsToHideInSet:(id)a0;
- (id)_reorderableHomeKitItemListKey;
- (id)buildItemProviders;
- (id)buildSectionsWithDisplayedItems:(id)a0;
- (id)initWithContext:(id)a0 itemUpdater:(id)a1;
- (void)predictionsManagerDidUpdatePredictions:(id)a0;
- (BOOL)showPredictedScenes;
- (BOOL)supportsReorderingForItem:(id)a0;

@end
