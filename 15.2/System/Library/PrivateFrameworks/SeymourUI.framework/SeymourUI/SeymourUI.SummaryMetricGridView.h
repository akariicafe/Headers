@interface SeymourUI.SummaryMetricGridView : UIView <UICollectionViewDataSource> {
    void /* unknown type, empty encoding */ reuseIdentifier;
    void /* unknown type, empty encoding */ layout;
    void /* unknown type, empty encoding */ collectionView;
    void /* unknown type, empty encoding */ metrics;
    void /* unknown type, empty encoding */ metricViews;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithCoder:(id)a0;

@end
