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

- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)teardown;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (id)initWithController:(id)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (BOOL)interactionShouldBegin:(id)a0 atPoint:(struct CGPoint { double x0; double x1; })a1 forGestureRecognizer:(id)a2;
- (void)applyToAllSelectedAnnotationsRotateEvent:(id)a0 orRecognizer:(id)a1;
- (void)forwardRecognizerToMainHandleEvent:(id)a0;
- (BOOL)_tapRecognizerCanBeginAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)_doubleTapRecognizerCanBeginAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)_shouldAllowTapAtLocationInWindow:(struct CGPoint { double x0; double x1; })a0;

@end
