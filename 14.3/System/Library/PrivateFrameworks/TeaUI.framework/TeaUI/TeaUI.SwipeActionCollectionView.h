@class UIPanGestureRecognizer;

@interface TeaUI.SwipeActionCollectionView : UICollectionView <TSSwipeActionCoordinating> {
    void /* unknown type, empty encoding */ swipeActionManager;
    void /* unknown type, empty encoding */ dependencyCleanupBlocks;
    void /* unknown type, empty encoding */ coordinatingResetBlocks;
    void /* unknown type, empty encoding */ coordinatingCancelBlocks;
    void /* unknown type, empty encoding */ updateGroup;
    void /* unknown type, empty encoding */ isBottomRubberBanding;
}

@property (nonatomic, readonly) UIPanGestureRecognizer *coordinatingSwipeActionPanGestureRecognizer;
@property (nonatomic, readonly) BOOL coordinatingSwipeActionShouldCancel;
@property (nonatomic) BOOL allowsSelection;
@property (nonatomic) struct CGPoint { double x0; double x1; } contentOffset;

- (void)reloadData;
- (void)insertSections:(id)a0;
- (void)insertItemsAtIndexPaths:(id)a0;
- (void)reloadSections:(id)a0;
- (void)reloadItemsAtIndexPaths:(id)a0;
- (void)deleteSections:(id)a0;
- (void)deleteItemsAtIndexPaths:(id)a0;
- (void)moveSection:(long long)a0 toSection:(long long)a1;
- (void)moveItemAtIndexPath:(id)a0 toIndexPath:(id)a1;
- (void)coordinatingResetSwipeAction;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 collectionViewLayout:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)didMoveToWindow;
- (void)handlePanGestureWithGestureRecognizer:(id)a0;
- (void)handleFromCoordinatingGestureWithGestureRecognizer:(id)a0;

@end
