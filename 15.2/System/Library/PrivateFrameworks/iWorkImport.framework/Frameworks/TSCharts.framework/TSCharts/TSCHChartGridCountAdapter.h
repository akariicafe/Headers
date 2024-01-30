@interface TSCHChartGridCountAdapter : TSCHChartGridAdapter

@property (nonatomic) BOOL countFromOne;
@property (nonatomic) unsigned long long indexFactor;

- (void)setValue:(id)a0 atIndex:(unsigned long long)a1;
- (id)valueAtIndex:(unsigned long long)a0;
- (id)initWithCount:(unsigned long long)a0;
- (unsigned long long)count;

@end
