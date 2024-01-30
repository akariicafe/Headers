@class NSMutableArray;

@interface TSTTableSortTag : NSObject

@property (retain, nonatomic) NSMutableArray *reorganizeValues;
@property (nonatomic) unsigned int columnOrRowIndex;

- (void).cxx_destruct;
- (id)initWithNumberOfSortRules:(unsigned long long)a0;
- (id)reorganizeValueAtIndex:(unsigned long long)a0;
- (void)setReorganizeValue:(id)a0 atIndex:(unsigned long long)a1;

@end
