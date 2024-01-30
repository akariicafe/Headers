@class PDFPageViewAnnotationControllerPrivate;

@interface PDFPageViewAnnotationController : NSObject {
    PDFPageViewAnnotationControllerPrivate *_private;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)activeAnnotation;
- (void)_didRotatePageNotification:(id)a0;
- (void)_addPopupForAnnotation:(id)a0;
- (void)_rotateActiveAnnotation;
- (void)removeControlForAnnotation:(id)a0;
- (void)addControlForAnnotation:(id)a0;
- (id)_getIndexSetIntersectionBetween:(id)a0 and:(id)a1;
- (BOOL)_indexSet:(id)a0 touchesIndexSet:(id)a1;
- (id)markupAnnotationsForIndexSet:(id)a0;
- (void)_propagateNotesForIndexSet:(id)a0;
- (id)_markupAnnotationsForExactIndexSet:(id)a0;
- (id)initWithPDFPageView:(id)a0;
- (void)addMarkupWithStyle:(unsigned long long)a0 forIndexSet:(id)a1;

@end
