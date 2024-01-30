@class NSArray;

@interface CLSTestInvestigationFeeder : CLSInvestigationFeeder {
    NSArray *_items;
}

+ (void)initialize;

- (id)allItems;
- (void)enumerateItemsUsingBlock:(id /* block */)a0;
- (id)initWithItems:(id)a0;
- (unsigned long long)numberOfItems;
- (void)enumerateItemsWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (void).cxx_destruct;
- (id)localStartDateComponents;
- (id)itemAtIndex:(unsigned long long)a0;
- (id)localEndDateComponents;
- (id)approximateLocation;

@end
