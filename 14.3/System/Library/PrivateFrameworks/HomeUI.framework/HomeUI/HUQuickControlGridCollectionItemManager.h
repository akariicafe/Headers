@class HFAccessoryControlItem, HFItem, NSSet, NSMapTable, HFServiceItemProvider, HFItemProvider, NSString;
@protocol HFServiceLikeItem;

@interface HUQuickControlGridCollectionItemManager : HFItemManager <HUQuickControlCollectionItemManaging>

@property (copy, nonatomic) HFAccessoryControlItem *accessoryControlItem;
@property (retain, nonatomic) HFItem<HFServiceLikeItem> *sourceServiceLikeItem;
@property (retain, nonatomic) NSSet *controlItems;
@property (retain, nonatomic) HFServiceItemProvider *serviceItemProvider;
@property (retain, nonatomic) HFItemProvider *controlItemProvider;
@property (retain, nonatomic) NSMapTable *controlItemToViewControllerTable;
@property (readonly, nonatomic) HFItemProvider *supplementaryItemProvider;
@property (readonly, nonatomic) HFItemProvider *overflowItemProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id /* block */)serviceItemComparator;
+ (unsigned long long)specialCaseSectionSortingForControlItem:(id)a0 viewController:(id)a1 fromControlItems:(id)a2 primaryServiceType:(id)a3;
+ (unsigned long long)preferredControlForControlItem:(id)a0 allControlItems:(id)a1 isSupplementary:(BOOL)a2;
+ (BOOL)isPrimaryOrBinaryStateControlItem:(id)a0;

- (id)initWithDelegate:(id)a0 sourceItem:(id)a1;
- (void).cxx_destruct;
- (id)configuration;
- (id)_buildItemProvidersForHome:(id)a0;
- (id)_buildSectionsWithDisplayedItems:(id)a0;
- (id)sourceItem;
- (id)viewControllerForItem:(id)a0;
- (id)initWithDelegate:(id)a0 controlItems:(id)a1;
- (id)_generateViewControllersForControlItems:(id)a0;
- (BOOL)_catchAllLayoutForGridViewProfiles:(id)a0 supplementaryViewProfiles:(id)a1;
- (id)_composeIdentifierForService:(id)a0 section:(unsigned long long)a1;
- (id)titleForItem:(id)a0;
- (id)gridItemProvider;
- (id)headerAccessoryButtonTitleForSection:(unsigned long long)a0;
- (id)headerAccessoryButtonTargetForSection:(unsigned long long)a0;

@end
