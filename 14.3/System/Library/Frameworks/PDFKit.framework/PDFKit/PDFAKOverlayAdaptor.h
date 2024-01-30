@class PDFView, PDFAKOverlayAdaptorPrivate;

@interface PDFAKOverlayAdaptor : NSObject {
    PDFAKOverlayAdaptorPrivate *_private;
}

@property (readonly, weak, nonatomic) PDFView *pdfView;

+ (id)instanceForPlatformWithPDFView:(id)a0;

- (void)teardown;
- (void)_teardown;
- (void).cxx_destruct;
- (void)dealloc;
- (id)_pdfView;
- (id)initWithPDFView:(id)a0;
- (void)_currentPageChanged:(id)a0;
- (void)_teardownGestureRecognizersForView:(id)a0 andDocument:(id)a1;
- (void)_uninstallAllOverlays;
- (void)_setupGestureRecognizersForView:(id)a0 andDocument:(id)a1;
- (void)_installOverlayForPageView:(id)a0 ofPage:(id)a1 atIndex:(unsigned long long)a2;
- (void)_setupRotationNotificationObservationForPageAtIndex:(unsigned long long)a0;
- (void)_teardownRotationNotificationObservationForPageAtIndex:(unsigned long long)a0;
- (void)_uninstallOverlayAtIndex:(unsigned long long)a0;
- (id)_annotationController;
- (void)_pageRotationChanged:(id)a0;
- (void)pdfView:(id)a0 willSetDocument:(id)a1;
- (void)pdfView:(id)a0 didSetDocument:(id)a1;
- (void)pdfView:(id)a0 didAddView:(id)a1 forPage:(id)a2 atIndex:(unsigned long long)a3;
- (void)pdfView:(id)a0 willRemoveView:(id)a1 forPage:(id)a2 atIndex:(unsigned long long)a3;
- (void)_selectionChanged:(id)a0;
- (void)_selectionWillBeginChanging:(id)a0;
- (void)_selectionDidEndChanging:(id)a0;

@end
