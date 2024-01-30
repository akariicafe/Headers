@class _UIKeyboardTextSelectionController, NSString, UIKeyboardTaskQueue, _UIKeyboardTextSelectionGestureController;
@protocol _UINonEditableTextSelectionForceGestureDelegate;

@interface _UINonEditableTextSelectionForceGesture : _UITextSelectionForceGesture <_UIKeyboardTextSelectionGestureControllerDelegate>

@property (retain, nonatomic) _UIKeyboardTextSelectionController *textSelectionController;
@property (retain, nonatomic) _UIKeyboardTextSelectionGestureController *gestureController;
@property (nonatomic) id<_UINonEditableTextSelectionForceGestureDelegate> forceGestureDelegate;
@property (readonly, nonatomic) UIKeyboardTaskQueue *taskQueue;
@property (readonly, nonatomic) double timestampOfLastTouchesEnded;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)willBeginGesture;
- (BOOL)_shouldDelayUntilForceLevelRequirementIsMet;
- (id)initWithTextInput:(id)a0;

@end
