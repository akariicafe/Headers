@class NSString, NSNumberFormatter, HKDisplayType, HKDisplayTypeContextItem, HKInteractiveChartOverlayViewController;
@protocol HKOverlaySleepRoomContextChangeDelegate;

@interface HKSleepStagePercentageContext : NSObject <HKOverlayContext>

@property (retain, nonatomic) HKDisplayTypeContextItem *lastUpdatedItem;
@property (readonly, weak, nonatomic) id<HKOverlaySleepRoomContextChangeDelegate> contextChangeDelegate;
@property (readonly, nonatomic) NSNumberFormatter *percentageFormatter;
@property (readonly, nonatomic) long long sleepStage;
@property (readonly, nonatomic) HKInteractiveChartOverlayViewController *overlayChartController;
@property (readonly, nonatomic) HKDisplayType *baseDisplayType;
@property (readonly, nonatomic) HKDisplayType *overlayDisplayType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)roundedSleepStageDurationPercentageFromDurations:(id)a0 withCategoryValue:(long long)a1;

- (void).cxx_destruct;
- (id)overlayDisplayTypeForTimeScope:(long long)a0;
- (id)baseDisplayTypeForOverlay:(long long)a0;
- (id)contextItemForLastUpdate;
- (void)overlayStateDidChange:(BOOL)a0 contextItem:(id)a1 chartController:(id)a2;
- (void)overlayStateWillChange:(BOOL)a0 contextItem:(id)a1 chartController:(id)a2;
- (id)sampleTypeForDateRangeUpdates;
- (BOOL)unselectedContextShouldUseContextBaseType;
- (void)updateContextItemForDateInterval:(id)a0 overlayController:(id)a1 timeScope:(long long)a2 completion:(id /* block */)a3;
- (double)_computePercentageValueFromChartPoints:(id)a0;
- (id)_contextItemWithPercentageString:(id)a0 timeScope:(long long)a1;
- (id)_percentageStringFromValue:(double)a0;
- (id)initWithSleepStage:(long long)a0 baseDisplayType:(id)a1 overlayDisplayType:(id)a2 overlayChartController:(id)a3 contextChangeDelegate:(id)a4;

@end
