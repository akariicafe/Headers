@class NSArray, NSString, NSObject, WebDataSource;
@protocol WebPDFViewPlaceholderDelegate;

@interface WebPDFViewPlaceholder : WAKView <WebPDFDocumentView, WebPDFDocumentRepresentation> {
    WebDataSource *_dataSource;
    BOOL _didFinishLoad;
}

@property (retain) NSArray *pageRects;
@property (retain) NSArray *pageYOrigins;
@property (retain) NSString *title;
@property NSObject<WebPDFViewPlaceholderDelegate> *delegate;
@property (readonly) struct CGPDFDocument { } *document;
@property (readonly) struct CGPDFDocument { } *doc;
@property (readonly) unsigned long long totalPages;
@property struct CGSize { double width; double height; } containerSize;
@property (readonly, nonatomic) BOOL didCompleteLayout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)setAsPDFDocRepAndView;
+ (id)supportedMIMETypes;
+ (Class)_representationClassForWebFrame:(id)a0;

- (void)setDataSource:(id)a0;
- (void)clearDocument;
- (void)didUnlockDocument;
- (void)dealloc;
- (void)simulateClickOnLinkToURL:(id)a0;
- (void)layout;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForPageNumber:(unsigned long long)a0;
- (void)setDocument:(struct CGPDFDocument { } *)a0;
- (id)documentSource;
- (void)finishedLoadingWithDataSource:(id)a0;
- (void)receivedData:(id)a0 withDataSource:(id)a1;
- (void)dataSourceUpdated:(id)a0;
- (void)receivedError:(id)a0 withDataSource:(id)a1;
- (void)viewWillMoveToHostWindow:(id)a0;
- (void)viewDidMoveToHostWindow;
- (BOOL)canProvideDocumentSource;
- (void)_updateTitleForURL:(id)a0;
- (void)_notifyDidCompleteLayout;
- (struct CGSize { double x0; double x1; })_computePageRects:(struct CGPDFDocument { } *)a0;
- (void)_updateTitleForDocumentIfAvailable;
- (void)_evaluateJSForDocument:(struct CGPDFDocument { } *)a0;
- (void)_doPostLoadOrUnlockTasks;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_getPDFPageBounds:(struct CGPDFPage { } *)a0;

@end
