@class HMHome, HUSoftwareUpdateItemModule;

@interface HUSoftwareUpdateRecentUpdatesItemManager : HFItemManager

@property (retain, nonatomic) HUSoftwareUpdateItemModule *softwareUpdateModule;
@property (retain, nonatomic) HMHome *overrideHome;

- (id)initWithDelegate:(id)a0 sourceItem:(id)a1;
- (void).cxx_destruct;
- (id)_buildItemProvidersForHome:(id)a0;
- (id)_buildSectionsWithDisplayedItems:(id)a0;
- (id)_homeFuture;
- (id)_transformedUpdateOutcomeForItem:(id)a0 proposedOutcome:(id)a1;
- (id)initWithDelegate:(id)a0 home:(id)a1;

@end
