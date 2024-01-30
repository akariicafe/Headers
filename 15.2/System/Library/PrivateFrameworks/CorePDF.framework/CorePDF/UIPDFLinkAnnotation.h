@interface UIPDFLinkAnnotation : UIPDFMarkupAnnotation

- (id)url;
- (unsigned long long)pageNumber;
- (BOOL)recognizeGestures;
- (BOOL)shouldRecognizeTapOrPress:(struct CGPoint { double x0; double x1; })a0;
- (id)newBaseURL;
- (unsigned long long)getDestination:(struct CGPDFDictionary { } *)a0;
- (unsigned long long)getNamedDestination:(struct CGPDFDictionary { } *)a0;
- (BOOL)quadPoints:(struct CGPDFArray { } *)a0 within:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })linkRectangle;

@end
