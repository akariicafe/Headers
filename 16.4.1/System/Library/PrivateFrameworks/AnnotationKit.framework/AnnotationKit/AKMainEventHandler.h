@class AKController, NSString, AKAnnotation, AKAnnotationEventHandler, UIEvent, AKPageController, AKAlignmentGuideController, AKHighlightColorEditorController;

@interface AKMainEventHandler : UIResponder <AKFormFeatureDetectorDelegate>

@property BOOL shouldEatNextLeftMouseUp;
@property BOOL shouldEatNextRightMouseUp;
@property BOOL dragDidCopySelectedAnnotations;
@property BOOL undoManagerWasGroupingByEvent;
@property struct CGPoint { double x; double y; } leftMouseDownPoint;
@property (retain) AKPageController *dragPageController;
@property (retain) AKAlignmentGuideController *dragAlignmentGuideController;
@property struct CGPoint { double x; double y; } lastDragPoint;
@property struct CGPoint { double x; double y; } lastDragActualLocation;
@property struct CGPoint { double x; double y; } lastDragActualLocationInWindow;
@property double draggedAnnotationsMaxLeftEdge;
@property double draggedAnnotationsMinRightEdge;
@property double draggedAnnotationsMaxBottomEdge;
@property double draggedAnnotationsMinTopEdge;
@property (retain) UIEvent *lastEventWithValidLocationForAutoscroll;
@property (retain) UIEvent *lastLeftMouseDownEvent;
@property BOOL wasSelectedByLongPressRecognizer;
@property (weak) AKAnnotation *annotationToBeginEditingOnDragEnd;
@property (retain) AKHighlightColorEditorController *highlightColorEditor;
@property (weak) AKController *controller;
@property unsigned long long currentModifierFlags;
@property BOOL mainEventHandlerIsInTrackingLoop;
@property BOOL mainEventHandlerIsInDoodleTrackingLoop;
@property BOOL mainEventHandlerIsInRotationLoop;
@property struct CGPoint { double x; double y; } firstDragPoint;
@property struct CGPoint { double x; double y; } panGestureStartPointInWindow;
@property (retain) AKAnnotationEventHandler *annotationEventHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)newMainEventHandlerForCurrentPlatformWithController:(id)a0;

- (id)initWithController:(id)a0;
- (void)teardown;
- (BOOL)handleKeyboardEvent:(id)a0;
- (void).cxx_destruct;
- (BOOL)handleRotateEvent:(id)a0 orRecognizer:(id)a1;
- (struct CGPoint { double x0; double x1; })_alignedAnnotationDragPointForPoint:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1 orRecognizer:(id)a2;
- (BOOL)_detectFormElementInCurrentPageControllerUnderPointInWindow:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)_detectFormElementInCurrentPageControllerUnderPointInWindow:(struct CGPoint { double x0; double x1; })a0 withStartingPoint:(struct CGPoint { double x0; double x1; })a1;
- (BOOL)_didNotHandleEventSoDeselect;
- (struct CGPoint { double x0; double x1; })_modelPointFromPointInWindow:(struct CGPoint { double x0; double x1; })a0 usingPageController:(id)a1;
- (void)_setCurrentPageBasedOnPageController:(id)a0;
- (void)_updateSelectionWithAnnotation:(id)a0 onPageController:(id)a1;
- (id)annotationsPassingBoundingBoxHitTestsWithPoint:(struct CGPoint { double x0; double x1; })a0 onPageController:(id)a1;
- (void)applyToAllSelectedAnnotationsRotateEvent:(id)a0 orRecognizer:(id)a1;
- (void)applyTranslationToAllSelectedAnnotations:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)continueDragEventTrackingLoopWithEvent:(id)a0 orRecognizer:(id)a1;
- (BOOL)continueRotateEventTrackingLoopWithEvent:(id)a0 orRecognizer:(id)a1;
- (BOOL)enterDragEventTrackingLoopWithEvent:(id)a0 orRecognizer:(id)a1;
- (BOOL)enterRotateEventTrackingLoopWithEvent:(id)a0 orRecognizer:(id)a1;
- (void)finishTranslationOfAllSelectedAnnotations;
- (BOOL)handleDoubleDownEvent:(id)a0 orRecognizer:(id)a1;
- (BOOL)handleDownEvent:(id)a0 orRecognizer:(id)a1;
- (BOOL)handleRightDownEvent:(id)a0;
- (BOOL)hitTestAnnotationsIncludingPOI:(BOOL)a0 ignoreIfDeselected:(BOOL)a1 atPointInWindow:(struct CGPoint { double x0; double x1; })a2 outAnnotation:(id *)a3;
- (BOOL)hitTestPointsOfInterestsAtPoint:(struct CGPoint { double x0; double x1; })a0 onPageController:(id)a1 inAnnotations:(id)a2 event:(id)a3 recognizer:(id)a4 cursorUpdateOnly:(BOOL)a5;
- (BOOL)mainHandleEvent:(id)a0 orRecognizer:(id)a1;
- (struct CGPoint { double x0; double x1; })modelPointFromEvent:(id)a0 orRecognizer:(id)a1 onPageController:(id *)a2;
- (struct CGPoint { double x0; double x1; })modelPointFromWindowPoint:(struct CGPoint { double x0; double x1; })a0 foundOnPageController:(id *)a1;
- (id)topmostAnnotationForBorderAndInteriorHitTestAtPoint:(struct CGPoint { double x0; double x1; })a0 inAnnotations:(id)a1 onPageController:(id)a2 wasOnBorder:(BOOL *)a3 wasOnText:(BOOL *)a4;
- (void)updateCursorForEvent:(id)a0;
- (struct CGPoint { double x0; double x1; })windowPointFromEvent:(id)a0 orRecognizer:(id)a1;

@end
