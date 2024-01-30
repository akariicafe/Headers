@class NSDate, NSString, UITapGestureRecognizer, _UIContentUnavailableView, HKDisplayType, WDProfile, UIActivityIndicatorView, UIBarButtonItem;
@protocol WDDataListViewControllerDataProvider;

@interface WDDataListViewController : HKTableViewController <HKMonthViewControllerDelegate, WDUserActivityResponder> {
    WDProfile *_profile;
    UIBarButtonItem *_deleteAllButtonItem;
    UIActivityIndicatorView *_spinner;
    long long _cellStyle;
    _UIContentUnavailableView *_noContentView;
    UITapGestureRecognizer *_navigationBarTapGestureRecognizer;
    BOOL _showOriginalAppProvenance;
}

@property (retain, nonatomic) NSDate *scrollToDate;
@property (readonly, nonatomic) id<WDDataListViewControllerDataProvider> dataProvider;
@property (readonly, nonatomic) HKDisplayType *displayType;
@property (readonly, nonatomic) WDProfile *profile;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)viewWillLayoutSubviews;
- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (BOOL)tableView:(id)a0 canEditRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)setEditing:(BOOL)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (void)_localeDidChange:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void)viewDidAppear:(BOOL)a0;
- (id)_rightBarButtonItems;
- (void)dealloc;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)_handleReturnedImage:(id)a0 forSource:(id)a1 cell:(id)a2 tableView:(id)a3 fetchError:(id)a4;
- (void)applyChangeActivity:(id)a0;
- (id)applyTransitionActivity:(id)a0;
- (void)_updateNavigationTitle;
- (void)monthViewController:(id)a0 didSelectDate:(id)a1;
- (void)didTapBackButtonForMonthViewController:(id)a0;
- (id)initWithDisplayType:(id)a0 profile:(id)a1 dataProvider:(id)a2 usingInsetStyling:(BOOL)a3;
- (void)_reloadAllData;
- (void)_displayTypeStringsChanged:(id)a0;
- (void)_updateActivityForViewDidAppear;
- (void)_deleteAllButtonTapped:(id)a0;
- (void)_updateRightBarButtonItems;
- (BOOL)_dataProviderEnabled;
- (long long)_closestRowToDate:(id)a0;
- (void)_reloadAllDataScrolledToDate:(id)a0;
- (void)_tapGestureRecognizerAction:(id)a0;
- (void)_dataProviderDidUpdate;
- (BOOL)_shouldShowSpinnerRowInSection:(long long)a0;
- (BOOL)_hasSpinnerRowRowAtIndexPath:(id)a0;
- (id)_quantityCellForTableView:(id)a0 dataObjectSource:(id)a1;
- (id)_defaultCellForTableView:(id)a0 cellStyle:(long long)a1 indexPath:(id)a2 object:(id)a3;
- (id)_overridenDisplayImageForSource:(id)a0;
- (void)_handleReturnedImage:(id)a0 forSource:(id)a1 cell:(id)a2 fetchError:(id)a3;
- (void)_loadIconForSourceObject:(id)a0 onCell:(id)a1 ofTableView:(id)a2;
- (BOOL)isEditEnabled;
- (id)_sampleAtIndexPath:(id)a0;
- (void)_deleteWorkoutSamplesConfirmationPlural:(BOOL)a0 deleteBlock:(id /* block */)a1;
- (void)_deleteAssociatedSamplesConfirmationPlural:(BOOL)a0 deleteBlock:(id /* block */)a1;
- (void)resetDataAndScrollToDate:(id)a0;
- (void)_deleteAllWithOptions:(unsigned long long)a0;
- (id)_deleteAllDataAlertMessage;
- (id)_sampleTypesForDeleteAll;
- (void)_calendarDateSelectorButtonTapped:(id)a0;

@end
