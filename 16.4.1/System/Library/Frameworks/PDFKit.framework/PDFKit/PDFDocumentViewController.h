@class NSString, PDFDocumentViewControllerPrivate;

@interface PDFDocumentViewController : UIPageViewController <PDFPageBackgroundManagerDelegate, PDFDocumentPageChangeDelegate, UIPageViewControllerDataSource, UIPageViewControllerDelegate, UIScrollViewDelegate> {
    PDFDocumentViewControllerPrivate *_private;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)document;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (double)scaleFactor;
- (id)scrollView;
- (void)scrollViewDidScroll:(id)a0;
- (void)setScaleFactor:(double)a0;
- (void)dealloc;
- (id)selection;
- (void)setSelection:(id)a0;
- (id)pageViews;
- (void)viewWillLayoutSubviews;
- (id)currentPage;
- (void).cxx_destruct;
- (void)pageViewController:(id)a0 didFinishAnimating:(BOOL)a1 previousViewControllers:(id)a2 transitionCompleted:(BOOL)a3;
- (id)pageViewController:(id)a0 viewControllerAfterViewController:(id)a1;
- (id)pageViewController:(id)a0 viewControllerBeforeViewController:(id)a1;
- (void)pageViewController:(id)a0 willTransitionToViewControllers:(id)a1;
- (BOOL)hasBackgroundImage;
- (double)minScaleFactor;
- (double)autoScaleFactor;
- (void)setDisplaysRTL:(BOOL)a0;
- (void)willForceUpdate;
- (void)_setupDocument:(unsigned long long)a0;
- (struct CGPoint { double x0; double x1; })_convertPoint:(struct CGPoint { double x0; double x1; })a0 fromPDFPageViewController:(id)a1;
- (struct CGPoint { double x0; double x1; })_convertPoint:(struct CGPoint { double x0; double x1; })a0 toPDFPageViewController:(id)a1;
- (void)_documentChanged;
- (void)_documentWasUnlocked;
- (void)_loadDocument:(unsigned long long)a0;
- (id)_pageViewController:(id)a0 nextViewController:(int)a1 forViewController:(id)a2;
- (id)_pageViewControllerCreate:(unsigned long long)a0;
- (void)_updateCurrentPageViewController:(id)a0;
- (id)backgroundImageForPage:(id)a0 withQuality:(int *)a1;
- (struct CGPoint { double x0; double x1; })convertPoint:(struct CGPoint { double x0; double x1; })a0 fromPage:(id)a1;
- (struct CGPoint { double x0; double x1; })convertPoint:(struct CGPoint { double x0; double x1; })a0 toPage:(id)a1;
- (void)didInsertPage:(id)a0 atIndex:(unsigned long long)a1;
- (void)didRemovePage:(id)a0 atIndex:(unsigned long long)a1;
- (id)findPageViewControllerForPageIndex:(long long)a0;
- (void)forceUpdateActivePageIndex:(unsigned long long)a0 withMaxDuration:(double)a1;
- (void)goToPage:(id)a0 direction:(long long)a1 animated:(BOOL)a2;
- (id)initWithPDFView:(id)a0 pageIndex:(unsigned long long)a1 navigationOrientation:(long long)a2 withRenderingProperties:(id)a3 andOptions:(id)a4;
- (double)maxScaleFactor;
- (id)pageBackgroundManager;
- (id)pageForPoint:(struct CGPoint { double x0; double x1; })a0 nearest:(BOOL)a1;
- (id)pageViewForPageAtIndex:(unsigned long long)a0;
- (void)recieveBackgroundImage:(id)a0 atBackgroundQuality:(int)a1 forPage:(id)a2;
- (void)setAutoScales:(BOOL)a0;
- (void)setMinScaleFactor:(double)a0 withMaxScaleFactor:(double)a1;
- (void)setScrollViewScrollEnabled:(BOOL)a0;
- (void)updateScrollViews;

@end
