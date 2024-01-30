@class NSString, PDFDocumentViewPrivate;

@interface PDFDocumentView : PDFTextInputView <PDFPageBackgroundManagerDelegate, PDFDocumentPageChangeDelegate, PDFTextInputDelegate> {
    PDFDocumentViewPrivate *_private;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)document;
- (void)setDocument:(id)a0;
- (id)pdfView;
- (void)updateVisibility;
- (void)_updateVisibility;
- (void)dealloc;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)pageViews;
- (void).cxx_destruct;
- (void)willForceUpdate;
- (id)_createPageView:(id)a0;
- (struct CGPoint { double x0; double x1; })_pixelAlignPageFrameOrigin:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_reAddPageOverlaysStartingAtIndex:(unsigned long long)a0;
- (void)_removePageOverlaysStartingAtIndex:(unsigned long long)a0;
- (void)_shiftPagesAtIndex:(unsigned long long)a0 downwards:(BOOL)a1;
- (void)_updateVisibilityDelegateForVisiblePageView:(id)a0 atIndex:(unsigned long long)a1;
- (id)backgroundImageForPage:(id)a0 withQuality:(int *)a1;
- (void)changedBoundsForBoxNotification:(id)a0;
- (id)createPageViewForPageAtIndex:(unsigned long long)a0 withFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)didInsertPage:(id)a0 atIndex:(unsigned long long)a1;
- (void)didRemovePage:(id)a0 atIndex:(unsigned long long)a1;
- (void)didRotatePageNotification:(id)a0;
- (void)didSwapPage:(id)a0 atIndex:(unsigned long long)a1 forPage:(id)a2 atIndex:(unsigned long long)a3;
- (struct CGSize { double x0; double x1; })documentViewSize;
- (void)forceUpdateActivePageIndex:(unsigned long long)a0 withMaxDuration:(double)a1;
- (id)initWithPDFView:(id)a0;
- (void)layoutDocumentView;
- (id)pageBackgroundManager;
- (id)pageViewForPageAtIndex:(unsigned long long)a0;
- (void)previewRotateShiftPages:(double)a0;
- (void)recieveBackgroundImage:(id)a0 atBackgroundQuality:(int)a1 forPage:(id)a2;
- (void)removePageViewForPageAtIndex:(unsigned long long)a0;
- (void)willInsertPage:(id)a0 atIndex:(unsigned long long)a1;
- (void)willRemovePage:(id)a0 atIndex:(unsigned long long)a1;
- (void)willSwapPage:(id)a0 atIndex:(unsigned long long)a1 forPage:(id)a2 atIndex:(unsigned long long)a3;

@end
