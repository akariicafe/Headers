@interface UIPDFLinkAnnotation : UIPDFMarkupAnnotation

- (id)url;
- (unsigned long long)pageNumber;
- (unsigned long long)getDestination:(struct CGPDFDictionary { } *)a0;
- (unsigned long long)getNamedDestination:(struct CGPDFDictionary { } *)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })linkRectangle;
- (id)newBaseURL;
- (BOOL)quadPoints:(struct CGPDFArray { } *)a0 within:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (BOOL)recognizeGestures;
- (BOOL)shouldRecognizeTapOrPress:(struct CGPoint { double x0; double x1; })a0;

@end
