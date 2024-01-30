@class WDProfile, NSArray, NSString, HKAudiogramChartViewController, HKDisplayType;

@interface WDAudiogramOverviewViewController : HKTableViewController <HKSwitchTableViewCellDelegate, WDUserActivityResponder>

@property (readonly, nonatomic) HKDisplayType *displayType;
@property (readonly, nonatomic) WDProfile *profile;
@property (readonly, nonatomic) HKAudiogramChartViewController *audiogramChartViewController;
@property (retain, nonatomic) NSArray *sectionToRows;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void).cxx_destruct;
- (void)applyChangeActivity:(id)a0;
- (id)applyTransitionActivity:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)switchCellValueChanged:(id)a0 value:(BOOL)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (void)viewDidAppear:(BOOL)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)viewDidLoad;
- (void)_updateAudiogramSamples:(id)a0 error:(id)a1;
- (id)_descriptionCell;
- (id)initWithDisplayType:(id)a0 profile:(id)a1;
- (void)_updateActivityForViewDidAppear;
- (BOOL)_isDisplayTypeFavorited;
- (void)_rebuildSections;
- (void)_queryForAudiogramChartSamples;
- (long long)_rowTypeForIndexPath:(id)a0;
- (id)_audiogramChartCell;
- (id)_addToFavoritesCell;
- (id)_showAllDataCell;
- (id)_sourcesAndAccessCell;
- (BOOL)_sectionNumber:(long long)a0 containsRowType:(long long)a1;
- (void)_pushShowAllDataViewController;
- (void)_pushSourcesAndAccessViewController;

@end
