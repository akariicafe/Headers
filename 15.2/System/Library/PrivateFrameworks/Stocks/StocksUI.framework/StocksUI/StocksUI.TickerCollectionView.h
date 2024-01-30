@interface StocksUI.TickerCollectionView : UICollectionView {
    void /* unknown type, empty encoding */ autoScrolling;
    void /* unknown type, empty encoding */ $__lazy_storage_$_delta;
    void /* unknown type, empty encoding */ minimumScrollDelta;
    void /* unknown type, empty encoding */ displayLink;
    void /* unknown type, empty encoding */ preferredFrameRate;
    void /* unknown type, empty encoding */ tickerCollectionModel;
}

- (void)layoutSubviews;
- (void)handleAccessibilitySettingsChangedWithNotification:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 collectionViewLayout:(id)a1;
- (void)autoScrollWithDisplayWithDisplayLink:(id)a0;

@end
