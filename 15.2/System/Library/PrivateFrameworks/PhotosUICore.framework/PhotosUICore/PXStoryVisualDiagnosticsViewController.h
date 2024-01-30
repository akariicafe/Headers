@class PDFView, PDFDocument;

@interface PXStoryVisualDiagnosticsViewController : UIViewController <PXTapToRadarDiagnosticProvider>

@property (readonly, nonatomic) PDFView *documentView;
@property (copy, nonatomic) PDFDocument *document;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)collectTapToRadarDiagnosticsIntoContainer:(id)a0;
- (void)_invalidateDocumentView;
- (void)_updateDocumentView;
- (void)_handleDoneBarButtonItem:(id)a0;
- (void)_handleTapToRadarButton:(id)a0;
- (void)_handleActionBarButtonItem:(id)a0;

@end
