@class NSString, NSMapTable, NSTimer, _UIFocusEnginePanGestureRecognizer, _UIFocusFastScrollingTouchSequence, UIScrollView;
@protocol _UIFocusFastScrollingRecognizerDelegate;

@interface _UIFocusFastScrollingRecognizer : NSObject <_UIFocusEnginePanGestureTouchObserver> {
    _UIFocusEnginePanGestureRecognizer *_panGesture;
    _UIFocusFastScrollingTouchSequence *_currentTouch;
    NSMapTable *_swipeSequences;
    NSTimer *_swipeIntervalTimer;
    UIScrollView *_previewingScrollView;
    NSTimer *_previewingTouchTimer;
    unsigned long long _spatialFocusUpdateCount;
}

@property (weak, nonatomic) id<_UIFocusFastScrollingRecognizerDelegate> delegate;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)recognizerWithPanGesture:(id)a0;

- (void).cxx_destruct;
- (void)reset;
- (void)dealloc;
- (void)directionalPressWithHeading:(unsigned long long)a0 didRepeat:(unsigned long long)a1;
- (void)joystickMovementWithHeading:(unsigned long long)a0 didRepeat:(unsigned long long)a1;
- (id)initWithPanGesture:(id)a0;
- (void)_focusDidUpate:(id)a0;
- (void)_stopSwipeIntervalTimer;
- (void)_updateActiveSwipeSequencesForScrollViews:(id)a0;
- (id)_deepestEligibleScrollViewContainingFocusedItem:(unsigned long long)a0;
- (void)_notifyDelegateWithScrollView:(id)a0 scrollingStyle:(long long)a1 heading:(unsigned long long)a2;
- (BOOL)_attemptToImmediatelyRecognizeEdgeGesture;
- (void)_touchSequenceDidEnd:(id)a0;
- (unsigned long long)_bestHeadingForAccumulator:(struct CGVector { double x0; double x1; })a0;
- (void)_deactivatePreviewingScrollViewIfNecessary;
- (void)_swipeOccuredAlongHeading:(unsigned long long)a0;
- (void)_startSwipeIntervalTimer;
- (BOOL)_swipeSequenceCanBeginFastScrolling:(id)a0;
- (BOOL)_scrollViewIsEligibleForFastScrolling:(id)a0 alongHeading:(unsigned long long)a1;
- (void)_swipeIntervalElapsed:(id)a0;
- (id)_scrollViewsContainingCurrentlyFocusedItem;
- (void)_activatePreviewingScrollView;
- (void)_activatePreviewingScrollViewAfterDelay;
- (void)_handlePanGesture:(id)a0;
- (void)focusEnginePanGesture:(id)a0 touchBeganAtDigitizerLocation:(struct CGPoint { double x0; double x1; })a1;
- (void)focusEnginePanGesture:(id)a0 touchMovedToDigitizerLocation:(struct CGPoint { double x0; double x1; })a1;
- (void)focusEnginePanGesture:(id)a0 touchEndedAtDigitizerLocation:(struct CGPoint { double x0; double x1; })a1;
- (void)focusEnginePanGesture:(id)a0 touchCancelledAtDigitizerLocation:(struct CGPoint { double x0; double x1; })a1;

@end
