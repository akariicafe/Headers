@interface UIPDFUnderlineAnnotation : UIPDFMarkupAnnotation

- (void)drawLayer:(id)a0 inContext:(struct CGContext { } *)a1;
- (Class)viewClass;
- (void)drawInContext:(struct CGContext { } *)a0;
- (int)annotationType;
- (BOOL)recognizeGestures;
- (void)drawLayerUpright:(id)a0 inContext:(struct CGContext { } *)a1 selection:(id)a2 rectangles:(unsigned long long)a3;
- (void)drawLayerRotated:(id)a0 inContext:(struct CGContext { } *)a1 selection:(id)a2 rectangles:(unsigned long long)a3;

@end
