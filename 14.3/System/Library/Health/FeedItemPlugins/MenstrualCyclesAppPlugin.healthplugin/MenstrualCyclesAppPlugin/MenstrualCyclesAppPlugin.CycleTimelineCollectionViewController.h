@class _TtC24MenstrualCyclesAppPlugin33CycleTimelineCollectionViewLayout;

@interface MenstrualCyclesAppPlugin.CycleTimelineCollectionViewController : UICollectionViewController {
    void /* unknown type, empty encoding */ state;
    void /* unknown type, empty encoding */ calendarCache;
    void /* unknown type, empty encoding */ cycleLoggingDataProvider;
    void /* unknown type, empty encoding */ supplementaryDisplayTypes;
    void /* unknown type, empty encoding */ scrollToZoomedItemCompletionHandlers;
    void /* unknown type, empty encoding */ today;
    void /* unknown type, empty encoding */ indexableDays;
    void /* unknown type, empty encoding */ needsScrollToCurrentDay;
}

@property (nonatomic, readonly) _TtC24MenstrualCyclesAppPlugin33CycleTimelineCollectionViewLayout *collectionViewLayout;

- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (void)viewDidLayoutSubviews;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)didMoveToParentViewController:(id)a0;
- (id)initWithCollectionViewLayout:(id)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)traitCollectionDidChange:(id)a0;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)viewDidLoad;
- (void)updateTodayDayIndex;

@end
