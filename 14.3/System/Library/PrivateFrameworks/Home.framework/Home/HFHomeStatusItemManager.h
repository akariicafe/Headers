@class HFStatusItemProvider, HMRoom, NSTimer, HFStaticItem;

@interface HFHomeStatusItemManager : HFItemManager

@property (retain, nonatomic) HMRoom *room;
@property (nonatomic) unsigned long long maxStatusItemCount;
@property (retain, nonatomic) HFStaticItem *showDetailsItem;
@property (retain, nonatomic) HFStatusItemProvider *statusItemProvider;
@property (nonatomic) long long latestOverallPriority;
@property (nonatomic) unsigned long long latestOverallLoadingState;
@property (retain, nonatomic) NSTimer *invalidationTimer;

- (id)initWithDelegate:(id)a0 sourceItem:(id)a1;
- (void).cxx_destruct;
- (id)_buildItemProvidersForHome:(id)a0;
- (id /* block */)_comparatorForSectionIdentifier:(id)a0;
- (BOOL)_requiresNotificationsForCharacteristic:(id)a0;
- (void)_didFinishUpdateTransactionWithAffectedItems:(id)a0;
- (id)_itemsToHideInSet:(id)a0;
- (id)matchingItemForHomeKitObject:(id)a0;
- (id)initWithRoom:(id)a0 maxStatusItems:(unsigned long long)a1 delegate:(id)a2;
- (void)_updateInvalidationTimer;
- (id)_showDetailsItemTitle;
- (id)statusItems;
- (void)_invalidateItemsIfNecessary;
- (unsigned long long)_overflowStatusItemCount;
- (void)updateNeedsInvalidation:(BOOL)a0 forStatusItem:(id)a1;
- (long long)_overallPriority;

@end
