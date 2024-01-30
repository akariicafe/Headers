@class NSArray, HKSleepChartPointUserInfo, NSString;

@interface HKSleepAnnotationViewDataSource : NSObject <HKInteractiveChartAnnotationViewDataSource>

@property (retain, nonatomic) NSArray *titles;
@property (retain, nonatomic) NSArray *values;
@property (retain, nonatomic) HKSleepChartPointUserInfo *sleepChartPointUserInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)valueViewForColumnAtIndex:(long long)a0 orientation:(long long)a1;
- (long long)numberOfValuesForAnnotationView:(id)a0;
- (BOOL)showSeparators;
- (id)dateViewWithOrientation:(long long)a0;
- (id)leftMarginViewWithOrientation:(long long)a0;
- (id)_dateGroupWithDate:(id)a0 orientation:(long long)a1;
- (id)_dateRowWithDate:(id)a0;
- (id)_titleBodyGroupWithTitle:(id)a0 body:(id)a1 orientation:(long long)a2;

@end
