@class HFItem, NAFuture, HUSoftwareUpdateAllItem, HMHome, NSString, HUFirmwareUpdateItemModule, HUSoftwareUpdateFetchItem, HUSoftwareUpdateItemModule;

@interface HUSoftwareUpdateStandaloneItemManager : HFItemManager <HFHomeObserver>

@property (retain, nonatomic) HFItem *autoUpdateItem;
@property (retain, nonatomic) HMHome *overrideHome;
@property (retain, nonatomic) HUSoftwareUpdateFetchItem *fetchItem;
@property (retain, nonatomic) HUSoftwareUpdateItemModule *softwareUpdateModule;
@property (retain, nonatomic) HUFirmwareUpdateItemModule *firmwareUpdateModule;
@property (retain, nonatomic) NAFuture *softwareUpdateFetchFuture;
@property (retain, nonatomic) HUSoftwareUpdateAllItem *updateAllItem;
@property (retain, nonatomic) HFItem *updatedRecentlyItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDelegate:(id)a0 sourceItem:(id)a1;
- (void).cxx_destruct;
- (void)home:(id)a0 didUpdateAutomaticSoftwareUpdateEnabled:(BOOL)a1;
- (id)_buildItemProvidersForHome:(id)a0;
- (id)_buildSectionsWithDisplayedItems:(id)a0;
- (id)_homeFuture;
- (id)_transformedUpdateOutcomeForItem:(id)a0 proposedOutcome:(id)a1;
- (id)_itemsToHideInSet:(id)a0;
- (id)initWithDelegate:(id)a0 home:(id)a1;
- (void)addHomeSetupSuccessBlock:(id /* block */)a0;
- (id)triggerSoftwareUpdateFetch;

@end
