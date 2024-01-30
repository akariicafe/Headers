@class TSCHChartGrid;

@interface TSCHDeprecatedChartGridForUpgrade : TSPObject

@property (readonly, retain, nonatomic) TSCHChartGrid *grid;

- (void).cxx_destruct;
- (void)loadFromUnarchiver:(id)a0;

@end
