@class _UIKeyboardTextSelectionController, NSString, UIKeyboardTaskQueue;

@interface UITextIndirectNonEditableInteraction : UITextIndirectEditableInteraction <_UIKeyboardTextSelectionGestureControllerDelegate> {
    _UIKeyboardTextSelectionController *_textSelectionController;
}

@property (readonly, nonatomic) UIKeyboardTaskQueue *taskQueue;
@property (readonly, nonatomic) _UIKeyboardTextSelectionController *textSelectionController;
@property (readonly, nonatomic) double timestampOfLastTouchesEnded;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldAllowWithTouchTypes:(id)a0 atPoint:(struct CGPoint { double x0; double x1; })a1 toBegin:(BOOL)a2;
- (void)finishSetup;
- (BOOL)shouldAllowSelectionGestures:(BOOL)a0 atPoint:(struct CGPoint { double x0; double x1; })a1 toBegin:(BOOL)a2;
- (id)initWithView:(id)a0;
- (void)didEndGesture;
- (void)dealloc;
- (void)_setupControllersIfNecessaryWithView:(id)a0;
- (void)willBeginGesture;
- (void).cxx_destruct;

@end
