@class NSArray, UICollectionView, NSString, WFActionDrawerCategoriesMetrics, WFActionDrawerCoordinator;

@interface WFActionDrawerCategoriesCollectionViewManager : NSObject <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, UICollectionViewDelegate>

@property (readonly, copy, nonatomic) NSArray *contentTypeCategories;
@property (readonly, weak, nonatomic) WFActionDrawerCoordinator *coordinator;
@property (readonly, nonatomic) UICollectionView *collectionView;
@property (readonly, nonatomic) WFActionDrawerCategoriesMetrics *metrics;
@property (nonatomic) BOOL shouldUseVerticalStacking;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (double)collectionView:(id)a0 layout:(id)a1 minimumInteritemSpacingForSectionAtIndex:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (void).cxx_destruct;
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (id)initWithCollectionView:(id)a0 coordinator:(id)a1 contentTypeCategories:(id)a2 metrics:(id)a3;
- (void)_configureCell:(id)a0 withContentTypeCategory:(id)a1;

@end
