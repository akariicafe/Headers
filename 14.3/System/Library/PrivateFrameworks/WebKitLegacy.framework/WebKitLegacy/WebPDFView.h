@class NSString;

@interface WebPDFView : WAKView <WebPDFDocumentView, WebPDFDocumentRepresentation> {
    BOOL dataSourceHasBeenSet;
    struct CGPDFDocument { } *_PDFDocument;
    NSString *_title;
    struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *_pageRects;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGColor { } *)backgroundColor;
+ (struct CGColor { } *)shadowColor;
+ (id)supportedMIMETypes;
+ (Class)_representationClassForWebFrame:(id)a0;

- (struct CGPDFDocument { } *)doc;
- (void)setDataSource:(id)a0;
- (unsigned int)totalPages;
- (void)dealloc;
- (void)layout;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForPageNumber:(unsigned int)a0;
- (void)setNeedsLayout:(BOOL)a0;
- (id)documentSource;
- (id)title;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)finishedLoadingWithDataSource:(id)a0;
- (void)receivedData:(id)a0 withDataSource:(id)a1;
- (void)dataSourceUpdated:(id)a0;
- (void)receivedError:(id)a0 withDataSource:(id)a1;
- (void)viewWillMoveToHostWindow:(id)a0;
- (void)viewDidMoveToHostWindow;
- (BOOL)canProvideDocumentSource;
- (id)_pagesInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawPage:(struct CGPDFPage { } *)a0;
- (void)_checkPDFTitle;
- (void)_computePageRects;
- (unsigned int)pageNumberForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
