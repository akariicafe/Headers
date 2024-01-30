@class NSString, PDFPageViewControllerPrivate;

@interface PDFPageViewController : UIViewController <UIScrollViewDelegate, PDFTextInputDelegate> {
    PDFPageViewControllerPrivate *_private;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)textInputView;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (double)scaleFactor;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)scrollViewDidEndZooming:(id)a0 withView:(id)a1 atScale:(double)a2;
- (id)scrollView;
- (id)pageView;
- (id)pdfView;
- (id)viewForZoomingInScrollView:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewWillBeginZooming:(id)a0 withView:(id)a1;
- (void)setScaleFactor:(double)a0;
- (void)dealloc;
- (id)selection;
- (void)setSelection:(id)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)viewWillLayoutSubviews;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void).cxx_destruct;
- (void)scrollViewDidZoom:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)_centerAlign;
- (id)PDFPage;
- (double)autoScaleFactor;
- (void)removeAKOverlay;
- (void)_buildPDFPageView;
- (void)_removePDFView;
- (void)_setupGestureRecognizerDependencies;
- (void)_updateAnnotations;
- (void)changedBoundsForBoxNotification:(id)a0;
- (void)didRotatePageNotification:(id)a0;
- (void)enforceAutoScaleFactor;
- (void)setAutoScales:(BOOL)a0;
- (void)setBackgroundImage:(id)a0 atBackgroundQuality:(int)a1;
- (void)setMinScaleFactor:(double)a0 withMaxScaleFactor:(double)a1;
- (void)setPDFPage:(id)a0;
- (void)setPDFView:(id)a0;
- (void)setPageBreakMargins:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)setRenderingProperties:(id)a0;

@end
