@class NSArray, WDProfile;

@interface WDStackedSeriesExperiment : HKDateGraphViewController

@property (readonly, nonatomic) WDProfile *profile;
@property (retain, nonatomic) NSArray *series;

- (id)initWithProfile:(id)a0;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)graphView:(id)a0 graphSeriesForZoom:(long long)a1 stackOffset:(long long)a2;
- (id)seriesSelectionLineColorForGraphView:(id)a0;
- (long long)stackCountForGraphView:(id)a0;
- (void)_buildSeries;
- (id)testSeries:(long long)a0 color:(id)a1 hourOffset:(double)a2 yAxis:(id)a3 annotateLastValue:(BOOL)a4;

@end
