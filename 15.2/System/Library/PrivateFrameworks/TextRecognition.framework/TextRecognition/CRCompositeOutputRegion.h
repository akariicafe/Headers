@interface CRCompositeOutputRegion : CROutputRegion

- (id)outputRegionWithContentsBetweenStartPoint:(struct CGPoint { double x0; double x1; })a0 endPoint:(struct CGPoint { double x0; double x1; })a1;
- (id)outputRegionWithContentsOfCharacterRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)outputRegionWithContentsOfQuad:(id)a0;
- (void)setShouldComputeBoundsFromChildren:(BOOL)a0;

@end
