@class NSArray;

@interface CLSTestInvestigationFeeder : CLSInvestigationFeeder {
    NSArray *_items;
}

+ (void)initialize;

- (id)localStartDate;
- (id)localEndDate;
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

@end
