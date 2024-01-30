@class TSCHChartGridAdapter, TSCHChartAxisID;

@interface TSCHChartSeriesAxisStorage : NSObject

@property (retain, nonatomic) TSCHChartGridAdapter *adapter;
@property (retain, nonatomic) TSCHChartAxisID *axisID;
@property (readonly, nonatomic) unsigned long long numberOfValues;

- (void).cxx_destruct;
- (id)valueAtIndex:(unsigned long long)a0 multiDataSetIndex:(unsigned long long)a1;
- (void)setValue:(id)a0 atIndex:(unsigned long long)a1 multiDataSetIndex:(unsigned long long)a2;

@end
