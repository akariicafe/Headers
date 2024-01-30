@class PUChangeDirectionValueFilter, NSString, PXVerticalSwipeGestureRecognizerHelper, UIPanGestureRecognizer, PUSwipedDownTileTracker;

@interface PUInteractiveSwipeDismissalController : PUInteractiveDismissalController <UIGestureRecognizerDelegate, PXVerticalSwipeGestureRecognizerHelperDelegate>

@property (retain, nonatomic, setter=_setPanGestureRecognizer:) UIPanGestureRecognizer *_panGestureRecognizer;
@property (readonly, nonatomic) PXVerticalSwipeGestureRecognizerHelper *verticalSwipeGestureRecognzierHelper;
@property (nonatomic, getter=_isHandlingPanGestureRecognizer, setter=_setHandlingPanGestureRecognizer:) BOOL handlingPanGestureRecognizer;
@property (retain, nonatomic, setter=_setDismissGestureDirectionValueFilter:) PUChangeDirectionValueFilter *_dismissGestureDirectionValueFilter;
@property (retain, nonatomic, setter=_setSwipedDownTileTracker:) PUSwipedDownTileTracker *_swipedDownTileTracker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (void)updateGestureRecognizersWithHostingView:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)_handlePanGestureRecognizer:(id)a0;
- (BOOL)verticalSwipeGestureRecognizerHelper:(id)a0 shouldRecognizeSwipeDownGestureRecognizer:(id)a1;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)dealloc;

@end
