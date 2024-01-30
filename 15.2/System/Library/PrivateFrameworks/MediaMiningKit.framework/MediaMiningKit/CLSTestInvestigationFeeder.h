@class NSArray;

@interface CLSTestInvestigationFeeder : CLSInvestigationFeeder {
    NSArray *_items;
}

+ (void)initialize;

- (id)initWithItems:(id)a0;
- (id)localStartDate;
- (id)allItems;
- (void)enumerateItemsUsingBlock:(id /* block */)a0;
- (unsigned long long)numberOfItems;
- (id)localEndDate;
- (id)itemAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)approximateLocation;
- (id)universalStartDate;
- (id)universalEndDate;
- (id)localStartDateComponents;
- (id)localEndDateComponents;
- (void)enumerateItemsWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;

@end
