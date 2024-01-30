@class NSIndexPath, UISwipeActionsConfiguration, UIView, NSString, NSSet, UISwipeOccurrence, _UISwipeHandler, NSMutableSet, UIScrollView;
@protocol UISwipeActionHost_Internal, UISwipeActionHost;

@interface UISwipeActionController : NSObject <_UIScrollViewScrollObserver> {
    UISwipeOccurrence *_preparingSwipeOccurrence;
    struct { unsigned char didResetWhilePreparingSwipeOccurrence : 1; } _flags;
}

@property (retain, nonatomic) UISwipeActionsConfiguration *incomingSwipeActionsConfiguration;
@property (weak, nonatomic) id<UISwipeActionHost> swipeActionHost;
@property (weak, nonatomic) UIScrollView *containerView;
@property (retain, nonatomic) _UISwipeHandler *swipeHandler;
@property (readonly, nonatomic, getter=_internalSwipeActionHost) id<UISwipeActionHost_Internal> internalSwipeActionHost;
@property (readonly, nonatomic, getter=_prefersRTL) BOOL prefersRTL;
@property (retain, nonatomic) NSMutableSet *swipeOccurrences;
@property (weak, nonatomic) UISwipeOccurrence *currentSwipeOccurrence;
@property (readonly, nonatomic) NSSet *swipedIndexPaths;
@property (readonly, nonatomic) NSIndexPath *swipedIndexPath;
@property (readonly, nonatomic) UIView *swipedItemView;
@property (nonatomic) unsigned long long style;
@property (nonatomic) BOOL swipeEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateLayout;
- (BOOL)swipeHandler:(id)a0 mayBeginSwipeAtLocation:(struct CGPoint { double x0; double x1; })a1 withProposedDirection:(unsigned long long)a2;
- (struct { unsigned long long x0; BOOL x1; BOOL x2; double x3; double x4; })configureForSwipeDirection:(unsigned long long)a0 configuration:(id)a1 startingAtTouchLocation:(struct CGPoint { double x0; double x1; })a2;
- (void)resetSwipedItemAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)swipeOccurrenceDidFinish:(id)a0;
- (void)moveSectionAtIndex:(unsigned long long)a0 toIndex:(unsigned long long)a1;
- (void)swipeOccurrence:(id)a0 willFinishWithDeletion:(BOOL)a1;
- (BOOL)touchAtLocationShouldDismissSwipedItem:(struct CGPoint { double x0; double x1; })a0 isTouchUp:(BOOL)a1;
- (void)insertSectionAtIndex:(unsigned long long)a0;
- (void)reloadData;
- (void)reconfigureActiveSwipeOccurrences;
- (void)prepareForSwipeDirection:(unsigned long long)a0 startingAtTouchLocation:(struct CGPoint { double x0; double x1; })a1;
- (void)insertRowAtIndexPath:(id)a0;
- (void)moveRowAtIndexPath:(id)a0 toIndexPath:(id)a1;
- (id)_swipeActionsConfigurationForSwipeDirection:(unsigned long long)a0 indexPath:(id)a1;
- (void)swipeItemAtIndexPath:(id)a0 configuration:(id)a1 direction:(unsigned long long)a2 animated:(BOOL)a3 completion:(id /* block */)a4;
- (void)swipeHandler:(id)a0 didGenerateSwipeWithInfo:(struct { unsigned long long x0; unsigned long long x1; BOOL x2; double x3; double x4; double x5; })a1 isTracking:(BOOL)a2;
- (void)swipeHandler:(id)a0 didConfirmSwipeWithInfo:(struct { unsigned long long x0; unsigned long long x1; BOOL x2; double x3; double x4; double x5; })a1;
- (void)dealloc;
- (id)initWithSwipeActionHost:(id)a0 style:(unsigned long long)a1;
- (void)swipeOccurrence:(id)a0 didChangeStateFrom:(long long)a1;
- (id)_swipedViewForItemAtIndexPath:(id)a0;
- (unsigned long long)_swipeDirectionForLeadingEdge:(BOOL)a0;
- (void)deleteSectionAtIndex:(unsigned long long)a0;
- (void)swipeHandlerDidBeginSwipe:(id)a0;
- (void)deleteRowAtIndexPath:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })swipeHandlerRestingFrame:(id)a0;
- (id)_existingSwipeOccurrenceForIndexPath:(id)a0;
- (BOOL)_isSwipeForIndexPathFirstOccurrenceBeginningOrLastOccurrenceEnding:(id)a0;
- (void).cxx_destruct;
- (void)_observeScrollViewDidScroll:(id)a0;

@end
