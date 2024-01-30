@class UIGestureRecognizer, NSSet, NSString, UIScrollView, NSIndexPath, PXUIAutoScroller;
@protocol PXPeopleSwipeSelectionManagerDelegate;

@interface PXPeopleSwipeSelectionManager : NSObject <PXAutoScrollerDelegate> {
    struct { BOOL selectedIndexPaths; } _needsUpdateFlags;
    struct { BOOL respondsToItemIndexPathAtLocation; BOOL respondsToItemIndexPathClosestLeadingLocation; BOOL respondsToItemIndexPathClosestAboveLocation; } _delegateFlags;
}

@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) NSIndexPath *startingIndexPath;
@property (retain, nonatomic) NSIndexPath *currentIndexPath;
@property (copy, nonatomic) NSSet *selectedIndexPathsBeforeSwipe;
@property (retain, nonatomic) id pausingChangesToken;
@property (readonly, nonatomic) PXUIAutoScroller *autoScroller;
@property (readonly, nonatomic) BOOL isSelecting;
@property (weak, nonatomic) id<PXPeopleSwipeSelectionManagerDelegate> delegate;
@property (readonly, nonatomic) UIScrollView *scrollView;
@property (readonly, nonatomic) UIGestureRecognizer *swipeGestureRecognizer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_beginSelectionFromIndexPath:(id)a0;
- (id)_itemIndexPathClosestLeadingLocation:(struct CGPoint { double x0; double x1; })a0;
- (void)_updateSelectedIndexPaths;
- (void).cxx_destruct;
- (id)init;
- (id)initWithScrollView:(id)a0;
- (void)_updateSelectionWithHitIndexPath:(id)a0 leadingClosestIndexPath:(id)a1 aboveClosestIndexPath:(id)a2;
- (void)dealloc;
- (id)_itemIndexPathAtLocation:(struct CGPoint { double x0; double x1; })a0;
- (void)_invalidateSelectedIndexPaths;
- (void)autoScroller:(id)a0 didAutoscrollWithTimestamp:(double)a1;
- (void)_endSelection;
- (id)_itemIndexPathClosestAboveLocation:(struct CGPoint { double x0; double x1; })a0;
- (void)_handleSwipeSelectionGesture:(id)a0;

@end
