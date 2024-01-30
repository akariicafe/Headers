@class NSString, _UIMultiSelectOneFingerPanGesture, NSArray, _UISingleFingerTapExtensionGesture, UIView, UIPanGestureRecognizer, UITapGestureRecognizer;
@protocol UIMultiSelectInteractionDelegate;

@interface UIMultiSelectInteraction : NSObject <UIGestureRecognizerDelegate, _UIMultiSelectOneFingerPanGestureDelegate, UIInteraction> {
    BOOL _isScrollView;
    BOOL _delegateConformsToProtocol;
    struct { unsigned char respondsToShouldPreventDragLiftGesture : 1; unsigned char respondsToShouldAllowSelectionExtensionAtPoint : 1; unsigned char respondsToDidCancelMultiSelectInteraction : 1; unsigned char respondsToShouldBeginMultiSelectInteraction : 1; } _optionalDelegateFlags;
}

@property (weak, nonatomic) UIView *view;
@property (retain, nonatomic) _UIMultiSelectOneFingerPanGesture *_multiSelectModePan;
@property (retain, nonatomic) UIPanGestureRecognizer *_multiFingerPan;
@property (retain, nonatomic) UITapGestureRecognizer *_multiFingerTap;
@property (retain, nonatomic) _UISingleFingerTapExtensionGesture *_singleFingerExtensionTap;
@property (weak, nonatomic) id<UIMultiSelectInteractionDelegate> delegate;
@property (nonatomic) double singleTouchPanGestureHysteresis;
@property (readonly, nonatomic) NSArray *gesturesForFailureRequirements;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_handleSelectionExtensionTapGesture:(id)a0;
- (void)willMoveToView:(id)a0;
- (void)_multiFingerTapGesture:(id)a0;
- (void)didMoveToView:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (void)_beginObservingScrollViewOffsetUpdates;
- (long long)_gestureTypeForGestureInstance:(id)a0;
- (void)_didInvokeMultiSelectAppendGestureAtLocation:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)_isShiftKeyBeingHeldWithGesture:(id)a0;
- (void)_cancelScrollingInViewForGesture:(id)a0;
- (id)_interactionDelegate;
- (void)_endObservingScrollViewOffsetUpdates;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (BOOL)_triggeredLegacyPathInsteadForGestureRecognizer:(id)a0 velocity:(struct CGPoint { double x0; double x1; })a1 shouldBegin:(out BOOL *)a2;
- (unsigned long long)_currentExtensionTypeForOneFingerTapGesture:(id)a0;
- (BOOL)_attemptToAutomaticallyTransitionToMultiSelectModeIfNecessaryAtPoint:(struct CGPoint { double x0; double x1; })a0 withVelocity:(struct CGPoint { double x0; double x1; })a1;
- (void)_cancelCommonPan:(id)a0;
- (double)singleTouchPanGestureHysteresis;
- (BOOL)multiSelectOneFingerPanGestureShouldPreventDragInteractionGesture:(id)a0;
- (void)_updateCommonPan:(id)a0;
- (void)_handleCommonPanGestureStateChanged:(id)a0;
- (void)_beginCommonPan:(id)a0;
- (void)_endCommonPan:(id)a0;
- (void)_didInvokeMultiSelectExtendGestureAtLocation:(struct CGPoint { double x0; double x1; })a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (BOOL)_isCommandKeyBeingHeldWithGesture:(id)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)_updateDelegateConformance;
- (void)_askDelegateToAutomaticallyTransitionToMultiSelectModeAtPoint:(struct CGPoint { double x0; double x1; })a0 keepingSelection:(BOOL)a1;
- (void)setSingleTouchPanGestureHysteresis:(double)a0;

@end
