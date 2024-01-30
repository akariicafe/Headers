@class NSString, PDFPageViewControllerPrivate;

@interface PDFPageViewController : UIViewController <UIScrollViewDelegate, PDFTextInputDelegate> {
    PDFPageViewControllerPrivate *_private;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)scaleFactor;
- (id)pageView;
- (void)scrollViewDidZoom:(id)a0;
- (id)scrollView;
- (id)selection;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (id)pdfView;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;
- (void)setScaleFactor:(double)a0;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)scrollViewDidEndZooming:(id)a0 withView:(id)a1 atScale:(double)a2;
- (id)textInputView;
- (void)viewDidAppear:(BOOL)a0;
- (id)viewForZoomingInScrollView:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)PDFPage;
- (void)setSelection:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)scrollViewWillBeginZooming:(id)a0 withView:(id)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)viewWillLayoutSubviews;
- (void)setPDFView:(id)a0;
- (void)enforceAutoScaleFactor;
- (double)autoScaleFactor;
- (void)setAutoScales:(BOOL)a0;
- (void)setBackgroundImage:(id)a0 atBackgroundQuality:(int)a1;
- (void)changedBoundsForBoxNotification:(id)a0;
- (void)didRotatePageNotification:(id)a0;
- (void)_removePDFView;
- (void)_buildPDFPageView;
- (void)_updateAnnotations;
- (void)removeAKOverlay;
- (void)_centerAlign;
- (void)_setupGestureRecognizerDependencies;
- (void)setRenderingProperties:(id)a0;
- (void)setPageBreakMargins:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)setPDFPage:(id)a0;
- (void)setMinScaleFactor:(double)a0 withMaxScaleFactor:(double)a1;

@end
