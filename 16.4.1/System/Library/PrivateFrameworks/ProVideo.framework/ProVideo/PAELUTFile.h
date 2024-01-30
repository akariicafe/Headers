@interface PAELUTFile : PAEPhotosFilters

- (BOOL)addParameters;
- (id)initWithAPIManager:(id)a0;
- (struct HGRef<HGBitmap> { struct HGBitmap *x0; })lutBitmapForFilter:(int)a0 lutDimensions:(int *)a1;

@end
