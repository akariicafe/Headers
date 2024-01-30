@protocol MiroCollectionViewDelegate;

@interface PMInteractiveCollectionView : UICollectionView

@property (readonly, nonatomic) BOOL supportsReordering;
@property (nonatomic) BOOL checkedSupportsReordering;
@property (weak, nonatomic) id<MiroCollectionViewDelegate> delegate;

- (BOOL)beginInteractiveMovementForItemAtIndexPath:(id)a0;
- (void)cancelInteractiveMovement;
- (void)endInteractiveMovement;

@end
