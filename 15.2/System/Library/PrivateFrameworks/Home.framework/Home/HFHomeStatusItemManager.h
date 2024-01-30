@class NSTimer, HMRoom, HFStatusItemProvider;

@interface HFHomeStatusItemManager : HFItemManager

@property (retain, nonatomic) HMRoom *room;
@property (retain, nonatomic) HFStatusItemProvider *statusItemProvider;
@property (retain, nonatomic) NSTimer *invalidationTimer;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0 sourceItem:(id)a1;
- (id)_buildItemProvidersForHome:(id)a0;
- (id /* block */)_comparatorForSectionIdentifier:(id)a0;
- (BOOL)_requiresNotificationsForCharacteristic:(id)a0;
- (void)_didFinishUpdateTransactionWithAffectedItems:(id)a0;
- (id)_itemsToHideInSet:(id)a0;
- (id)matchingItemForHomeKitObject:(id)a0;
- (id)initWithRoom:(id)a0 delegate:(id)a1;
- (void)_updateInvalidationTimer;
- (id)statusItems;
- (void)_invalidateItemsIfNecessary;
- (void)updateNeedsInvalidation:(BOOL)a0 forStatusItem:(id)a1;
- (BOOL)shouldPerformInitialLoadOnMainThread;

@end
