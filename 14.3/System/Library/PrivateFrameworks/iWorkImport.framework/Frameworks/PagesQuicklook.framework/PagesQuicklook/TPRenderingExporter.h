@class NSMutableArray, TPPdfHyperlinkController;

@interface TPRenderingExporter : TSARenderingExporter

@property (retain, nonatomic) NSMutableArray *outputPageList;
@property (retain, nonatomic) TPPdfHyperlinkController *hyperlinkController;
@property (nonatomic) unsigned long long pageIndex;
@property (nonatomic) unsigned long long internalPageCount;
@property (nonatomic) BOOL didLimitPageLayout;
@property (nonatomic) long long lastPageIndexForLayout;
@property (nonatomic) BOOL includePencilAnnotations;
@property (nonatomic) BOOL includeComments;
@property (nonatomic) BOOL includeBackgrounds;

- (void)setup;
- (void)teardown;
- (void).cxx_destruct;
- (unsigned long long)pageCount;
- (id)initWithDocumentRoot:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })unscaledClipRect;
- (id)currentInfos;
- (BOOL)incrementPage;
- (BOOL)drawCurrentPageInContext:(struct CGContext { } *)a0 viewScale:(double)a1 unscaledClipRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 createPage:(BOOL)a3;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundsRect;
- (BOOL)preparePage:(unsigned long long)a0;
- (double)progressForCurrentPage;
- (BOOL)shouldSuppressBackgroundsForCurrentPage;
- (double)totalProgess;
- (void)p_addHyperLinksInContext:(struct CGContext { } *)a0 forCanvas:(id)a1;
- (void)setupPencilAnnotationsAndHyperlinks;

@end
