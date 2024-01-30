@class _UISingleFingerTapExtensionGesture, UIView, _UIMultiSelectOneFingerPanGesture, NSArray, UITapGestureRecognizer, NSString, UIBandSelectionInteraction, UIPanGestureRecognizer, UIKeyCommand;
@protocol UIMultiSelectInteractionDelegate;

@interface UIMultiSelectInteraction : NSObject <UIGestureRecognizerDelegate, _UIMultiSelectOneFingerPanGestureDelegate, UIInteraction> {
    BOOL _isScrollView;
    BOOL _delegateConformsToProtocol;
    UIKeyCommand *_extendToCellAboveCommand;
    UIKeyCommand *_extendToCellBelowCommand;
    UIKeyCommand *_extendToCellRightCommand;
    UIKeyCommand *_extendToCellLeftCommand;
    struct { unsigned char respondsToShouldPreventDragLiftGesture : 1; unsigned char respondsToShouldAllowSelectionExtensionAtPoint : 1; unsigned char respondsToShouldAllowSelectionExtensionAtIndexPath : 1; unsigned char respondsToDidCancelMultiSelectInteraction : 1; unsigned char respondsToSelectItemsWithinRect : 1; unsigned char respondsToToggleSelectionWithinRect : 1; unsigned char respondsToShouldStartBandSelectionAtPoint : 1; unsigned char respondsToSupportsKeyboardSelectionExtension : 1; unsigned char respondsToExtendSelectionInDirection : 1; unsigned char respondsToChildScrollViewAtLocation : 1; unsigned char respondsToShouldBeginMultiSelectInteraction : 1; } _optionalDelegateFlags;
}

@property (weak, nonatomic) UIView *view;
@property (retain, nonatomic) _UIMultiSelectOneFingerPanGesture *_multiSelectModePan;
@property (retain, nonatomic) UIPanGestureRecognizer *_multiFingerPan;
@property (retain, nonatomic) UITapGestureRecognizer *_multiFingerTap;
@property (retain, nonatomic) _UISingleFingerTapExtensionGesture *_singleFingerExtensionTap;
@property (retain, nonatomic) UIBandSelectionInteraction *bandSelectionInteraction;
@property (weak, nonatomic) id<UIMultiSelectInteractionDelegate> delegate;
@property (nonatomic) double singleTouchPanGestureHysteresis;
@property (readonly, nonatomic) NSArray *gesturesForFailureRequirements;
@property (readonly, nonatomic) long long activeGestureType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_cancelScrollingInViewForGesture:(id)a0;
- (BOOL)_isActive;
- (void)_endCommonPan:(id)a0;
- (id)_interactionDelegate;
- (BOOL)_shouldBeginInteractionWithGestureType:(long long)a0 location:(struct CGPoint { double x0; double x1; })a1 velocity:(struct CGPoint { double x0; double x1; })a2;
- (void)_updateDelegateConformance;
- (void)didMoveToView:(id)a0;
- (void)_cancelCommonPan:(id)a0;
- (void)willMoveToView:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (BOOL)multiSelectOneFingerPanGestureShouldPreventDragInteractionGesture:(id)a0;
- (void)_didInvokeMultiSelectExtendGestureAtLocation:(struct CGPoint { double x0; double x1; })a0;
- (void)_didInvokeMultiSelectAppendGestureAtLocation:(struct CGPoint { double x0; double x1; })a0;
- (id)keyCommandsForSelectionExtension;
- (void)_updateCommonPan:(id)a0;
- (void)_multiFingerTapGesture:(id)a0;
- (void)_cancelScrollingInScrollView:(id)a0;
- (void)setSingleTouchPanGestureHysteresis:(double)a0;
- (void)_endObservingScrollViewOffsetUpdates;
- (void)_askDelegateToAutomaticallyTransitionToMultiSelectModeKeepingSelection:(BOOL)a0;
- (long long)_gestureTypeForGestureInstance:(id)a0;
- (BOOL)_areSelectionExtensionKeyCommandsEnabled;
- (BOOL)_attemptToAutomaticallyTransitionToMultiSelectModeIfNecessaryAtPoint:(struct CGPoint { double x0; double x1; })a0 withVelocity:(struct CGPoint { double x0; double x1; })a1;
- (unsigned long long)_currentExtensionTypeForOneFingerTapGesture:(id)a0;
- (void).cxx_destruct;
- (void)_beginCommonPan:(id)a0;
- (BOOL)_triggeredLegacyPathInsteadForGestureRecognizer:(id)a0 velocity:(struct CGPoint { double x0; double x1; })a1 shouldBegin:(out BOOL *)a2;
- (id)init;
- (BOOL)_isBandSelectionAllowedAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)_handleBandSelectionInteraction:(id)a0;
- (BOOL)_shouldBeginBandSelectionInteraction:(id)a0 atPoint:(struct CGPoint { double x0; double x1; })a1;
- (BOOL)_isShiftKeyBeingHeldWithGesture:(id)a0;
- (void)_handleCommonPanGestureStateChanged:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (double)singleTouchPanGestureHysteresis;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)_beginInteractionWithTrigger:(id)a0 point:(struct CGPoint { double x0; double x1; })a1 keepingSelection:(BOOL)a2;
- (void)_handleSelectionExtensionTapGesture:(id)a0;
- (void)_beginObservingScrollViewOffsetUpdates;
- (void)_handleKeyboardSelectionExtensionKeyCommand:(id)a0;
- (BOOL)_isCommandKeyBeingHeldWithGesture:(id)a0;
- (void)_endInteractionAtPoint:(struct CGPoint { double x0; double x1; })a0 canceled:(BOOL)a1;

@end
