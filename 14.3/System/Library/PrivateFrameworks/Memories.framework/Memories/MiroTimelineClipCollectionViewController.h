@class NSString, NSIndexPath;
@protocol MiroEditorClipCollectionDataSource, MiroEditorClipCollectionDelegate;

@interface MiroTimelineClipCollectionViewController : UICollectionViewController <MiroEditorFlowLayoutDelegate, MiroCollectionViewDelegate, MiroEditorClipCollection>

@property (retain, nonatomic) NSIndexPath *collectionViewDraggingIndexPath;
@property (nonatomic) BOOL highlightCenterThumbnail;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } collectionViewContentInsets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<MiroEditorClipCollectionDataSource> dataSource;
@property (weak, nonatomic) id<MiroEditorClipCollectionDelegate> delegate;
@property (retain, nonatomic) NSIndexPath *initialIndexPath;

- (BOOL)collectionView:(id)a0 canMoveItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (BOOL)collectionView:(id)a0 shouldSelectItemAtIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 moveItemAtIndexPath:(id)a1 toIndexPath:(id)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (void)viewDidLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewDidLoad;
- (void)collectionView:(id)a0 layout:(id)a1 didSnapToItemAtIndexPath:(id)a2;
- (void)miroCollectionView:(id)a0 willBeginInteractiveMovementForItemAtIndexPath:(id)a1;
- (void)miroCollectionViewDidEndInteractiveMovement:(id)a0;
- (void)miroCollectionViewDidCancelInteractiveMovement:(id)a0;
- (void)snapToIndexPath:(id)a0 animated:(BOOL)a1;
- (id)cellForClipProvider:(id)a0;
- (void)_snapToIndexPath:(id)a0 animated:(BOOL)a1;
- (void)_updateHighlightForVisibleCellsAnimated:(BOOL)a0;
- (struct CGSize { double x0; double x1; })_cellSizeForClipAtIndex:(long long)a0;
- (void)_updateHighlightForCell:(id)a0 atIndexPath:(id)a1;
- (double)_proximityToCenterForCellAtIndexPath:(id)a0;

@end
