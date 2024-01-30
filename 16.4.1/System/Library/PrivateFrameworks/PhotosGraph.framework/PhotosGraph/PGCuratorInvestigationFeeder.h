@class NSArray;

@interface PGCuratorInvestigationFeeder : CLSInvestigationFeeder {
    NSArray *_items;
}

- (id)allItems;
- (id)approximateLocation;
- (unsigned long long)numberOfItems;
- (id)itemAtIndex:(unsigned long long)a0;
- (void)enumerateItemsUsingBlock:(id /* block */)a0;
- (id)initWithItems:(id)a0;
- (void).cxx_destruct;
- (id)universalEndDate;
- (id)universalStartDate;
- (void)enumerateItemsWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (id)localEndDateComponents;
- (id)localStartDateComponents;
- (id)privateItems;
- (id)sharedItems;

@end
