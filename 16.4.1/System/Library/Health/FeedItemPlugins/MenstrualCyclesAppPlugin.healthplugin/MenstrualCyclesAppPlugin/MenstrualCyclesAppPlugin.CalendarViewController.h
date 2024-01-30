@interface MenstrualCyclesAppPlugin.CalendarViewController : MenstrualCyclesAppPlugin.BaseCalendarViewController <HKMCViewModelProviderObserver> {
    void /* unknown type, empty encoding */ state;
    void /* unknown type, empty encoding */ loggingMethod;
    void /* unknown type, empty encoding */ $__lazy_storage_$_addButton;
    void /* unknown type, empty encoding */ calendarCache;
    void /* unknown type, empty encoding */ dateCache;
    void /* unknown type, empty encoding */ $__lazy_storage_$_viewModelProvider;
    void /* unknown type, empty encoding */ $__lazy_storage_$_dayFormatter;
    void /* unknown type, empty encoding */ $__lazy_storage_$_monthFormatter;
    void /* unknown type, empty encoding */ changeSet;
    void /* unknown type, empty encoding */ analysisProvider;
}

@property (nonatomic, readonly) unsigned long long supportedInterfaceOrientations;

- (void)significantTimeChangeDidOccur;
- (void)saveChangesAndDismiss;
- (void)viewModelProviderDidUpdate:(id)a0;
- (void)cancelAndDismiss;
- (id)calendarDataSource:(id)a0 cellForItemIn:(id)a1 date:(id)a2 dayComponent:(long long)a3 indexPath:(id)a4;
- (id)initWithCollectionViewLayout:(id)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (BOOL)scrollViewShouldScrollToTop:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)initWithCoder:(id)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (BOOL)collectionView:(id)a0 shouldHighlightItemAtIndexPath:(id)a1;
- (void)scrollViewDidScroll:(id)a0;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (BOOL)collectionView:(id)a0 shouldSelectItemAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;

@end
