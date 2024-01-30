@class NSString, KNSlideLayoutPrintHelper;

@interface KNSlideExporter : KNRenderingExporter <KNSlideLayoutPrintHelperDataSource> {
    KNSlideLayoutPrintHelper *_helper;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)pageCount;
- (void)setup;
- (void).cxx_destruct;
- (BOOL)incrementPage;
- (void)setCurrentSlideNode:(id)a0;
- (BOOL)drawCurrentPageInContext:(struct CGContext { } *)a0 viewScale:(double)a1 unscaledClipRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 createPage:(BOOL)a3;
- (void)p_preparePrintHelperIfNeeded;
- (id)slideNodesForPrintHelper:(id)a0;
- (id)printHelper:(id)a0 noteSegmentsForSlideNode:(id)a1;
- (unsigned long long)printHelper:(id)a0 commentsPageCountForSlideNode:(id)a1;
- (BOOL)supportsPrintingComments;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundsRect;

@end
