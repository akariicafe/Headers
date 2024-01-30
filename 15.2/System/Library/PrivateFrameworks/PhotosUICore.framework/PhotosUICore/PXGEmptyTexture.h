@interface PXGEmptyTexture : PXGBaseTexture

- (struct CGImage { } *)imageRepresentation;
- (struct CGSize { double x0; double x1; })pixelSize;
- (long long)estimatedByteSize;
- (int)presentationType;
- (BOOL)isOpaque;

@end
