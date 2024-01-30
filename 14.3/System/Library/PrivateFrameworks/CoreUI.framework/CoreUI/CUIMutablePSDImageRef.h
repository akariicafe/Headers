@interface CUIMutablePSDImageRef : CUIPSDImageRef

- (void)setFileURL:(id)a0;
- (BOOL)saveWithCompletionHandler:(id /* block */)a0;
- (void)addLayer:(id)a0;
- (void)addLayoutMetricsChannel:(id)a0;
- (void)addOrUpdateSlicesWithSliceRects:(id)a0;
- (struct __CFData { } *)copyDefaultICCProfileData;
- (unsigned int)psdLayerBlendModeForCGBlendMode:(int)a0;
- (struct PSDGradient { double x0; double x1; BOOL x2; BOOL x3; BOOL x4; double x5; double x6; double x7; int x8; struct PSDColorRGBA { double x0; double x1; double x2; double x3; } x9; struct vector<PSDGradientColorStop, std::__1::allocator<PSDGradientColorStop> > { struct PSDGradientColorStop *x0; struct PSDGradientColorStop *x1; struct __compressed_pair<PSDGradientColorStop *, std::__1::allocator<PSDGradientColorStop> > { struct PSDGradientColorStop *x0; } x2; } x10; struct vector<PSDGradientOpacityStop, std::__1::allocator<PSDGradientOpacityStop> > { struct PSDGradientOpacityStop *x0; struct PSDGradientOpacityStop *x1; struct __compressed_pair<PSDGradientOpacityStop *, std::__1::allocator<PSDGradientOpacityStop> > { struct PSDGradientOpacityStop *x0; } x2; } x11; } *)newPSDGradientFromCUIPSDGradient:(id)a0;
- (unsigned int)newUInt32CArray:(unsigned int **)a0 withNSArray:(id)a1 prependNumber:(id)a2 appendNumber:(id)a3;
- (unsigned int)newSliceRectsArray:(struct PSDRect **)a0 withSliceRects:(id)a1;
- (unsigned int)newSliceRectsArray:(struct PSDRect **)a0 withXCutPositions:(id)a1 yCutPositions:(id)a2;
- (void)insertLayoutMetricsChannel:(id)a0 atIndex:(unsigned int)a1;
- (void)deleteLayoutMetricsChannelAtIndex:(unsigned int)a0;
- (void)insertLayer:(id)a0 atIndex:(unsigned int)a1;
- (void)deleteLayerAtIndex:(unsigned int)a0;
- (void)addOrUpdateSlicesWithXCutPositions:(id)a0 yCutPositions:(id)a1;
- (void)updateSliceName:(id)a0 atIndex:(unsigned int)a1;
- (BOOL)saveToURL:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithPixelWidth:(unsigned long long)a0 pixelHeight:(unsigned long long)a1;

@end
