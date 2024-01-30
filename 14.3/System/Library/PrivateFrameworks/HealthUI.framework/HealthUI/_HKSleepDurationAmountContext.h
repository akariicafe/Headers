@class NSString, HKDisplayType, HKDisplayTypeContextItem, HKInteractiveChartOverlayViewController;
@protocol _HKContextChangeDelegate;

@interface _HKSleepDurationAmountContext : NSObject <HKOverlayContext>

@property (retain, nonatomic) HKDisplayTypeContextItem *lastUpdatedItem;
@property (readonly, weak, nonatomic) id<_HKContextChangeDelegate> contextChangeDelegate;
@property (readonly, nonatomic) HKInteractiveChartOverlayViewController *overlayChartController;
@property (readonly, nonatomic) HKDisplayType *baseDisplayType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)contextItemForLastUpdate;
- (void)updateContextItemForDateInterval:(id)a0 timeScope:(long long)a1 completion:(id /* block */)a2;
- (id)sampleTypeForDateRangeUpdates;
- (id)overlayDisplayTypeForTimeScope:(long long)a0;
- (id)baseDisplayTypeForOverlay:(long long)a0;
- (BOOL)unselectedContextShouldUseContextBaseType;
- (id)initWithBaseDisplayType:(id)a0 overlayChartController:(id)a1 contextChangeDelegate:(id)a2;
- (id)_contextItemWithAmountString:(id)a0;
- (id)_daysWithSleepDataFromChartPoints:(id)a0;
- (id)_amountStringFromCounts:(id)a0;

@end
