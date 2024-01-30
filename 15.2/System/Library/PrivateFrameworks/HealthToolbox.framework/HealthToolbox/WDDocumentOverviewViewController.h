@class WDProfile, UIFont, NSString, HKDisplayType, WDDocumentListDataProvider, NSMutableArray;

@interface WDDocumentOverviewViewController : HKTableViewController <WDUserActivityResponder>

@property (readonly, nonatomic) HKDisplayType *displayType;
@property (readonly, nonatomic) WDProfile *profile;
@property (readonly, nonatomic) WDDocumentListDataProvider *dataProvider;
@property (retain, nonatomic) NSMutableArray *sectionTypes;
@property (retain, nonatomic) NSMutableArray *reportRowTypes;
@property (nonatomic) long long totalReportCount;
@property (retain, nonatomic) UIFont *bodyFont;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)_contentSizeCategoryDidChange:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 estimatedHeightForRowAtIndexPath:(id)a1;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)applyChangeActivity:(id)a0;
- (id)applyTransitionActivity:(id)a0;
- (id)initWithDisplayTypes:(id)a0 profile:(id)a1 title:(id)a2 category:(id)a3;
- (void)_reloadAllData;
- (void)_pushShowAllViewController;
- (void)_updateActivityForViewDidAppear;
- (void)_installSections;
- (void)_recomputeTotalReportCount;
- (id)_reportItemCellForTableView:(id)a0 row:(long long)a1;
- (id)_reportShowAllCellForTableView:(id)a0 forIndexPath:(id)a1;
- (id)_reportAccessCellForTableView:(id)a0 forIndexPath:(id)a1;
- (void)_pushReportDetailViewControllerForIndexPath:(id)a0;
- (void)_pushAccessViewController;
- (id)_reportSectionCellForTableView:(id)a0 forIndexPath:(id)a1;
- (id)_descriptionSectionCellForTableView:(id)a0 row:(long long)a1;
- (void)_selectReportRowForIndexPath:(id)a0;
- (double)_reportSectionRowHeight:(long long)a0;
- (double)_reportSectionEstimatedRowHeight:(long long)a0;

@end
