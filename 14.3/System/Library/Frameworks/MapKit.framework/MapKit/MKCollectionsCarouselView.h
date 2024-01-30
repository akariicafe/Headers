@class NSString, UICollectionView, UICollectionViewFlowLayout, MKPlaceCollectionsLogicController;
@protocol MKCollectionCarouselRoutingDelegate, MKCollectionsSizeProvider, UIScrollViewDelegate, MKCollectionCarouselAnalyticsDelegate;

@interface MKCollectionsCarouselView : UIView <UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, MKCollectionCarouselSizeProvider, MKCollectionCarouselUpdater> {
    struct { long long displayStyle; long long collectionsPerRow; } _collectionsConfiguration;
    BOOL _hasDisplayedCollections;
}

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UICollectionViewFlowLayout *flowLayout;
@property (retain, nonatomic) MKPlaceCollectionsLogicController *logicController;
@property (retain, nonatomic) id<MKCollectionsSizeProvider> sizeController;
@property (weak, nonatomic) id<MKCollectionCarouselRoutingDelegate> routingDelegate;
@property (weak, nonatomic) id<UIScrollViewDelegate> scrollViewDelegate;
@property (weak, nonatomic) id<MKCollectionCarouselAnalyticsDelegate> analyticsDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)horizontalLayoutHeight;
+ (double)verticalLayoutHeightWithNumberOfItems:(unsigned long long)a0 maxWidth:(double)a1 usingTraitEnvironment:(id)a2;

- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (double)collectionView:(id)a0 layout:(id)a1 minimumInteritemSpacingForSectionAtIndex:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void)fetchCollections;
- (void)configureCarouselMetadata:(long long)a0;
- (void)configureCarouselCollectionView;
- (void)refreshCollections;
- (void)displayCollections;
- (void)updateCollections:(id)a0;
- (void)displayCollectionsUsingBatchIds:(id)a0 usingGuideFetcher:(id)a1;
- (id)initCollectionsCarouselViewWithContext:(long long)a0 withPlaceCollections:(id)a1 usingSyncCoordinator:(id)a2 withRoutingDelegate:(id)a3 withScrollViewDelegate:(id)a4 withAnalyticsDelegate:(id)a5;
- (BOOL)isDisplayingCollections;
- (void)scrollViewWillBeginDragging:(id)a0;

@end
