@class NSArray;

@interface HURoomActionSetListItemManager : HFItemManager

@property (retain, nonatomic) NSArray *cachedSortedRooms;

- (void).cxx_destruct;
- (unsigned long long)_numberOfSections;
- (id)_sectionIdentifierForItem:(id)a0;
- (id)_identifierForSection:(unsigned long long)a0;
- (id)_titleForSectionWithIdentifier:(id)a0;
- (id /* block */)_roomComparator;
- (id)_buildItemProvidersForHome:(id)a0;
- (id)_currentSectionIdentifiers;
- (id)_sortedRooms;
- (void)_willUpdateSections;
- (id)currentSectionIdentifiersSnapshot;
- (long long)sectionIndexForRoomIdentifier:(id)a0;

@end
