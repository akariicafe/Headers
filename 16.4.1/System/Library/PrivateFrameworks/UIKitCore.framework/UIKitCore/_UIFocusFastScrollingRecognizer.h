@class UIScrollView, NSString, NSMapTable, _UIRotaryGestureRecognizer, _UIFocusEnginePanGestureRecognizer, _UIFocusFastScrollingTouchSequence, NSTimer;
@protocol _UIFocusFastScrollingRecognizerDelegate;

@interface _UIFocusFastScrollingRecognizer : NSObject <_UIFocusEnginePanGestureTouchObserver> {
    _UIFocusEnginePanGestureRecognizer *_panGesture;
    _UIRotaryGestureRecognizer *_rotaryGesture;
    _UIFocusFastScrollingTouchSequence *_currentTouch;
    NSMapTable *_swipeSequences;
    NSTimer *_swipeIntervalTimer;
    UIScrollView *_previewingScrollView;
    NSTimer *_previewingTouchTimer;
    unsigned long long _spatialFocusUpdateCount;
    BOOL _persistFastScrollingPreviewThroughReset;
}

@property (weak, nonatomic) id<_UIFocusFastScrollingRecognizerDelegate> delegate;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_handlePanGesture:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (void)reset;
- (void)activateRotaryGesturePreviewingScrollViewWithEmphasisAnimation:(BOOL)a0;
- (void)_focusDidUpate:(id)a0;
- (void)_activatePreviewingScrollViewForEdgeGesture;
- (void)_activatePreviewingScrollViewForEdgeGestureAfterDelay;
- (void)_activatePreviewingScrollViewForScrollingStyle:(long long)a0 emphasisAnimation:(BOOL)a1 overrideIndexDisplayMode:(BOOL)a2;
- (BOOL)_attemptToImmediatelyRecognizeEdgeGesture;
- (unsigned long long)_bestHeadingForAccumulator:(struct CGVector { double x0; double x1; })a0;
- (BOOL)_canFastScrollWithEdgeSwipe;
- (void)_deactivatePreviewingScrollViewIfNecessary;
- (id)_deepestEligibleScrollViewContainingFocusedItem:(unsigned long long)a0 withScrollingStyle:(long long)a1;
- (void)_notifyDelegateWithScrollView:(id)a0 scrollingStyle:(long long)a1 heading:(unsigned long long)a2;
- (BOOL)_scrollViewIsEligibleForFastScrolling:(id)a0 alongHeading:(unsigned long long)a1 withScrollingStyle:(long long)a2;
- (id)_scrollViewsContainingCurrentlyFocusedItem;
- (void)_startSwipeIntervalTimer;
- (void)_stopSwipeIntervalTimer;
- (void)_swipeIntervalElapsed:(id)a0;
- (void)_swipeOccuredAlongHeading:(unsigned long long)a0;
- (BOOL)_swipeSequenceCanBeginFastScrolling:(id)a0;
- (void)_touchSequenceDidEnd:(id)a0;
- (void)_updateActiveSwipeSequencesForScrollViews:(id)a0;
- (BOOL)attemptToImmediatelyRecognizeRotaryGesture;
- (BOOL)canImmediatelyRecognizeRotaryGesture;
- (void)deactivateRotaryGesturePreviewingScrollViewIfNecessary;
- (void)directionalPressWithHeading:(unsigned long long)a0 didRepeat:(unsigned long long)a1;
- (void)focusEnginePanGesture:(id)a0 touchBeganAtDigitizerLocation:(struct CGPoint { double x0; double x1; })a1;
- (void)focusEnginePanGesture:(id)a0 touchCancelledAtDigitizerLocation:(struct CGPoint { double x0; double x1; })a1;
- (void)focusEnginePanGesture:(id)a0 touchEndedAtDigitizerLocation:(struct CGPoint { double x0; double x1; })a1;
- (void)focusEnginePanGesture:(id)a0 touchMovedToDigitizerLocation:(struct CGPoint { double x0; double x1; })a1;
- (id)initWithPanGesture:(id)a0;
- (id)initWithPanGesture:(id)a0 rotaryGesture:(id)a1;
- (void)joystickMovementWithHeading:(unsigned long long)a0 didRepeat:(unsigned long long)a1;
- (void)pageButtonPressWithHeading:(unsigned long long)a0 didRepeat:(unsigned long long)a1;

@end
