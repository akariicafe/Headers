@class PDFExtensionViewControllerPrivate;

@interface PDFExtensionViewController : UIViewController {
    PDFExtensionViewControllerPrivate *_private;
}

+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;

- (void)selectAll;
- (void)setMaximumZoomScale:(double)a0;
- (void)setMinimumZoomScale:(double)a0;
- (void)viewDidLoad;
- (void)copy;
- (void)_updatePageCount;
- (id)init;
- (void).cxx_destruct;
- (void)cancelFindString;
- (void)cancelFindStringWithHighlightsCleared:(BOOL)a0;
- (void)findString:(id)a0 withOptions:(unsigned long long)a1;
- (void)focusOnSearchResultAtIndex:(unsigned long long)a0;
- (void)goToPageIndex:(long long)a0;
- (void)didMatchString:(id)a0;
- (void)documentDidEndDocumentFind:(id)a0;
- (void)setDocumentData:(id)a0;
- (void)clearSearchHighlights;
- (void)_annotationHitNotification:(id)a0;
- (void)_annotationLongPressNotification:(id)a0;
- (void)_goToDestination:(id)a0;
- (void)_goToPage:(id)a0;
- (void)_pageChangedNotification:(id)a0;
- (void)_pdfViewZoomToRect:(id)a0;
- (void)_selectionChangedNotification:(id)a0;
- (void)_selectionPointsChangedNotification:(id)a0;
- (void)_setupDocumentViewSize;
- (void)_textSelectionDidCopyDataNotification:(id)a0;
- (void)_textSelectionDidCopyStringNotification:(id)a0;
- (void)_textSelectionShowTextSelectionMenu:(id)a0;
- (void)_updateDocumentIsLocked;
- (void)_updateTextSelectionPoints;
- (void)_zoomToRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)handleGesture:(unsigned long long)a0 state:(long long)a1 location:(struct CGPoint { double x0; double x1; })a2 locationOfFirstTouch:(struct CGPoint { double x0; double x1; })a3 isIndirectTouch:(BOOL)a4;
- (void)pointerRegionForLocation:(struct CGPoint { double x0; double x1; })a0;
- (void)setupPDFView;
- (void)snapshotViewRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forWidth:(double)a1 afterScreenUpdates:(BOOL)a2;
- (void)unlockWithPassword:(id)a0;
- (void)updatePDFViewLayout:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 scrollViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 safeAreaInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2 zoomScale:(double)a3;

@end
