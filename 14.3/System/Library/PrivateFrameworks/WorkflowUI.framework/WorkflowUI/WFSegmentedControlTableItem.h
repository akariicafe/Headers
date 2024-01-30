@class NSArray;

@interface WFSegmentedControlTableItem : WFCustomTableItem

@property (readonly, copy, nonatomic) NSArray *possibleValues;

+ (id)itemWithInitialValue:(id)a0 possibleValues:(id)a1;

- (void).cxx_destruct;
- (void)configureCell:(id)a0;
- (void)segmentedControlSelectedItemAtIndex:(unsigned long long)a0;

@end
