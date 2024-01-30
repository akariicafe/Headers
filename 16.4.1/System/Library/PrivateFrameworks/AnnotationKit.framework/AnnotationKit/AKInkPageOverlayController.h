@class AKPageController, AKShapeDetectionController, NSString, AKInkOverlayView;
@protocol PKRulerHostingDelegate;

@interface AKInkPageOverlayController : NSObject <AKInkOverlayViewDelegate, AKShapeDetectionControllerDelegate>

@property (weak) AKPageController *pageController;
@property (retain) AKInkOverlayView *inkOverlayView;
@property (retain) AKShapeDetectionController *shapeDetectionController;
@property BOOL ignoreAnnotationAndSelectionKVO;
@property BOOL onlyPencilDraws;
@property (copy) id /* block */ delayedShapeDetectionBlock;
@property double lastStrokeEndTime;
@property (weak, nonatomic) id<PKRulerHostingDelegate> rulerHostingDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)newInkOverlayDrawingUndoTargetWithPageController:(id)a0;

- (void)setup;
- (id)initWithPageController:(id)a0;
- (void)teardown;
- (void).cxx_destruct;
- (void)_controllerWillSave:(id)a0;
- (id)_convertCHDrawing:(id)a0 fromDrawingInCanvasView:(id)a1 toInkOverlayView:(id)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_convertRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 fromDrawingInCanvasView:(id)a1 toPageControllerModelSpace:(id)a2;
- (void)_enclosingScrollViewDidScroll:(id)a0;
- (void)_fullSetup;
- (void)_inkCanvasAnnotationUpdated:(id)a0;
- (void)_inkDidChangeNotification:(id)a0;
- (void)_partialTeardown;
- (void)_performDelayedShapeDetection;
- (void)_setupGestureDependencies;
- (void)_tearDownGestureDependencies;
- (void)_toolStatusUpdated:(id)a0;
- (void)_updateAllowedTouchTypesAllEnabled:(BOOL)a0 pencilEnabled:(BOOL)a1;
- (void)_updateGestureDependencyPriority;
- (void)annotationEditingDidEndWithCompletion:(id /* block */)a0;
- (void)beginIgnoringAnnotationSelectionObservation:(id)a0;
- (void)didToggleRuler;
- (void)endIgnoringAnnotationSelectionObservation:(id)a0;
- (void)inputView:(id)a0 didCollectDrawingForAnalysis:(id)a1;
- (BOOL)inputViewCanBeginDrawing:(id)a0 withTouch:(id)a1;
- (void)inputViewDidBeginStroke:(id)a0;
- (BOOL)isIgnoringAnnotationAndSelectionKVO:(id)a0;
- (BOOL)isWaitingToCoalesceStrokes;
- (id)overlayView:(id)a0;
- (struct CGSize { double x0; double x1; })scaleFromDrawingInCanvasView:(id)a0 toPageControllerModelSpace:(id)a1;
- (BOOL)shapeDetectionController:(id)a0 shouldSelectCandidateAnnotation:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })shapeDetectionControllerPositioningRectForCandidatePicker:(id)a0;
- (void)shapeDetectionControllerWillPickCandidate:(id)a0 isInk:(BOOL)a1;

@end
