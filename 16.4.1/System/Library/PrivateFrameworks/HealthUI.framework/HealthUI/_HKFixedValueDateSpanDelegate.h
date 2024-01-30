@class HKFixedValueDateSpanDataSource;
@protocol HKDateRangeDataUpdateDelegate;

@interface _HKFixedValueDateSpanDelegate : NSObject <HKDateRangeDataSourceDelegate>

@property (weak, nonatomic) HKFixedValueDateSpanDataSource *fixedValueDateSpanDataSource;
@property (weak, nonatomic) id<HKDateRangeDataUpdateDelegate> updateCallbackDelegate;

- (void).cxx_destruct;
- (void)setUpdateDelegate:(id)a0;
- (id)dataForDateRange:(id)a0 timeScope:(long long)a1;

@end
