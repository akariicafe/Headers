@class UIStackView, GEOExploreGuides, UICollectionView, NSString, UICollectionViewFlowLayout, NSObject, MKPlaceCollectionsLogicController;
@protocol OS_dispatch_queue, MKCollectionCarouselRoutingDelegate, MKCollectionsSizeProvider, UIScrollViewDelegate, MKCollectionCarouselAnalyticsDelegate;

@interface MKCollectionsCarouselView : UIView <UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, MKCollectionCarouselSizeProvider, MKCollectionCarouselUpdater> {
    struct { long long displayStyle; long long collectionsPerRow; } _collectionsConfiguration;
    BOOL _hasDisplayedCollections;
    NSObject<OS_dispatch_queue> *_utilityQueue;
}

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UICollectionViewFlowLayout *flowLayout;
@property (retain, nonatomic) MKPlaceCollectionsLogicController *logicController;
@property (retain, nonatomic) id<MKCollectionsSizeProvider> sizeController;
@property (weak, nonatomic) id<MKCollectionCarouselRoutingDelegate> routingDelegate;
@property (weak, nonatomic) id<UIScrollViewDelegate> scrollViewDelegate;
@property (weak, nonatomic) id<MKCollectionCarouselAnalyticsDelegate> analyticsDelegate;
@property (retain, nonatomic) GEOExploreGuides *exploreGuides;
@property (nonatomic) long long carouselContext;
@property (retain, nonatomic) UIStackView *contentView;
@property (nonatomic) struct CGPoint { double x0; double x1; } contentOffset;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } contentSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)horizontalLayoutHeightInContext:(long long)a0 includeExploreGuidesHeight:(BOOL)a1 isSingleCollection:(BOOL)a2;
+ (double)verticalLayoutHeightWithNumberOfItems:(unsigned long long)a0 maxWidth:(double)a1 usingTraitEnvironment:(id)a2 inContext:(long long)a3;

- (void)scrollViewDidEndDecelerating:(id)a0;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (double)collectionView:(id)a0 layout:(id)a1 minimumInteritemSpacingForSectionAtIndex:(long long)a2;
- (void)scrollViewDidScroll:(id)a0;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void).cxx_destruct;
- (void)configureCarouselCollectionView;
- (void)configureCarouselMetadata:(long long)a0;
- (void)dismissedCollections;
- (void)displayCollections;
- (void)displayCollectionsUsingBatchIds:(id)a0 usingGuideFetcher:(id)a1;
- (void)fetchCollections;
- (id)initCollectionsCarouselViewWithContext:(long long)a0 withPlaceCollections:(id)a1 usingSyncCoordinator:(id)a2 withRoutingDelegate:(id)a3 withScrollViewDelegate:(id)a4 withAnalyticsDelegate:(id)a5 exploreGuides:(id)a6;
- (BOOL)isDisplayingCollections;
- (BOOL)isShowingExploreGuides;
- (void)refreshCollections;
- (void)resetCollectionsLayout;
- (void)resetScrollOffset;
- (void)updateCollections:(id)a0;
- (id)visibleFocusItems;

@end
