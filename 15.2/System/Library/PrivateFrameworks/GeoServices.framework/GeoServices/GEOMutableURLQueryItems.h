@class NSMutableArray;

@interface GEOMutableURLQueryItems : NSObject

@property (readonly, nonatomic) NSMutableArray *items;

- (id)initWithItems:(id)a0;
- (void)addItem:(id)a0;
- (void)addItemsFromArray:(id)a0;
- (void)addItemWithName:(id)a0 value:(id)a1;
- (void)addItemWithName:(id)a0 intValue:(int)a1;
- (void)addItemWithName:(id)a0 uint64Value:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)addItemWithName:(id)a0 uintValue:(unsigned int)a1;
- (id)init;

@end
