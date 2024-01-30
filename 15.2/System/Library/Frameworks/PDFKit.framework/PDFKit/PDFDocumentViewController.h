@class NSString, PDFDocumentViewControllerPrivate;

@interface PDFDocumentViewController : UIPageViewController <PDFPageBackgroundManagerDelegate, PDFDocumentPageChangeDelegate, UIPageViewControllerDataSource, UIPageViewControllerDelegate, UIScrollViewDelegate> {
    PDFDocumentViewControllerPrivate *_private;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)pageViews;
- (id)selection;
- (void)setSelection:(id)a0;
- (void)pageViewController:(id)a0 didFinishAnimating:(BOOL)a1 previousViewControllers:(id)a2 transitionCompleted:(BOOL)a3;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)viewWillLayoutSubviews;
- (id)pageViewController:(id)a0 viewControllerBeforeViewController:(id)a1;
- (double)scaleFactor;
- (BOOL)hasBackgroundImage;
- (id)pageViewController:(id)a0 viewControllerAfterViewController:(id)a1;
- (void)setScaleFactor:(double)a0;
- (void)pageViewController:(id)a0 willTransitionToViewControllers:(id)a1;
- (id)scrollView;
- (id)currentPage;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (id)document;
- (void)dealloc;
- (double)minScaleFactor;
- (id)pageViewForPageAtIndex:(unsigned long long)a0;
- (double)autoScaleFactor;
- (void)setAutoScales:(BOOL)a0;
- (void)setMinScaleFactor:(double)a0 withMaxScaleFactor:(double)a1;
- (id)pageForPoint:(struct CGPoint { double x0; double x1; })a0 nearest:(BOOL)a1;
- (struct CGPoint { double x0; double x1; })convertPoint:(struct CGPoint { double x0; double x1; })a0 toPage:(id)a1;
- (void)_setupDocument;
- (void)_documentChanged;
- (id)_pageViewControllerCreate:(int)a0;
- (void)_updateCurrentPageViewController:(id)a0;
- (void)willForceUpdate;
- (void)forceUpdateActivePageIndex:(unsigned long long)a0 withMaxDuration:(double)a1;
- (struct CGPoint { double x0; double x1; })_convertPoint:(struct CGPoint { double x0; double x1; })a0 toPDFPageViewController:(id)a1;
- (struct CGPoint { double x0; double x1; })_convertPoint:(struct CGPoint { double x0; double x1; })a0 fromPDFPageViewController:(id)a1;
- (id)_pageViewController:(id)a0 nextViewController:(int)a1 forViewController:(id)a2;
- (void)_documentWasUnlocked;
- (void)_loadDocument;
- (id)findPageViewControllerForPageIndex:(long long)a0;
- (void)goToPage:(id)a0 direction:(long long)a1 animated:(BOOL)a2;
- (id)backgroundImageForPage:(id)a0 withQuality:(int *)a1;
- (void)recieveBackgroundImage:(id)a0 atBackgroundQuality:(int)a1 forPage:(id)a2;
- (void)didInsertPage:(id)a0 atIndex:(unsigned long long)a1;
- (void)didRemovePage:(id)a0 atIndex:(unsigned long long)a1;
- (id)initWithPDFView:(id)a0 andNavigationOrientation:(long long)a1 withRenderingProperties:(id)a2 andOptions:(id)a3;
- (double)maxScaleFactor;
- (void)setDisplaysRTL:(BOOL)a0;
- (void)setScrollViewScrollEnabled:(BOOL)a0;
- (void)updateScrollViews;
- (struct CGPoint { double x0; double x1; })convertPoint:(struct CGPoint { double x0; double x1; })a0 fromPage:(id)a1;

@end
