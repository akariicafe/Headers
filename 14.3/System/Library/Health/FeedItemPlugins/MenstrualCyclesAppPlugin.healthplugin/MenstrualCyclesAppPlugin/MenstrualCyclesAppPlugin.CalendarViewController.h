@class _TtC24MenstrualCyclesAppPlugin18CalendarViewLayout;

@interface MenstrualCyclesAppPlugin.CalendarViewController : UICollectionViewController <HKMCViewModelProviderObserver> {
    void /* unknown type, empty encoding */ state;
    void /* unknown type, empty encoding */ loggingMethod;
    void /* unknown type, empty encoding */ isYearOverlayVisible;
    void /* unknown type, empty encoding */ decelerationTargetContentOffset;
    void /* unknown type, empty encoding */ $__lazy_storage_$_yearOverlay;
    void /* unknown type, empty encoding */ collectionViewDataSource;
    void /* unknown type, empty encoding */ $__lazy_storage_$_addButton;
    void /* unknown type, empty encoding */ dateCache;
    void /* unknown type, empty encoding */ $__lazy_storage_$_viewModelProvider;
    void /* unknown type, empty encoding */ $__lazy_storage_$_dayFormatter;
    void /* unknown type, empty encoding */ $__lazy_storage_$_monthFormatter;
    void /* unknown type, empty encoding */ changeSet;
    void /* unknown type, empty encoding */ analysisProvider;
}

@property (nonatomic, readonly) _TtC24MenstrualCyclesAppPlugin18CalendarViewLayout *collectionViewLayout;
@property (nonatomic, readonly) unsigned long long supportedInterfaceOrientations;

- (void)significantTimeChangeDidOccur;
- (void)cancelAndDismiss;
- (void)viewModelProviderDidUpdate:(id)a0;
- (void)saveChangesAndDismiss;
- (id)calendarDataSource:(id)a0 cellForItemIn:(id)a1 date:(id)a2 dayComponent:(long long)a3 indexPath:(id)a4;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (BOOL)collectionView:(id)a0 shouldHighlightItemAtIndexPath:(id)a1;
- (BOOL)collectionView:(id)a0 shouldSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (BOOL)scrollViewShouldScrollToTop:(id)a0;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (void)viewDidLayoutSubviews;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithCollectionViewLayout:(id)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(struct CGPoint { double x0; double x1; } *)a2;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)traitCollectionDidChange:(id)a0;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)viewDidLoad;

@end
