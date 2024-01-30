@class NSString, HKInteractiveChartViewController, HKDataMetadataDetailSection, HKValueRange;

@interface WDFixedChartViewController : HKTableViewController <WDUserActivityResponder>

@property (readonly, nonatomic) HKValueRange *fixedRange;
@property (readonly, nonatomic) HKInteractiveChartViewController *chartController;
@property (readonly, nonatomic) HKDataMetadataDetailSection *metadataSection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 willSelectRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)viewDidLoad;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)applyChangeActivity:(id)a0;
- (id)applyTransitionActivity:(id)a0;
- (id)cellForChart;
- (id)initWithInteractiveChartViewController:(id)a0 sessionSample:(id)a1 profile:(id)a2 title:(id)a3;

@end
