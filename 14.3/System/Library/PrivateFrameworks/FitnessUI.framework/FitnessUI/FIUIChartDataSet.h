@class NSArray;
@protocol FIUIChartDataSetDataSource;

@interface FIUIChartDataSet : NSObject {
    NSArray *_points;
    NSArray *_labels;
}

@property (weak, nonatomic) id<FIUIChartDataSetDataSource> dataSource;
@property (nonatomic) long long tag;

- (void)reloadData;
- (id)points;
- (id)minYValue;
- (void).cxx_destruct;
- (id)maxYValue;
- (id)description;
- (id)maxXValue;
- (id)minXValue;
- (id)labelsForSet;

@end
