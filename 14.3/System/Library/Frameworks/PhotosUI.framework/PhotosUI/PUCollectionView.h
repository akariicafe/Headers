@class PXUIAutoScroller, NSString, _UIDragSnappingFeedbackGenerator, UIView, NSIndexPath, UILongPressGestureRecognizer;
@protocol PUCollectionViewReorderDelegate, PUCollectionViewSelectionDelegate;

@interface PUCollectionView : UICollectionView <UIGestureRecognizerDelegate> {
    UILongPressGestureRecognizer *_dragGestureRecognizer;
    NSIndexPath *_dragSourceIndexPath;
    NSIndexPath *_dragTargetIndexPath;
    UIView *_draggedView;
    struct CGPoint { double x; double y; } _draggedViewCenterOffset;
    PXUIAutoScroller *_autoScroller;
    BOOL _shouldWorkaround34630932;
}

@property (readonly, nonatomic) _UIDragSnappingFeedbackGenerator *_feedbackDragBehavior;
@property (weak, nonatomic) id<PUCollectionViewReorderDelegate> reorderDelegate;
@property (weak, nonatomic) id<PUCollectionViewSelectionDelegate> selectionDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_reuseKeyForSupplementaryViewOfKind:(id)a0 withReuseIdentifier:(id)a1;

- (void)reloadData;
- (void).cxx_destruct;
- (void)_applyAutomaticAdjustedContentOffset:(struct CGPoint { double x0; double x1; })a0;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 collectionViewLayout:(id)a1;
- (void)insertItemsAtIndexPaths:(id)a0;
- (void)deleteItemsAtIndexPaths:(id)a0;
- (void)moveItemAtIndexPath:(id)a0 toIndexPath:(id)a1;
- (void)adjustedContentInsetDidChange;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (id)indexPathsForSelectedItems;
- (void)didScrollToInitialPosition;
- (void)_handleDrag:(id)a0;
- (id)_reorderableLayout;
- (void)_updateDragUsingIndexPathUpdateBlock:(id /* block */)a0;
- (void)visiblyInsertItemAtIndexPath:(id)a0 modelUpdate:(id /* block */)a1 completionHandler:(id /* block */)a2;

@end
