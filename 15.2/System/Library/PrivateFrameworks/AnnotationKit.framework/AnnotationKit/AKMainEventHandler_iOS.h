@class UILongPressGestureRecognizer, AKRotationGestureRecognizer, NSString, AKPanGestureRecognizer, UITapGestureRecognizer;

@interface AKMainEventHandler_iOS : AKMainEventHandler <UIGestureRecognizerDelegate, PKSelectionInteractionDelegate>

@property (retain) UITapGestureRecognizer *tapRecognizer;
@property (retain) UITapGestureRecognizer *doubleTapRecognizer;
@property (retain) UILongPressGestureRecognizer *pressRecognizer;
@property (retain) AKPanGestureRecognizer *panRecognizer;
@property (retain) AKRotationGestureRecognizer *rotationRecognizer;
@property double lastRotationAngleInRotationGesture;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)teardown;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (id)initWithController:(id)a0;
- (BOOL)selectionInteractionShouldBegin:(id)a0 atPoint:(struct CGPoint { double x0; double x1; })a1 forEvent:(id)a2 orGestureRecognizer:(id)a3;
- (void)applyToAllSelectedAnnotationsRotateEvent:(id)a0 orRecognizer:(id)a1;
- (void)forwardRecognizerToMainHandleEvent:(id)a0;
- (BOOL)_tapRecognizerCanBeginAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)_doubleTapRecognizerCanBeginAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)_shouldAllowTapAtLocationInWindow:(struct CGPoint { double x0; double x1; })a0;

@end
