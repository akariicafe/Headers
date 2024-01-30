@class AKController, NSString, AKShapeDetectionController, AKSmoothPathView, AKAnnotation, NSMutableArray;

@interface AKLegacyDoodleController : NSObject <AKSmoothPathViewDelegate, AKShapeDetectionControllerDelegate>

@property (weak) AKController *controller;
@property (retain, nonatomic) AKSmoothPathView *intelligentSketchOverlayView;
@property (copy, nonatomic) id /* block */ performRecognitionBlock;
@property (retain, nonatomic) AKShapeDetectionController *shapeDetectionController;
@property (retain) AKAnnotation *coalescedAnnotation;
@property (retain) NSMutableArray *recentDoodlesAnnotations;
@property (retain) NSMutableArray *recentDoodlePaths;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } recentDrawingBoundsInInputView;
@property BOOL ignoreAnnotationAndSelectionKVO;
@property BOOL isShowingOverlay;
@property BOOL isWaitingToCoalesceStrokes;
@property (nonatomic) BOOL preferDoodle;
@property (nonatomic) BOOL coalescesDoodles;
@property (nonatomic, getter=shapeDetectionEnabled) BOOL shapeDetectionEnabled;
@property (nonatomic) BOOL selectNewlyCreatedAnnotations;
@property BOOL pressureSensitiveDoodleMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (void)handleTapAction:(id)a0;
- (id)initWithController:(id)a0;
- (BOOL)isShowingCandidatePicker;
- (void)dismissCandidatePicker;
- (void)beginIgnoringAnnotationSelectionObservation:(id)a0;
- (void)endIgnoringAnnotationSelectionObservation:(id)a0;
- (BOOL)isIgnoringAnnotationAndSelectionKVO:(id)a0;
- (void)shapeDetectionControllerWillPickCandidate:(id)a0 isInk:(BOOL)a1;
- (BOOL)shapeDetectionController:(id)a0 shouldSelectCandidateAnnotation:(id)a1;
- (id)overlayView:(id)a0;
- (void)updateStrokeAttributes;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })shapeDetectionControllerPositioningRectForCandidatePicker:(id)a0;
- (void)updateOverlayBoundsAndBackingScale:(id)a0;
- (void)_coalesceRecentDrawings;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameForOurOverlayInHostingView:(id)a0;
- (void)enclosingScrollViewNotification:(id)a0;
- (void)toolbarNotification:(id)a0;
- (void)handleForwardedEvent:(id)a0;
- (void)handleDragAction:(id)a0;
- (void)_executeDeferredRecognition;
- (void)_inputView:(id)a0 didCollectPath:(struct CGPath { } *)a1 isPrestroked:(BOOL)a2;
- (void)_beginOrExtendCoalescingTimer;
- (void)_addAnnotationImmediatelyFor:(struct CGPath { } *)a0 withDrawingCenter:(struct CGPoint { double x0; double x1; })a1 drawingBoundsInView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 pathIsPrestroked:(BOOL)a3 isSingelDot:(BOOL)a4 fromInputView:(id)a5;
- (void)_scheduleDelayedRecognitionForDrawing:(id)a0 withPath:(struct CGPath { } *)a1 boundsInView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 center:(struct CGPoint { double x0; double x1; })a3 isPrestroked:(BOOL)a4;
- (id)createDoodleAnnotationWithPath:(struct CGPath { } *)a0 drawingBoundsInView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 drawingCenter:(struct CGPoint { double x0; double x1; })a2 pathIsPrestroked:(BOOL)a3 shouldGoToPageController:(id *)a4;
- (void)_coalesceDrawingsCancelled;
- (void)_removeAnnotations:(id)a0 mostLikelyFromPageController:(id)a1;
- (void)_clearCoalescingState;
- (void)inputViewWillStartDrawing:(id)a0;
- (void)inputView:(id)a0 didCollectPath:(struct CGPath { } *)a1;
- (void)inputView:(id)a0 didCollectPrestrokedPath:(struct CGPath { } *)a1;
- (void)showOverlay;
- (void)removeOverlay;

@end
