@class AKController, AKModelController, PDFView, NSString, UIView, PDFDocument, PDFAKDocumentAdaptorPrivate;
@protocol PDFAKControllerDelegateProtocol;

@interface PDFAKDocumentAdaptor : NSObject <AKControllerDelegateProtocol, PKRulerHostingDelegate> {
    PDFAKDocumentAdaptorPrivate *_private;
}

@property (weak, nonatomic) PDFView *pdfView;
@property (readonly, weak, nonatomic) PDFDocument *pdfDocument;
@property (readonly, nonatomic) AKController *akMainController;
@property (readonly, nonatomic) AKModelController *akDocumentModelController;
@property (readonly, nonatomic) UIView *akToolbarView;
@property (weak, nonatomic) id<PDFAKControllerDelegateProtocol> PDFAKControllerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isHandlingEditDetected;
+ (void)setIsHandlingEditDetected:(BOOL)a0;

- (void)teardown;
- (void)_teardown;
- (void).cxx_destruct;
- (void)dealloc;
- (id)controller:(id)a0 willSetToolbarItems:(id)a1;
- (id)rulerHostingView;
- (BOOL)rulerHostWantsSharedRuler;
- (void)_pdfDocumentDidUnlock:(id)a0;
- (void)_pdfViewDidLayout:(id)a0;
- (void)_pdfViewDidChangeScale:(id)a0;
- (id)undoManagerForAnnotationController:(id)a0;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })_compensatingAffineTransformForPage:(id)a0;
- (id)popoverPresentingViewControllerForAnnotationController:(id)a0;
- (double)modelBaseScaleFactorOfPageAtIndex:(unsigned long long)a0 forAnnotationController:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })positioningRectForCandidatePicker;
- (void)editCheckpointReachedForAnnotationController:(id)a0;
- (void)editDetectedForAnnotationController:(id)a0;
- (void)penStrokeCompletedForAnnotationController:(id)a0;
- (void)controllerWillShowSignatureCaptureView:(id)a0;
- (void)controllerWillDismissSignatureCaptureView:(id)a0;
- (void)controllerWillShowSignatureManagerView:(id)a0;
- (void)controllerWillDismissSignatureManagerView:(id)a0;
- (void)controllerWillEnterToolMode:(id)a0;
- (void)controllerDidEnterToolMode:(id)a0;
- (void)controllerWillExitToolMode:(id)a0;
- (void)controllerDidExitToolMode:(id)a0;
- (void)positionSketchOverlay:(id)a0 forAnnotationController:(id)a1;
- (void)_scheduleDelayedModelBaseScaleFactorCalculation;
- (void)_delayedModelBaseScaleFactorCalculation;
- (struct CGPoint { double x0; double x1; })convertPoint:(struct CGPoint { double x0; double x1; })a0 fromOverlayToModelWithPageIndex:(unsigned long long)a1 forAnnotationController:(id)a2;
- (struct CGPoint { double x0; double x1; })convertPoint:(struct CGPoint { double x0; double x1; })a0 fromModelToOverlayWithPageIndex:(unsigned long long)a1 forAnnotationController:(id)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })maxPageRectWithPageIndex:(unsigned long long)a0 forAnnotationController:(id)a1;
- (id)newContentSnapshotPDFDataIncludingAdornments:(BOOL)a0 atScale:(double)a1 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 onOverlayAtPageIndex:(unsigned long long)a3 forAnnotationController:(id)a4;
- (void)installDrawingGestureRecognizer:(id)a0 forPageAtIndex:(unsigned long long)a1 forAnnotationController:(id)a2;
- (void)uninstallDrawingGestureRecognizer:(id)a0 forPageAtIndex:(unsigned long long)a1 forAnnotationController:(id)a2;
- (void)updateDrawingGestureRecognizer:(id)a0 forPageAtIndex:(unsigned long long)a1 withPriority:(BOOL)a2 forAnnotationController:(id)a3;
- (BOOL)controllerShouldDetectFormElements:(id)a0;
- (BOOL)shouldPlaceFormElementAtPoint:(struct CGPoint { double x0; double x1; })a0 onOverlayAtPageIndex:(unsigned long long)a1 forAnnotationController:(id)a2;
- (BOOL)shouldPlaceProposedFormElementAtRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 onOverlayAtPageIndex:(unsigned long long)a1 forAnnotationController:(id)a2;
- (id)layerContainingQuickBackgroundForLoupeOnOverlayAtPageIndex:(unsigned long long)a0 forAnnotationController:(id)a1;
- (void)rotateRight:(id)a0;
- (void)rotateLeft:(id)a0;
- (BOOL)hasHighlightableSelectionForAnnotationController:(id)a0;
- (id)initWithPDFDocument:(id)a0 andView:(id)a1;
- (void)pdfDocument:(id)a0 didInsertPage:(id)a1 atIndex:(unsigned long long)a2;
- (void)pdfDocument:(id)a0 didRemovePage:(id)a1 atIndex:(unsigned long long)a2;
- (void)pdfDocumentDidRemoveAllPagesOrPlaceholders:(id)a0;
- (void)pdfDocument:(id)a0 didExchangePage:(id)a1 atIndex:(unsigned long long)a2 withPage:(id)a3 atIndex:(unsigned long long)a4;
- (void)pdfDocument:(id)a0 didReplacePagePlaceholder:(id)a1 atIndex:(unsigned long long)a2 withPage:(id)a3;

@end
