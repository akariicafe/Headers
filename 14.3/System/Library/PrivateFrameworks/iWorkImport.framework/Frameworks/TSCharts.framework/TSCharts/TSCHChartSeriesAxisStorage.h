@class TSCHChartGridAdapter, TSCHChartAxisID;

@interface TSCHChartSeriesAxisStorage : NSObject

@property (retain, nonatomic) TSCHChartGridAdapter *adapter;
@property (retain, nonatomic) TSCHChartAxisID *axisID;

- (void).cxx_destruct;
- (unsigned long long)numberOfValues;
- (id)valueAtIndex:(unsigned long long)a0 multiDataSetIndex:(unsigned long long)a1;
- (void)setValue:(id)a0 atIndex:(unsigned long long)a1 multiDataSetIndex:(unsigned long long)a2;

@end
