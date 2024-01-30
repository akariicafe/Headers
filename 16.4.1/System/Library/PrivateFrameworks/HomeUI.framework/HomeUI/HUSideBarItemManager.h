@class NSString, HFStaticItemProvider, HUSideBarStaticItem, HFRoomItemProvider, NSDictionary, HFReorderableHomeKitItemList, HFAccessoryCategoryStatusItemProvider;

@interface HUSideBarItemManager : HFItemManager <HFHomeManagerObserver>

@property (retain, nonatomic) HFStaticItemProvider *staticItemProvider;
@property (retain, nonatomic) HFRoomItemProvider *roomItemProvider;
@property (retain, nonatomic) HFAccessoryCategoryStatusItemProvider *categoryItemProvider;
@property (retain, nonatomic) HUSideBarStaticItem *homeItem;
@property (retain, nonatomic) HUSideBarStaticItem *automationItem;
@property (retain, nonatomic) HUSideBarStaticItem *discoverItem;
@property (retain, nonatomic) NSDictionary *discoverContentAvailabilityDictionary;
@property (retain, nonatomic) HFReorderableHomeKitItemList *reorderableRoomList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)allItems;
- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (id)sortedRoomItems;
- (id)_buildItemProvidersForHome:(id)a0;
- (id)_buildSectionsWithDisplayedItems:(id)a0;
- (id)_itemsToHideInSet:(id)a0;
- (id)categoryItemForCategory:(id)a0;
- (id)getLearnItemAvailabilityDictionary;
- (id)roomItemForRoom:(id)a0;
- (id)roomItems;
- (id)sortedCategoryItems;

@end
