@class NSSet, HFMediaSystemBuilder;

@interface HUMediaSystemEditorGridItemManager : HUServiceGridItemManager

@property (retain, nonatomic) NSSet *prioritizedRooms;
@property (readonly, nonatomic) HFMediaSystemBuilder *mediaSystemBuilder;

+ (id /* block */)defaultItemProviderCreatorForMediaSystemBuilder:(id)a0 options:(unsigned long long)a1;

- (void).cxx_destruct;
- (id /* block */)_roomComparator;
- (id)_itemsToHideInSet:(id)a0;
- (id)_sortedItems:(id)a0 forSectionIdentifier:(id)a1;
- (id)initWithDelegate:(id)a0 shouldGroupByRoom:(BOOL)a1 itemProvidersCreator:(id /* block */)a2;
- (id)initWithMediaSystemBuilder:(id)a0 delegate:(id)a1;

@end
