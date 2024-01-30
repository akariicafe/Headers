@interface CUIPSDLayerRef : CUIPSDLayerBaseRef

- (void)dealloc;
- (id)colorFill;
- (id)initWithImageRef:(id)a0 layerIndex:(unsigned int)a1;
- (id)fillSample;
- (struct CGImage { } *)createCGImage;
- (id)imageIsZeroSizeImage:(BOOL *)a0;
- (id)imageFromSlice:(unsigned int)a0;
- (id)layerEffects;
- (id)imageFromSlice:(unsigned int)a0 isEmptyImage:(BOOL *)a1;
- (id)patternFromSlice:(unsigned int)a0;
- (id)patternFromSlice:(unsigned int)a0 isZeroSizeImage:(BOOL *)a1;
- (id)maskFromSlice:(unsigned int)a0;
- (id)gradient;
- (id)image;

@end
