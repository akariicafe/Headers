@class HKSelectedRangeFormatter, NSString, UIFont, UILabel, HKHealthStore, HKDisplayCategoryController, HKDisplayType, NSArray, HKDateCache, UIColor;
@protocol HKCurrentValueViewDataSourceDelegate;

@interface HKCurrentValueViewDataSource : NSObject <HKInteractiveChartAnnotationViewDataSource>

@property (retain, nonatomic) HKSelectedRangeFormatter *selectedRangeFormatter;
@property (retain, nonatomic) HKDateCache *dateCache;
@property (retain, nonatomic) HKHealthStore *healthStore;
@property (retain, nonatomic) HKDisplayCategoryController *displayCategoryController;
@property (retain, nonatomic) HKDisplayType *displayType;
@property (retain, nonatomic) NSString *dateIntervalString;
@property (retain, nonatomic) UIColor *titleColor;
@property (retain, nonatomic) UIColor *valueColor;
@property (retain, nonatomic) UIFont *majorFont;
@property (retain, nonatomic) UIFont *minorFont;
@property (retain, nonatomic) UILabel *dateLabelView;
@property (retain, nonatomic) NSArray *annotationLabels;
@property (retain, nonatomic) NSArray *selectedRangeData;
@property (weak, nonatomic) id<HKCurrentValueViewDataSourceDelegate> delegate;
@property (nonatomic) BOOL pendingData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultStringForValueRange:(id)a0 timeScope:(long long)a1;

- (void).cxx_destruct;
- (id)initWithDateCache:(id)a0 displayCategoryController:(id)a1 healthStore:(id)a2 selectedRangeFormatter:(id)a3;
- (id)valueViewForColumnAtIndex:(long long)a0 orientation:(long long)a1;
- (long long)numberOfValuesForAnnotationView:(id)a0;
- (BOOL)showSeparators;
- (id)dateViewWithOrientation:(long long)a0;
- (id)leftMarginViewWithOrientation:(long long)a0;
- (void)updateDataSourceWithGraphView:(id)a0 displayType:(id)a1 timeScope:(long long)a2;
- (id)_dateIntervalStringForGraphView:(id)a0 timeScope:(long long)a1;
- (BOOL)_pendingDataForGraphView:(id)a0;
- (id)_annotationLabelsFromRangeData:(id)a0 displayType:(id)a1;
- (id)_delegateValueStringForGraphView:(id)a0 timeScope:(long long)a1;
- (id)_delegateTitleForSelectedRangeData:(id)a0 displayType:(id)a1;
- (id)_delegateValueForSelectedRangeData:(id)a0;

@end
