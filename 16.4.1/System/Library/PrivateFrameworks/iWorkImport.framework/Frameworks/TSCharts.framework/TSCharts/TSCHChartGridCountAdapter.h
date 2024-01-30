@interface TSCHChartGridCountAdapter : TSCHChartGridAdapter

@property (nonatomic) BOOL countFromOne;
@property (nonatomic) unsigned long long indexFactor;

- (id)valueAtIndex:(unsigned long long)a0;
- (void)setValue:(id)a0 atIndex:(unsigned long long)a1;
- (unsigned long long)count;
- (id)initWithCount:(unsigned long long)a0;

@end
