@class PKDrawing, AKInkAnnotation;

@interface PDFAnnotationPKDrawing : PDFAnnotation {
    AKInkAnnotation *_akInkAnnotation;
}

@property (retain, nonatomic) PKDrawing *drawing;

- (void).cxx_destruct;
- (struct __CFDictionary { } *)dictionaryRef;
- (void)drawWithBox:(long long)a0 inContext:(struct CGContext { } *)a1;
- (id)initWithCGPDFAnnotation:(struct CGPDFAnnotation { } *)a0 forPage:(id)a1;
- (id)initWithPKDrawing:(id)a0 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end
