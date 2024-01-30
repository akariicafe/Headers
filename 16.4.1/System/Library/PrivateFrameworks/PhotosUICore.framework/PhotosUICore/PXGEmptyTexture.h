@interface PXGEmptyTexture : PXGBaseTexture

- (struct CGImage { } *)imageRepresentation;
- (long long)estimatedByteSize;
- (BOOL)isOpaque;
- (int)presentationType;
- (struct CGSize { double x0; double x1; })pixelSize;

@end
