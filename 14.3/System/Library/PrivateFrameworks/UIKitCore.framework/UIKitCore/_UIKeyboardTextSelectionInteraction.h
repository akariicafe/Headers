@class NSString, NSMapTable, NSTimer, _UIKeyboardTextSelectionGestureController, _UITouchesObservingGestureRecognizer, _UIPanOrFlickGestureRecognizer;

@interface _UIKeyboardTextSelectionInteraction : UITextInteraction <_UIPanOrFlickGestureRecognizerDelegate> {
    _UIKeyboardTextSelectionGestureController *_owner;
    NSMapTable *_weakMap;
    id _deallocToken;
    _UITouchesObservingGestureRecognizer *_addedTouchRecognizer;
    NSTimer *_touchPadTimer;
    id /* block */ _touchPadTimerCompletion;
    _UIPanOrFlickGestureRecognizer *_activePress;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)attachToExistingRecogniser:(id)a0 owner:(id)a1 forType:(long long)a2;

- (void)detach;
- (void)_gestureRecognizerFailed:(id)a0;
- (struct CGPoint { double x0; double x1; })acceleratedTranslation:(struct CGPoint { double x0; double x1; })a0 velocity:(struct CGPoint { double x0; double x1; })a1 isActive:(BOOL)a2;
- (long long)layoutDirectionFromFlickDirection:(unsigned long long)a0;
- (void)_prepareForGesture;
- (void)disableEnclosingScrollViewScrolling;
- (void)_configureTwoFingerPanGestureRecognizer:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (struct CGPoint { double x0; double x1; })boundedTranslation:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithView:(id)a0 owner:(id)a1 forTypes:(long long)a2;
- (void)beginCursorManipulationFromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)owner;
- (void)hideInsideRecogniser:(id)a0;
- (void)updateIndirectBlockPanWithTranslation:(struct CGPoint { double x0; double x1; })a0 executionContext:(id)a1;
- (void)panningGestureAddedTouch:(id)a0;
- (BOOL)forceTouchGestureRecognizerShouldBegin:(id)a0;
- (void)_logTapCounts:(id)a0;
- (void)dealloc;
- (void)_cancelTouchPadTimer;
- (void)longPressGestureWithState:(long long)a0 withTranslation:(struct CGPoint { double x0; double x1; })a1 touchCount:(unsigned long long)a2;
- (void)_beginLongForcePressTimerForGesture:(id)a0;
- (void)hideRecogniser:(id)a0 forKey:(id)a1;
- (void)_configureTwoFingerTapGestureRecognizer:(id)a0;
- (void)_startTouchPadTimerWithCompletion:(id /* block */)a0;
- (void)beginIndirectBlockPanWithTranslation:(struct CGPoint { double x0; double x1; })a0 executionContext:(id)a1;
- (void)cancelLongPressWithExecutionContext:(id)a0;
- (void)indirectBlockPanGestureWithState:(long long)a0 withTranslation:(struct CGPoint { double x0; double x1; })a1;
- (void)_granularityExpandingGestureWithTimeInterval:(double)a0 timeGranularity:(double)a1 isMidPan:(BOOL)a2;
- (void)beginLongPressWithTranslation:(struct CGPoint { double x0; double x1; })a0 touchCount:(unsigned long long)a1 executionContext:(id)a2;
- (id)gestures;
- (BOOL)isPlacedCarefully;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)_longForcePressDetected:(id)a0;
- (void)_willBeginIndirectSelectionGesture:(id)a0;
- (struct CGPoint { double x0; double x1; })cursorLocationForTranslation:(struct CGPoint { double x0; double x1; })a0;
- (void)beginTwoFingerPanWithTranslation:(struct CGPoint { double x0; double x1; })a0 executionContext:(id)a1;
- (void)twoFingerTap:(id)a0;
- (void)finishLongPressWithExecutionContext:(id)a0;
- (void)endLongPressWithExecutionContext:(id)a0;
- (void)indirectCursorPanGestureWithState:(long long)a0 withTranslation:(struct CGPoint { double x0; double x1; })a1 withFlickDirection:(unsigned long long)a2;
- (void)registerOwner:(id)a0;
- (void)oneFingerForcePan:(id)a0;
- (void)_configureLongPressRecognizer:(id)a0;
- (void)endIndirectBlockPanWithExecutionContext:(id)a0;
- (void)_configureOneFingerForcePressRecognizer:(id)a0;
- (void)beginTwoFingerCursorPanWithTranslation:(struct CGPoint { double x0; double x1; })a0 executionContext:(id)a1;
- (void)endTwoFingerPanWithExecutionContext:(id)a0;
- (void)cancelTwoFingerPanWithExecutionContext:(id)a0;
- (id)selectionController;
- (void)_cancelLongForcePressTimer;
- (void)updateLongPressWithTranslation:(struct CGPoint { double x0; double x1; })a0 executionContext:(id)a1;
- (double)additionalPressDurationForTypingCadence:(id)a0;
- (void)_clearTouchPadCallback;
- (void)clearKeyboardTouchesForGesture:(id)a0;
- (void)_didEndIndirectSelectionGesture:(id)a0;
- (void)oneFingerForcePress:(id)a0;
- (void)panningGesture:(id)a0;
- (void)removeTemporaryGesture;
- (void)_tidyUpGesture;
- (void)updateTwoFingerPanWithTranslation:(struct CGPoint { double x0; double x1; })a0 executionContext:(id)a1;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)gestureRecognizerShouldBeginResponse:(id)a0;
- (void)indirectPanGestureWithState:(long long)a0 withTranslation:(struct CGPoint { double x0; double x1; })a1 withFlickDirection:(unsigned long long)a2;
- (void)_configureLongPressAddedTouchRecognizer:(id)a0;
- (void)_clearHiding;
- (void)handleTwoFingerFlickInDirection:(long long)a0 executionContext:(id)a1;

@end
