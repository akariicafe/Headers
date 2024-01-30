@interface MenstrualCyclesAppPlugin.CycleChartsView : UIView <UIScrollViewDelegate> {
    void /* unknown type, empty encoding */ model;
    void /* unknown type, empty encoding */ headerView;
    void /* unknown type, empty encoding */ previousCycleButton;
    void /* unknown type, empty encoding */ nextCycleButton;
    void /* unknown type, empty encoding */ scrollView;
    void /* unknown type, empty encoding */ subscriptions;
}

- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(struct CGPoint { double x0; double x1; } *)a2;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)scrollViewDidScroll:(id)a0;
- (void)moveToPreviousCycle;
- (void)moveToNextCycle;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithCoder:(id)a0;

@end
