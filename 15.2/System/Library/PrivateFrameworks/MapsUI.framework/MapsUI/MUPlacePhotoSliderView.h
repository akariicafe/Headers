@class NSArray, NSString, UICollectionView, MUPagingScrollContainerView, UICollectionViewDiffableDataSource, UIView;
@protocol MUScrollAnalyticActionObserving, MUPlacePhotoSliderDelegate, MUPlacePhotoSliderDataSource;

@interface MUPlacePhotoSliderView : UIView <UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, MUCollectionViewDiffableDataSourceCellProviding> {
    UICollectionView *_contentCollectionView;
    MUPagingScrollContainerView *_pagingScrollView;
    id<MUPlacePhotoSliderDataSource> _dataSource;
    UICollectionViewDiffableDataSource *_diffableDataSource;
    UIView *_floatingView;
    struct CGSize { double width; double height; } _photoTileSize;
    struct CGPoint { double x; double y; } _beginAnalyticsScrollingPoint;
    BOOL _hasHeaderView;
}

@property (readonly, nonatomic) NSArray *focusItems;
@property (weak, nonatomic) id<MUScrollAnalyticActionObserving> analyticsDelegate;
@property (weak, nonatomic) id<MUPlacePhotoSliderDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)layoutSubviews;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void)_setupConstraints;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (void)_setupSubviews;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1 itemIdentifier:(id)a2;
- (id)initWithDataSource:(id)a0 photoTileSize:(struct CGSize { double x0; double x1; })a1;
- (id)imageViewForIndex:(unsigned long long)a0;
- (void)displayPhotos;
- (id)attributionViewForAttribution:(id)a0;
- (void)enumerateImageViewsWithBlock:(id /* block */)a0;
- (void)scrollToViewAtIndex:(unsigned long long)a0;
- (void)updateViewsWithAlpha:(double)a0;
- (void)_attachFloatingView;
- (struct CGSize { double x0; double x1; })_sizeForAttribution;

@end
