@class NSString, NSMutableArray, HKInteractiveChartDataFormatter;

@interface _HKAudiogramAnnotationViewDataSource : NSObject <HKInteractiveChartAnnotationViewDataSource>

@property (readonly, nonatomic) HKInteractiveChartDataFormatter *formatter;
@property (retain, nonatomic) NSMutableArray *keyValuePairs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)showSeparators;
- (id)dateViewWithOrientation:(long long)a0;
- (id)leftMarginViewWithOrientation:(long long)a0;
- (long long)numberOfValuesForAnnotationView:(id)a0;
- (id)valueViewForColumnAtIndex:(long long)a0 orientation:(long long)a1;
- (id)initWithFormatter:(id)a0;
- (void)updateWithPointSelectionContexts:(id)a0;

@end
