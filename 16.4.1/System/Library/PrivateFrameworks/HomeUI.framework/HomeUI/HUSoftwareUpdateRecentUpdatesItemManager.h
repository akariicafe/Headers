@class HMHome, HUSoftwareUpdateItemModule;

@interface HUSoftwareUpdateRecentUpdatesItemManager : HFItemManager

@property (retain, nonatomic) HUSoftwareUpdateItemModule *softwareUpdateModule;
@property (retain, nonatomic) HMHome *overrideHome;

- (void).cxx_destruct;
- (id)_buildItemModulesForHome:(id)a0;
- (id)_homeFuture;
- (id)_itemsToHideInSet:(id)a0;
- (id)initWithDelegate:(id)a0 home:(id)a1;
- (id)initWithDelegate:(id)a0 sourceItem:(id)a1;

@end
