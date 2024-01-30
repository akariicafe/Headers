@class NSArray, PSSimStatusCache, CTCellularPlanManager, PSUICellularPlanManagerCache;

@interface PSUIDefaultVoiceLineSpecifier : PSSpecifier

@property (retain, nonatomic) NSArray *cachedPlanItems;
@property (retain, nonatomic) PSUICellularPlanManagerCache *planManagerCache;
@property (retain, nonatomic) CTCellularPlanManager *planManager;
@property (retain, nonatomic) PSSimStatusCache *simStatusCache;
@property (retain, nonatomic) NSArray *cachedSubscriptionContexts;
@property (readonly, nonatomic) BOOL isSubcontrollerNeeded;

- (void).cxx_destruct;
- (id)initWithPlanManagerCache:(id)a0 planManager:(id)a1 simStatusCache:(id)a2;
- (void)setDefaultVoiceLine:(id)a0 specifier:(id)a1;
- (id)defaultVoiceLine:(id)a0;
- (void)updateCachedState;
- (id)planItemForListItem:(id)a0;
- (id)initSpecifier;
- (id)subscriptionContextForListItem:(id)a0;

@end
