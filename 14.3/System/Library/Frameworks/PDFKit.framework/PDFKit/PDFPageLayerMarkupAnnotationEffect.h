@interface PDFPageLayerMarkupAnnotationEffect : PDFPageLayerEffect

- (id)annotation;
- (id)UUID;
- (void)update;
- (void)removeFromSuperlayer;
- (void)_updateNoteLayer;

@end
