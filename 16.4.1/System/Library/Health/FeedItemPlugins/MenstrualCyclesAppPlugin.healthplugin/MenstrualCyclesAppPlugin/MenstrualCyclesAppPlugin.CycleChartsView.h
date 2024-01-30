@interface MenstrualCyclesAppPlugin.CycleChartsView : UIView <UICollectionViewDelegate> {
    void /* unknown type, empty encoding */ model;
    void /* unknown type, empty encoding */ headerView;
    void /* unknown type, empty encoding */ collectionView;
    void /* unknown type, empty encoding */ impactFeedbackGenerator;
    void /* unknown type, empty encoding */ lastCollectionViewBordersFrame;
    void /* unknown type, empty encoding */ lastFooterBordersHeight;
    void /* unknown type, empty encoding */ subscriptions;
}

- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;

@end
