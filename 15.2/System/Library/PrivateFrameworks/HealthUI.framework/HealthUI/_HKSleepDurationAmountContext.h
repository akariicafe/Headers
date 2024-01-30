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
- (id)sampleTypeForDateRangeUpdates;
- (id)overlayDisplayTypeForTimeScope:(long long)a0;
- (void)updateContextItemForDateInterval:(id)a0 overlayController:(id)a1 timeScope:(long long)a2 completion:(id /* block */)a3;
- (id)contextItemForLastUpdate;
- (id)baseDisplayTypeForOverlay:(long long)a0;
- (BOOL)unselectedContextShouldUseContextBaseType;
- (id)initWithBaseDisplayType:(id)a0 overlayChartController:(id)a1 contextChangeDelegate:(id)a2;
- (id)_contextItemWithAmountString:(id)a0;
- (id)_daysWithSleepDataFromChartPoints:(id)a0;
- (id)_amountStringFromCounts:(id)a0 timeScope:(long long)a1;

@end
