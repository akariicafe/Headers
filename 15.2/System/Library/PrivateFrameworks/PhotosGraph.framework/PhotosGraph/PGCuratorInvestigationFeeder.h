@class NSArray;

@interface PGCuratorInvestigationFeeder : CLSInvestigationFeeder {
    NSArray *_items;
}

- (id)initWithItems:(id)a0;
- (id)allItems;
- (void)enumerateItemsUsingBlock:(id /* block */)a0;
- (unsigned long long)numberOfItems;
- (id)itemAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)approximateLocation;
- (id)universalStartDate;
- (id)universalEndDate;
- (id)localStartDateComponents;
- (id)localEndDateComponents;
- (void)enumerateItemsWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;

@end
