@class NSLayoutConstraint, NSArray, NSString, MUPunchoutViewModel, UICollectionView, UICollectionViewDiffableDataSource, MUPlaceTilesViewConfiguration;
@protocol MUScrollAnalyticActionObserving, MUPlaceTilesViewDelegate;

@interface MUPlaceTilesView : UIView <UICollectionViewDelegateFlowLayout, UICollectionViewDelegate, MUCollectionViewDiffableDataSourceCellProviding> {
    UICollectionView *_contentCollectionView;
    UICollectionViewDiffableDataSource *_diffableDataSource;
    MUPlaceTilesViewConfiguration *_configuration;
    NSLayoutConstraint *_heightConstraint;
    struct CGPoint { double x; double y; } _beginAnalyticsScrollingPoint;
    struct CGSize { double width; double height; } _tileSize;
}

@property (retain, nonatomic) MUPunchoutViewModel *accessoryViewModel;
@property (retain, nonatomic) NSArray *viewModels;
@property (weak, nonatomic) id<MUScrollAnalyticActionObserving> analyticsDelegate;
@property (weak, nonatomic) id<MUPlaceTilesViewDelegate> delegate;
@property (readonly, nonatomic) NSArray *focusItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)accessoryView;
- (void)_updateContent;
- (void)_contentSizeDidChange;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1 itemIdentifier:(id)a2;
- (void)_setupStackView;
- (void)displayPlaceTiles;
- (id)imageViewForIndex:(unsigned long long)a0;
- (void)enumerateImageViewsWithBlock:(id /* block */)a0;
- (void)scrollToViewAtIndex:(unsigned long long)a0;
- (void)updateViewsWithAlpha:(double)a0;
- (void)_updateTileMetrics;
- (double)heightForTileSize:(struct CGSize { double x0; double x1; })a0;

@end
