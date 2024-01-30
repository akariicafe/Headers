@class NSMutableArray, HKValueRange;

@interface _HKStaticDateGraphViewController : HKDateGraphViewController

@property (retain, nonatomic) NSMutableArray *allStackedSeries;
@property (readonly, nonatomic) HKValueRange *fixedRange;

- (void).cxx_destruct;
- (void)viewDidLoad;
- (id)initWithFixedRange:(id)a0;
- (void)addStackedSeries:(id)a0;
- (long long)stackCountForGraphView:(id)a0;
- (void)graphView:(id)a0 didUpdateSeries:(id)a1 newDataArrived:(BOOL)a2;
- (id)graphView:(id)a0 graphSeriesForZoom:(long long)a1 stackOffset:(long long)a2;

@end
