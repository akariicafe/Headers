@class PDFAKOverlayAdaptorPrivate_ios;

@interface PDFAKOverlayAdaptor_ios : PDFAKOverlayAdaptor {
    PDFAKOverlayAdaptorPrivate_ios *_privateIOS;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithPDFView:(id)a0;
- (void)_teardownGestureRecognizersForView:(id)a0 andDocument:(id)a1;
- (void)_setupGestureRecognizersForView:(id)a0 andDocument:(id)a1;
- (void)_installOverlayForPageView:(id)a0 ofPage:(id)a1 atIndex:(unsigned long long)a2;
- (void)_uninstallOverlayAtIndex:(unsigned long long)a0;
- (void)_resetAnimationProperties;
- (void)annotationWillBeginEditing:(id)a0;
- (void)annotationDidEndEditing:(id)a0;
- (void)adjustScrollViewForKeyboardNotification:(id)a0;
- (void)updatePDFScrollViewMinimumNumberOfTouches;
- (void)_setupGestureRecognizersForPageAtIndex:(unsigned long long)a0;
- (void)_teardownGestureRecognizersForPageAtIndex:(unsigned long long)a0;
- (unsigned long long)_scrollViewMinimumNumberOfTouches;
- (id)_scrollViewRecognizersForPageAtIndex:(unsigned long long)a0;
- (void)_adjustScrollViewWithAnimationProperties:(struct { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; double x1; double x2; })a0 delta:(double)a1;
- (unsigned long long)pageIndexForAnnotation:(id)a0;
- (void)addDrawingGestureRecognizer:(id)a0 forPageAtIndex:(unsigned long long)a1;
- (void)removeDrawingGestureRecognizer:(id)a0 forPageAtIndex:(unsigned long long)a1;
- (void)updateDrawingGestureRecognizer:(id)a0 forPageAtIndex:(unsigned long long)a1 withPriority:(BOOL)a2;

@end
