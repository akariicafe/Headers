@class HMHome, NSString, NSArray, HUAvailableRelatedTriggerItemProvider, HUAvailableTriggerItemActivationRequest, HFStaticItemProvider, HFStaticItem, NSMutableArray, NSSet;
@protocol HFItemSectionAccessoryButtonHeaderDelegate, HUAvailableRelatedTriggerItemModuleContextProviding;

@interface HUAvailableRelatedTriggerItemModule : HFItemModule <HFHomeObserver> {
    NSSet *_itemProviders;
}

@property (retain, nonatomic) HUAvailableRelatedTriggerItemProvider *availableTriggerItemProvider;
@property (retain, nonatomic) HFStaticItemProvider *staticItemProvider;
@property (retain, nonatomic) NSMutableArray *previouslySortedItems;
@property (retain, nonatomic) HFStaticItem *addAutomationItem;
@property (retain, nonatomic) NSArray *alarmCharacteristics;
@property (retain, nonatomic) NSArray *actionBuilderFactories;
@property (retain, nonatomic) NSArray *eventOptionsItems;
@property (retain, nonatomic) HUAvailableTriggerItemActivationRequest *activeRequest;
@property (retain, nonatomic) NSMutableArray *waitingRequests;
@property (retain, nonatomic) HFStaticItem *naturalLightingItem;
@property (retain, nonatomic) NSArray *relatedItems;
@property (retain, nonatomic) HMHome *home;
@property (weak, nonatomic) id<HFItemSectionAccessoryButtonHeaderDelegate> editButtonHeaderDelegate;
@property (readonly, nonatomic) id<HUAvailableRelatedTriggerItemModuleContextProviding> context;
@property (nonatomic) BOOL enableNaturalLighting;
@property (nonatomic) BOOL automationItemIsLoading;
@property (retain, nonatomic) NSString *sectionHeaderEditButtonTitleKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id /* block */)sortComparator;
+ (id)defaultContext;
+ (BOOL)_itemClassSupportsEvents:(id)a0;
+ (BOOL)shouldShowRecommendation:(id)a0;

- (id)serviceTypes;
- (void).cxx_destruct;
- (id)buildSectionsWithDisplayedItems:(id)a0;
- (void)home:(id)a0 didAddTrigger:(id)a1;
- (void)home:(id)a0 didRemoveTrigger:(id)a1;
- (id)itemProviders;
- (id)_buildItemProviders;
- (void)_updateRelatedItems:(id)a0;
- (void)initialSetup;
- (void)_performRequest:(id)a0;
- (id)_activateItem:(id)a0 active:(BOOL)a1;
- (void)_finishCommitWithItems:(id)a0 updatesDelayReason:(id)a1;
- (id)itemsToHideInSet:(id)a0;
- (BOOL)_editingAvailableWithDisplayedItems:(id)a0;
- (id)progressivelySortItems:(id)a0;
- (id)serviceTypesSupportingAutomation;
- (void)didActivateItem:(id)a0 active:(BOOL)a1 error:(id)a2;
- (id)_accessoryCategoryUserFrieindlyDescription;
- (BOOL)shouldHideAutomationsModule;
- (BOOL)relatedItemsCanBeAutomated;
- (id)initWithItems:(id)a0 itemUpdater:(id)a1 home:(id)a2 context:(id)a3;
- (id)activateItem:(id)a0 active:(BOOL)a1;
- (id)activateAllSelectedItems;

@end
