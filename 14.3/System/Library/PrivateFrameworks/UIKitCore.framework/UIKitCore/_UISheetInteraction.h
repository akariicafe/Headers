@class UIView, _UIHyperInteractor, _UIHyperAsymmetricExtender, NSArray, UIViewPropertyAnimator, NSString, _UIHyperrectangle, UIPanGestureRecognizer, _UIHyperregionUnion, NSMutableArray;
@protocol _UISheetInteractionDelegate, UITimingCurveProvider;

@interface _UISheetInteraction : NSObject <_UIScrollViewScrollableAncestor, UIPanGestureRecognizerDelegateInternal, UIInteraction>

@property (weak, nonatomic) UIView *view;
@property (readonly, nonatomic) NSMutableArray *registeredPanGestureRecognizers;
@property (readonly, nonatomic) UIPanGestureRecognizer *backgroundGestureRecognizer;
@property (readonly, nonatomic) _UIHyperInteractor *interactor;
@property (readonly, nonatomic) NSMutableArray *detentPoints;
@property (readonly, nonatomic) _UIHyperregionUnion *detentUnion;
@property (readonly, nonatomic) _UIHyperrectangle *detentContinuum;
@property (readonly, nonatomic) _UIHyperAsymmetricExtender *extender;
@property (retain, nonatomic) id dragSource;
@property (readonly, nonatomic, getter=isAnimating) BOOL animating;
@property (retain, nonatomic) id<UITimingCurveProvider> timingCurve;
@property (retain, nonatomic) UIViewPropertyAnimator *propertyAnimator;
@property (copy, nonatomic) NSArray *detents;
@property (nonatomic) long long indexOfCurrentDetent;
@property (nonatomic) BOOL scrollingExpandsToLargerDetentWhenScrolledToEdge;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly, nonatomic, getter=isDragging) BOOL dragging;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } currentOffset;
@property (nonatomic) double rubberBandExtentBeyondMinimumOffset;
@property (nonatomic) double rubberBandExtentBeyondMaximumOffset;
@property (readonly, nonatomic, getter=isUnconstrainedOffsetBeyondSideOrTopExtent) BOOL unconstrainedOffsetBeyondSideOrTopExtent;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } attachmentPoint;
@property (weak, nonatomic) id<_UISheetInteractionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)willMoveToView:(id)a0;
- (void)didMoveToView:(id)a0;
- (BOOL)_descendentScrollView:(id)a0 shouldPreserveStartOffset:(struct CGPoint { double x0; double x1; })a1;
- (id)init;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;
- (id)_currentDragPanGesture;
- (void)registerPanGestureRecognizer:(id)a0;
- (BOOL)_panGestureRecognizer:(id)a0 shouldTryToBeginHorizontallyWithEvent:(id)a1;
- (struct CGPoint { double x0; double x1; })_scrollView:(id)a0 adjustedUnconstrainedOffsetForUnconstrainedOffset:(struct CGPoint { double x0; double x1; })a1 startOffset:(struct CGPoint { double x0; double x1; })a2 horizontalVelocity:(inout double *)a3 verticalVelocity:(inout double *)a4 animator:(out id *)a5;
- (void)updateRegisteredPanGestureRecognizerEnabled:(id)a0;
- (BOOL)_descendentScrollViewShouldScrollHorizontally:(id)a0;
- (void)draggingEndedInSource:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1;
- (void)draggingBeganFromSource:(id)a0;
- (double)_currentRubberBandCoefficient;
- (BOOL)_panGestureRecognizer:(id)a0 shouldTryToBeginVerticallyWithEvent:(id)a1;
- (BOOL)_descendentScrollViewShouldScrollVertically:(id)a0;
- (void)sendCurrentOffsetDidChange;
- (void)handlePan:(id)a0;
- (BOOL)_shouldInteractWithDescendentScrollView:(id)a0 startOffset:(struct CGPoint { double x0; double x1; })a1 maxTopOffset:(double)a2;
- (void)_descendentScrollViewDidCancelDragging:(id)a0;
- (void)_descendentScrollViewDidEndDragging:(id)a0;
- (void)draggingChangedInSource:(id)a0 withTranslation:(struct CGPoint { double x0; double x1; })a1 animateChange:(BOOL)a2;
- (void)draggingCancelledInSource:(id)a0;
- (void)unregisterPanGestureRecognizer:(id)a0;
- (void)cancelDraggingIfNeeded;
- (void)updateCurrentOffsetToCurrentDetent;

@end
