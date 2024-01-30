@class HKInteractiveChartDisplayType, NSCalendar, NSString, HKDisplayType, HKOverlayRoomApplicationItems, HKDisplayTypeContextItem, HKSampleType;

@interface HKOverlayRoomStackedContext : NSObject <HKOverlayContext, HKOverlayStackedContext>

@property (retain, nonatomic) HKDisplayTypeContextItem *lastUpdatedItem;
@property (retain, nonatomic) HKDisplayType *templateDisplayType;
@property (retain, nonatomic) HKDisplayType *stackedTemplateDisplayType;
@property (retain, nonatomic) NSCalendar *currentCalendar;
@property (nonatomic) long long currentTimeScope;
@property (readonly, nonatomic) HKOverlayRoomApplicationItems *applicationItems;
@property (readonly, nonatomic) HKSampleType *sampleType;
@property (readonly, nonatomic) HKInteractiveChartDisplayType *displayType;
@property (readonly, nonatomic) HKDisplayType *overlayDisplayType;
@property (readonly, nonatomic) HKSampleType *stackedSampleType;
@property (readonly, nonatomic) HKInteractiveChartDisplayType *stackedBaseDisplayType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)generateCustomSeriesWithTemplateDisplayType:(id)a0 sampleType:(id)a1 applicationItems:(id)a2 currentTimeScope:(long long)a3;

- (void).cxx_destruct;
- (id)overlayDisplayTypeForTimeScope:(long long)a0;
- (id)baseDisplayTypeForOverlay:(long long)a0;
- (BOOL)canSelectOverlayContextItem:(id)a0 isDeselecting:(BOOL)a1 timeScope:(long long)a2 chartController:(id)a3;
- (id)contextItemForLastUpdate;
- (id)sampleTypeForDateRangeUpdates;
- (void)updateContextItemForDateInterval:(id)a0 overlayController:(id)a1 timeScope:(long long)a2 completion:(id /* block */)a3;
- (id)_generateDisplayTypeForTemplateDisplayType:(id)a0 sampleType:(id)a1 overlayChartController:(id)a2 applicationItems:(id)a3 currentTimeScope:(long long)a4 currentCalendar:(id)a5;
- (id)_canonicalUnitOverrideForDisplayType:(id)a0;
- (id)_contextItemTitleForDisplayType:(id)a0 timeScope:(long long)a1;
- (id)_generateNamedDataSourceForTemplateDisplayType:(id)a0 overlayChartController:(id)a1 applicationItems:(id)a2 currentTimeScope:(long long)a3 currentCalendar:(id)a4;
- (BOOL)_obsoleteDateRange:(id)a0 overlayController:(id)a1;
- (id)buildContextItemWithValue:(id)a0 unit:(id)a1 valueContext:(id)a2 forTimeScope:(long long)a3;
- (id)initWithDisplayType:(id)a0 overlayDisplayType:(id)a1 stackedDisplayType:(id)a2 overlayChartController:(id)a3 currentCalendarOverride:(id)a4 applicationItems:(id)a5;
- (id)initWithDisplayType:(id)a0 overlayDisplayType:(id)a1 stackedSampleType:(id)a2 overlayChartController:(id)a3 currentCalendarOverride:(id)a4 applicationItems:(id)a5;
- (id)initWithDisplayType:(id)a0 templateDisplayType:(id)a1 sampleType:(id)a2 overlayDisplayType:(id)a3 stackedDisplayType:(id)a4 stackedTemplateDisplayType:(id)a5 stackedSampleType:(id)a6 overlayChartController:(id)a7 currentTimeScope:(long long)a8 currentCalendar:(id)a9 applicationItems:(id)a10;
- (id)initWithSampleType:(id)a0 overlayDisplayType:(id)a1 stackedSampleType:(id)a2 overlayChartController:(id)a3 currentCalendarOverride:(id)a4 applicationItems:(id)a5;
- (id)stackedBaseDisplayTypeForOverlay:(long long)a0;
- (id)stackedOverlayDisplayTypeForTimeScope:(long long)a0;
- (id)stackedSampleTypeForDateRangeUpdates;

@end
