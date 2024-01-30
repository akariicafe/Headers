@class AKController, NSString, PDFView, PDFDocument;

@interface PDFAKPageOverlayViewProvider : NSObject <PDFPageOverlayViewProviderPrivate> {
    PDFDocument *_pdfDocument;
    AKController *_akController;
    PDFView *_pdfView;
}

@property (readonly, nonatomic) BOOL shouldVerticallyFlipOverlayViews;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)setupGestureRecognizersForView:(id)a0;
- (id)initWithPDFDocument:(id)a0 pdfView:(id)a1 andAKController:(id)a2;
- (void)overlayViewInstalledForPage:(id)a0;
- (void)overlayViewWillBeUninstalledForPage:(id)a0;
- (id)pdfView:(id)a0 overlayViewForPage:(id)a1;
- (void)pdfView:(id)a0 willEndDisplayingOverlayView:(id)a1 forPage:(id)a2;
- (void)teardownGestureRecognizersForView:(id)a0;

@end
