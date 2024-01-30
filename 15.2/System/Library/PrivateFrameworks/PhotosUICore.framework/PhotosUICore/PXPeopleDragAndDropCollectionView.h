@class PXPeopleCollectionViewCell, UIVisualEffect, NSIndexPath;
@protocol PXPeopleDragAndDropCollectionViewDelegate;

@interface PXPeopleDragAndDropCollectionView : UICollectionView

@property (nonatomic) BOOL validDrop;
@property (retain, nonatomic) UIVisualEffect *blurEffect;
@property (weak, nonatomic) id<PXPeopleDragAndDropCollectionViewDelegate> dragDropDelegate;
@property (nonatomic) BOOL interactiveMode;
@property (retain, nonatomic) PXPeopleCollectionViewCell *dragSourceCell;
@property (retain, nonatomic) NSIndexPath *dragSourceIndexPath;

- (void)reloadData;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)cancelInteractiveMovement;
- (void)endInteractiveMovement;
- (void)resetTransformForSourceIndex:(id)a0;
- (id)sortedIndexPathsForSelectedItems;
- (BOOL)beginInteractiveMovementAtLocation:(struct CGPoint { double x0; double x1; })a0 forItemAtIndexPath:(id)a1;
- (double)_highestVisibleCellZOrder;
- (id)_footerAttributes;
- (long long)sectionAtPoint:(struct CGPoint { double x0; double x1; })a0;

@end
