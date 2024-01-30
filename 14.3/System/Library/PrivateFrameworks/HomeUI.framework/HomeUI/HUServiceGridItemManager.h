@class NSArray;

@interface HUServiceGridItemManager : HFItemManager

@property (copy, nonatomic) id /* block */ itemProvidersCreator;
@property (retain, nonatomic) NSArray *cachedSortedRoomIdentifiers;
@property (retain, nonatomic) NSArray *cachedSortedRooms;
@property (nonatomic) BOOL shouldGroupByRoom;
@property (nonatomic) BOOL shouldShowSectionHeaders;
@property (readonly, nonatomic) long long actionSetSectionIndex;

- (id)initWithDelegate:(id)a0 sourceItem:(id)a1;
- (void).cxx_destruct;
- (unsigned long long)_numberOfSections;
- (id)_identifierForSection:(unsigned long long)a0;
- (id)_buildItemProvidersForHome:(id)a0;
- (id)_itemsToHideInSet:(id)a0;
- (void)_willUpdateSections;
- (id)_titleForSectionWithIdentifier:(id)a0;
- (id)_sectionIdentifierForItem:(id)a0;
- (id)initWithDelegate:(id)a0 shouldGroupByRoom:(BOOL)a1 itemProvidersCreator:(id /* block */)a2;
- (id)_sortedRooms;
- (id /* block */)_roomComparator;
- (id)currentSectionIdentifiers;
- (id)initWithDelegate:(id)a0 shouldGroupByRoom:(BOOL)a1 shouldShowSectionHeaders:(BOOL)a2 itemProvidersCreator:(id /* block */)a3;
- (id)initWithDelegate:(id)a0 sourceItem:(id)a1 shouldGroupByRoom:(BOOL)a2 shouldShowSectionHeaders:(BOOL)a3 itemProvidersCreator:(id /* block */)a4;
- (id)_roomIdentifierForItem:(id)a0;
- (id)_sortedRoomIdentifiers;

@end
