@interface CUIMutablePSDImageRef : CUIPSDImageRef

- (BOOL)saveWithCompletionHandler:(id /* block */)a0;
- (void)setFileURL:(id)a0;
- (void)addLayoutMetricsChannel:(id)a0;
- (void)addOrUpdateSlicesWithSliceRects:(id)a0;
- (struct __CFData { } *)copyDefaultICCProfileData;
- (unsigned int)psdLayerBlendModeForCGBlendMode:(int)a0;
- (void *)newPSDGradientFromCUIPSDGradient:(id)a0;
- (void)deleteLayerAtIndex:(unsigned int)a0;
- (unsigned int)newUInt32CArray:(unsigned int **)a0 withNSArray:(id)a1 prependNumber:(id)a2 appendNumber:(id)a3;
- (unsigned int)newSliceRectsArray:(struct PSDRect **)a0 withSliceRects:(id)a1;
- (unsigned int)newSliceRectsArray:(struct PSDRect **)a0 withXCutPositions:(id)a1 yCutPositions:(id)a2;
- (void)insertLayoutMetricsChannel:(id)a0 atIndex:(unsigned int)a1;
- (void)insertLayer:(id)a0 atIndex:(unsigned int)a1;
- (void)deleteLayoutMetricsChannelAtIndex:(unsigned int)a0;
- (void)addOrUpdateSlicesWithXCutPositions:(id)a0 yCutPositions:(id)a1;
- (void)updateSliceName:(id)a0 atIndex:(unsigned int)a1;
- (BOOL)saveToURL:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithPixelWidth:(unsigned long long)a0 pixelHeight:(unsigned long long)a1;
- (void)addLayer:(id)a0;

@end
