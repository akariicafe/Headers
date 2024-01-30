@class NSTimer, NSIndexPath;
@protocol PXPeopleDragAndDropCollectionViewDelegateLayout;

@interface PXPeopleDragAndDropCollectionViewLayout : UICollectionViewFlowLayout

@property (retain, nonatomic) NSTimer *dragPauseTimer;
@property (nonatomic) struct CGPoint { double x; double y; } lastDragPoint;
@property (nonatomic) struct CGPoint { double x; double y; } currentPosition;
@property (nonatomic) BOOL performActualRearrange;
@property (retain, nonatomic) NSIndexPath *dragIndexPathForMerge;
@property (retain, nonatomic) NSIndexPath *targetIndexPathForMerge;
@property (readonly, nonatomic) id<PXPeopleDragAndDropCollectionViewDelegateLayout> mergeDelegate;

- (id)layoutAttributesForInteractivelyMovingItemAtIndexPath:(id)a0 withTargetPosition:(struct CGPoint { double x0; double x1; })a1;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)finalLayoutAttributesForDisappearingSupplementaryElementOfKind:(id)a0 atIndexPath:(id)a1;
- (id)initialLayoutAttributesForAppearingSupplementaryElementOfKind:(id)a0 atIndexPath:(id)a1;
- (id)targetIndexPathForInteractivelyMovingItem:(id)a0 withPosition:(struct CGPoint { double x0; double x1; })a1;
- (void)_cancelDragPauseTimer;
- (void)_potentialMergeWithDragIndexPath:(id)a0 ontoIndexPath:(id)a1 withPosition:(struct CGPoint { double x0; double x1; })a2;
- (void)_updateDragPause;
- (BOOL)performMergeIfPossible;

@end
