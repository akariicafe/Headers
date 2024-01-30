@class HKActivitySummaryDataProvider, NSString, NSDate, NSAttributedString, NSDictionary, HKDisplayType, HKUnitPreferenceController, WDProfile, HKValueDataProvider, HKDisplayCategory;
@protocol WDDashboardCellPrimaryValueSourceDelegate, WDDashboardCellSecondaryValueSourceDelegate;

@interface WDDashboardChartItem : NSObject <HKValueDataProviderObserver, HKActivitySummaryDataProviderObserver, WDDashboardCellPrimaryValueSource, WDDashboardCellSecondaryValueSource, WDDashboardCellChartSource> {
    NSDictionary *_dataPoints;
    BOOL _isActive;
    HKUnitPreferenceController *_unitController;
    WDProfile *_profile;
    HKValueDataProvider *_currentValueDataProvider;
    HKValueDataProvider *_secondaryValueDataProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<WDDashboardCellPrimaryValueSourceDelegate> primaryValueSourceDelegate;
@property (readonly, nonatomic) HKDisplayType *displayType;
@property (readonly, nonatomic) HKDisplayCategory *displayCategory;
@property (readonly, nonatomic) NSString *primaryValueContextualText;
@property (readonly, nonatomic) NSDate *lastUpdated;
@property (weak, nonatomic) id<WDDashboardCellSecondaryValueSourceDelegate> secondaryValueSourceDelegate;
@property (readonly, nonatomic) NSAttributedString *secondaryValue;
@property (readonly, nonatomic) long long timeScope;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) HKActivitySummaryDataProvider *activitySummaryProvider;
@property (nonatomic) BOOL localeDidChange;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)dataProviderDidUpdateValues:(id)a0;
- (void)activitySummaryDataProviderDidUpdateActivitySummaries:(id)a0;
- (id)initWithDisplayType:(id)a0 useAlternateCurrentValue:(BOOL)a1 displayCategory:(id)a2 profile:(id)a3 healthStore:(id)a4;
- (id)mostRecentValueWithValueFont:(id)a0 unitFont:(id)a1;
- (BOOL)shouldHideAverageLineForTimeScope:(long long)a0;
- (BOOL)shouldHideMinMaxOnBackgroundForTimeScope:(long long)a0;
- (void)invalidateChart;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_chartInsetsForTimeScope:(long long)a0;

@end
