@class NSString;

@interface WebPDFView : WAKView <WebPDFDocumentView, WebPDFDocumentRepresentation> {
    BOOL dataSourceHasBeenSet;
    struct CGPDFDocument { } *_PDFDocument;
    struct RetainPtr<NSString> { void *m_ptr; } _title;
    struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *_pageRects;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGColor { } *)backgroundColor;
+ (struct CGColor { } *)shadowColor;
+ (Class)_representationClassForWebFrame:(id)a0;
+ (id)supportedMIMETypes;

- (void)layout;
- (id).cxx_construct;
- (void)setNeedsLayout:(BOOL)a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)setDataSource:(id)a0;
- (id)title;
- (struct CGPDFDocument { } *)doc;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForPageNumber:(unsigned int)a0;
- (unsigned int)totalPages;
- (id)documentSource;
- (void)_checkPDFTitle;
- (void)_computePageRects;
- (id)_pagesInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)canProvideDocumentSource;
- (void)dataSourceUpdated:(id)a0;
- (void)drawPage:(struct CGPDFPage { } *)a0;
- (void)finishedLoadingWithDataSource:(id)a0;
- (unsigned int)pageNumberForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)receivedData:(id)a0 withDataSource:(id)a1;
- (void)receivedError:(id)a0 withDataSource:(id)a1;
- (void)viewDidMoveToHostWindow;
- (void)viewWillMoveToHostWindow:(id)a0;

@end
