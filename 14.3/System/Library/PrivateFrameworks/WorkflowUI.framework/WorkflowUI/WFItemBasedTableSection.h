@class NSArray;

@interface WFItemBasedTableSection : WFTableSection

@property (retain, nonatomic) NSArray *items;

- (void)removeItem:(id)a0;
- (void)insertItem:(id)a0 atIndex:(unsigned long long)a1;
- (void)addItem:(id)a0;
- (void)removeItemAtIndex:(unsigned long long)a0;

@end
