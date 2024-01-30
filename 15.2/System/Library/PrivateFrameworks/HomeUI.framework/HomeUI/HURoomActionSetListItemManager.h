@class NSArray;

@interface HURoomActionSetListItemManager : HFItemManager

@property (retain, nonatomic) NSArray *cachedSortedRooms;

- (void).cxx_destruct;
- (id)_identifierForSection:(unsigned long long)a0;
- (id)_sectionIdentifierForItem:(id)a0;
- (unsigned long long)_numberOfSections;
- (id)_buildItemProvidersForHome:(id)a0;
- (void)_willUpdateSections;
- (id)currentSectionIdentifiersSnapshot;
- (id)_titleForSectionWithIdentifier:(id)a0;
- (id)_currentSectionIdentifiers;
- (id)_sortedRooms;
- (id /* block */)_roomComparator;
- (long long)sectionIndexForRoomIdentifier:(id)a0;

@end
