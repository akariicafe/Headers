@class NSHashTable, NSString, PUBrowsingSession, UILongPressGestureRecognizer, PUDoubleTapZoomController, PUOneUpBarsController, PUTouchingGestureRecognizer, PULongPressDragController;
@protocol PUOneUpGestureRecognizerCoordinatorDelegate;

@interface PUOneUpGestureRecognizerCoordinator : NSObject <UIGestureRecognizerDelegate> {
    struct { BOOL respondsToViewHostingGestureRecognizers; BOOL respondsToShouldAllowIrisGestureRecognizer; } _delegateFlags;
    PUTouchingGestureRecognizer *_touchingGestureRecognizer;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
}

@property (retain, nonatomic, setter=_setIrisGestureRecognizers:) NSHashTable *_irisGestureRecognizers;
@property (nonatomic, setter=_setNeedsUpdateGestureRecognizers:) BOOL _needsUpdateGestureRecognizers;
@property (weak, nonatomic) id<PUOneUpGestureRecognizerCoordinatorDelegate> delegate;
@property (retain, nonatomic) PUBrowsingSession *browsingSession;
@property (retain, nonatomic) PUOneUpBarsController *oneUpBarsController;
@property (retain, nonatomic) PUDoubleTapZoomController *doubleTapZoomController;
@property (retain, nonatomic) PULongPressDragController *longPressDragController;
@property (readonly, nonatomic) PUTouchingGestureRecognizer *touchingGestureRecognizer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (void)invalidateViewHostingGestureRecognizers;
- (id)longPressGestureRecognizer;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;
- (void)_invalidateGestureRecognizers;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)_updateGestureRecognizersIfNeeded;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)addIrisGestureRecognizer:(id)a0;

@end
