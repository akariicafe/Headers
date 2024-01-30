@class NSMutableArray, HKValueRange;

@interface _HKStaticDateGraphViewController : HKDateGraphViewController

@property (retain, nonatomic) NSMutableArray *allStackedSeries;
@property (readonly, nonatomic) HKValueRange *fixedRange;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)addStackedSeries:(id)a0;
- (void)graphView:(id)a0 didUpdateSeries:(id)a1 newDataArrived:(BOOL)a2 changeContext:(long long)a3;
- (id)graphView:(id)a0 graphSeriesForZoom:(long long)a1 stackOffset:(long long)a2;
- (id)initWithFixedRange:(id)a0 currentCalendar:(id)a1;
- (long long)stackCountForGraphView:(id)a0;

@end
