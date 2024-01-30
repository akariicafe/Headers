@class HFReorderableHomeKitItemList, HFItem;

@interface HURoomListItemManager : HFItemManager

@property (retain, nonatomic) HFItem *addRoomItem;
@property (retain, nonatomic) HFReorderableHomeKitItemList *clientReorderableRoomList;
@property (readonly, nonatomic) long long roomsSection;
@property (retain, nonatomic) HFReorderableHomeKitItemList *reorderableRoomList;

- (void).cxx_destruct;
- (id)_buildItemProvidersForHome:(id)a0;
- (id /* block */)_comparatorForSectionIdentifier:(id)a0;

@end
