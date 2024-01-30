@class UICollectionViewLayout, UIRefreshControl, SKUIIndexBarControl;

@interface SKUICollectionView : UICollectionView {
    BOOL _delegateWantsWillLayoutSubviews;
    BOOL _externalShowsHorizontalScrollIndicator;
    BOOL _externalShowsVerticalScrollIndicator;
    UICollectionViewLayout *_pendingCollectionViewLayout;
}

@property (retain, nonatomic) SKUIIndexBarControl *indexBarControl;
@property (retain, nonatomic) UIRefreshControl *refreshControl;
@property (nonatomic) double overrideBoundsWidth;

- (void)setContentOffset:(struct CGPoint { double x0; double x1; })a0 animated:(BOOL)a1;
- (void)layoutSubviews;
- (id)collectionViewLayout;
- (void)setShowsVerticalScrollIndicator:(BOOL)a0;
- (void)setDelegate:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (void)setShowsHorizontalScrollIndicator:(BOOL)a0;
- (void).cxx_destruct;
- (void)setContentInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)setCollectionViewLayout:(id)a0 animated:(BOOL)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 collectionViewLayout:(id)a1;
- (void)_updateIndexBarControlFrame;
- (void)_updateShowsScrollIndicators;

@end
