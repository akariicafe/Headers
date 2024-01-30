@class UIColor;

@interface MenstrualCyclesAppPlugin.SingleCycleView : UIView <UICollectionViewDelegate, HKMCViewModelProviderObserver> {
    void /* unknown type, empty encoding */ filter;
    void /* unknown type, empty encoding */ collectionView;
    void /* unknown type, empty encoding */ overlayGradient;
    void /* unknown type, empty encoding */ cycleDataSource;
}

@property (nonatomic, retain) UIColor *backgroundColor;

- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)traitCollectionDidChange:(id)a0;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (void)viewModelProviderDidUpdate:(id)a0;

@end
