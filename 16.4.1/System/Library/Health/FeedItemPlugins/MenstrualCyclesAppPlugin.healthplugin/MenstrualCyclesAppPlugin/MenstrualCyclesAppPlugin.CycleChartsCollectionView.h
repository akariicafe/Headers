@interface MenstrualCyclesAppPlugin.CycleChartsCollectionView : UICollectionView {
    void /* unknown type, empty encoding */ modelProvider;
    void /* unknown type, empty encoding */ subscriptions;
}

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 collectionViewLayout:(id)a1;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)ax_cycleChartDayForIndexPath:(id)a0;
- (id)ax_cycles;
- (id)ax_predominantCycle;

@end
