@interface PDFPageLayerMarkupAnnotationEffect : PDFPageLayerEffect

- (id)annotation;
- (void)removeFromSuperlayer;
- (id)UUID;
- (void)update;
- (void)_updateNoteLayer;

@end
