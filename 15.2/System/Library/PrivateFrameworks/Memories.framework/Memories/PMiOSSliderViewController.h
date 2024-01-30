@class UICollectionViewFlowLayout, NSString;
@protocol PMSliderProviderProtocol;

@interface PMiOSSliderViewController : UICollectionViewController <UIPointerInteractionDelegate>

@property (readonly, nonatomic) UICollectionViewFlowLayout *flowLayout;
@property (nonatomic) long long selectedItem;
@property (nonatomic) BOOL needsMiddlePositionUpdate;
@property (nonatomic) BOOL ignoreScrolling;
@property (retain, nonatomic) id<PMSliderProviderProtocol> provider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfSectionsInCollectionView:(id)a0;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)willTransitionToTraitCollection:(id)a0 withTransitionCoordinator:(id)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)collectionView:(id)a0 didDeselectItemAtIndexPath:(id)a1;
- (double)collectionView:(id)a0 layout:(id)a1 minimumInteritemSpacingForSectionAtIndex:(long long)a2;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)viewDidLayoutSubviews;
- (struct CGPoint { double x0; double x1; })collectionView:(id)a0 targetContentOffsetForProposedContentOffset:(struct CGPoint { double x0; double x1; })a1;
- (void)viewWillLayoutSubviews;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (void)updateFonts;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (id)init;
- (id)pointerInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;
- (void)dealloc;
- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)invalidateSelectedItemPostion;
- (void)_setFontStyleForCell:(id)a0 highlighted:(BOOL)a1;
- (id)indexPathToMiddleItemInCollectionView:(id)a0;
- (struct CGPoint { double x0; double x1; })pointForMiddleOfItemInCollectionView:(id)a0 withOffset:(struct CGPoint { double x0; double x1; })a1;
- (void)performScrollTest:(id)a0 iterations:(int)a1 delta:(int)a2 length:(int)a3;

@end
