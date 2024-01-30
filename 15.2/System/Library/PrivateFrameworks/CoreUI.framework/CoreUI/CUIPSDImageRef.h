@class NSString, _CUIPSDSublayerInfo;

@interface CUIPSDImageRef : NSObject {
    BOOL _parsedForLayers;
    _CUIPSDSublayerInfo *_rootLayers;
}

@property (nonatomic) int file;
@property (copy, nonatomic) NSString *path;
@property (nonatomic) void *psd;

+ (BOOL)isValidPSDResourceAtPath:(id)a0 withLayerCount:(unsigned int *)a1;
+ (BOOL)isValidPSDResourceAtPath:(id)a0;
+ (BOOL)isValidPSDResourceAtPath:(id)a0 withLayerCount:(unsigned int *)a1 validateLayers:(BOOL)a2;
+ (BOOL)isValidPSDResourceAtPath:(id)a0 withImageInfo:(struct _PSDImageInfo { unsigned int x0; unsigned int x1; unsigned short x2; unsigned short x3; unsigned short x4; int x5; } *)a1;

- (id)initWithPath:(id)a0;
- (id)layerEnumerator;
- (void)enumerateLayersUsingBlock:(id /* block */)a0;
- (id)metadataString;
- (void *)psdFile;
- (struct CGSize { double x0; double x1; })size;
- (id)layerNames;
- (struct _PSDImageInfo { unsigned int x0; unsigned int x1; unsigned short x2; unsigned short x3; unsigned short x4; int x5; })imageInfo;
- (BOOL)openImageFile;
- (BOOL)loadPSDFileWithLayers:(BOOL)a0;
- (void *)_psdFileWithLayers:(BOOL)a0;
- (void *)psdFileForComposite;
- (struct CGImage { } *)_copyCGImageAtAbsoluteIndex:(unsigned int)a0;
- (id)_imageAtAbsoluteIndex:(unsigned int)a0 isZeroSizeImage:(BOOL *)a1;
- (id)_imageFromSlice:(unsigned int)a0 atAbsoluteIndex:(unsigned int)a1 isEmptyImage:(BOOL *)a2;
- (id)_patternFromSlice:(unsigned int)a0 atAbsoluteIndex:(unsigned int)a1 isZeroSizeImage:(BOOL *)a2;
- (id)_createMaskFromSlice:(unsigned int)a0 atAbsoluteIndex:(unsigned int)a1;
- (struct CGImage { } *)createCompositeCGImage;
- (id)imageFromRef:(struct CGImage { } *)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_boundsAtAbsoluteIndex:(unsigned int)a0;
- (int)_layerIndexFromLayerNames:(id)a0 indexRangeBegin:(int)a1 indexRangeEnd:(int)a2 isTopLevel:(BOOL)a3;
- (id)maskFromCompositeAlphaChannel:(long long)a0;
- (struct { struct CGSize { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; })metricsInMask:(id)a0 forRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)_layerRefAtAbsoluteIndex:(unsigned int)a0;
- (BOOL)_visibilityAtAbsoluteIndex:(unsigned int)a0;
- (id)_layerInfo;
- (id)_namesOfSublayers:(id)a0;
- (id)_fillSampleAtAbsoluteIndex:(unsigned int)a0;
- (id)_gradientAtAbsoluteIndex:(unsigned int)a0;
- (id)_copySublayerInfoAtAbsoluteIndex:(unsigned int)a0 atRoot:(BOOL)a1;
- (BOOL)_treatDividerAsLayer;
- (int)cgBlendModeForPSDLayerOrLayerEffectBlendMode:(unsigned int)a0;
- (struct CGImage { } *)createCGImageAtLayer:(unsigned int)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundsAtLayer:(unsigned int)a0;
- (struct CGColorSpace { } *)copyColorSpace;
- (id)fillSampleAtLayer:(unsigned int)a0;
- (id)colorFromDocumentColor:(double *)a0;
- (id)imageAtLayer:(unsigned int)a0;
- (id)_colorOverlayFromLayerEffectsInfo:(void *)a0;
- (id)_gradientOverlayFromLayerEffectsAtAbsoluteIndex:(unsigned int)a0;
- (id)_dropShadowFromLayerEffectsInfo:(void *)a0;
- (id)_innerShadowFromLayerEffectsInfo:(void *)a0;
- (id)_innerGlowFromLayerEffectsInfo:(void *)a0;
- (id)_outerGlowFromLayerEffectsInfo:(void *)a0;
- (id)_bevelEmbossFromLayerEffectsInfo:(void *)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundsForSlice:(unsigned int)a0;
- (id)imageAtLayer:(unsigned int)a0 isZeroSizeImage:(BOOL *)a1;
- (id)imageFromSlice:(unsigned int)a0 atLayer:(unsigned int)a1;
- (id)imageFromSlice:(unsigned int)a0 atAbsoluteLayer:(unsigned int)a1;
- (id)imageFromSlice:(unsigned int)a0 atLayer:(unsigned int)a1 isEmptyImage:(BOOL *)a2;
- (id)patternFromSlice:(unsigned int)a0 atLayer:(unsigned int)a1;
- (id)compositeImage;
- (id)patternFromSlice:(unsigned int)a0 atLayer:(unsigned int)a1 isZeroSizeImage:(BOOL *)a2;
- (id)maskFromSlice:(unsigned int)a0 atLayer:(unsigned int)a1;
- (int)absoluteLayerIndexFromLayerNames:(id)a0;
- (struct { struct CGSize { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; })metricsInAlphaChannel:(long long)a0 forRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (BOOL)visibilityAtLayer:(unsigned int)a0;
- (id)layerRefAtIndex:(unsigned int)a0;
- (unsigned int)numberOfSlices;
- (unsigned int)numberOfChannels;
- (id)gradientAtLayer:(unsigned int)a0;
- (unsigned int)_absoluteIndexOfRootLayer:(unsigned int)a0;
- (void *)_psdLayerRecordAtAbsoluteIndex:(unsigned int)a0;
- (void)_logInvalidAbsoluteIndex:(unsigned int)a0 psd:(void *)a1;
- (id)_nameAtAbsoluteIndex:(unsigned int)a0;
- (double)_opacityAtAbsoluteIndex:(unsigned int)a0;
- (double)_fillOpacityAtAbsoluteIndex:(unsigned int)a0;
- (int)_blendModeAtAbsluteIndex:(unsigned int)a0;
- (id)_layerEffectsAtAbsoluteIndex:(unsigned int)a0;
- (void)dealloc;
- (unsigned int)numberOfLayers;

@end
