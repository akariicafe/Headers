@interface PXGEmptyTexture : PXGBaseTexture

- (struct CGImage { } *)imageRepresentation;
- (struct CGSize { double x0; double x1; })pixelSize;
- (long long)estimatedByteSize;
- (BOOL)isOpaque;
- (int)presentationType;

@end
