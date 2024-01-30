@class _TtC24MenstrualCyclesAppPlugin18CalendarViewLayout;

@interface MenstrualCyclesAppPlugin.BaseCalendarViewController : UICollectionViewController {
    void /* unknown type, empty encoding */ collectionViewDataSource;
    void /* unknown type, empty encoding */ isYearOverlayVisible;
    void /* unknown type, empty encoding */ decelerationTargetContentOffset;
    void /* unknown type, empty encoding */ $__lazy_storage_$_yearOverlay;
}

@property (nonatomic, readonly) _TtC24MenstrualCyclesAppPlugin18CalendarViewLayout *collectionViewLayout;

- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(struct CGPoint { double x0; double x1; } *)a2;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (id)initWithCollectionViewLayout:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
