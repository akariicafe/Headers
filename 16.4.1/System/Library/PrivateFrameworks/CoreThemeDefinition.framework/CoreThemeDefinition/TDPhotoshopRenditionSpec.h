@class TDPhotoshopLayer, TDImageColorHistogram;

@interface TDPhotoshopRenditionSpec : TDRenditionSpec

@property (retain, nonatomic) TDPhotoshopLayer *photoshopLayer;
@property (nonatomic) BOOL isTintable;
@property (retain, nonatomic) TDImageColorHistogram *histogram;

- (id)debugDescription;
- (void)dealloc;
- (int)_layerIndexInPSDImage:(id)a0;
- (void)_logError:(id)a0;
- (void)_logExtra:(id)a0;
- (void)_logWarning:(id)a0;
- (BOOL)_sliceRectanglesForPSDImage:(id)a0 rowsPerRendition:(int *)a1 columnsPerRendition:(int *)a2 originalColumnWidth:(int *)a3 newColumnWidth:(int *)a4 originalRowHeight:(int *)a5 newRowHeight:(int *)a6 originalColumnX:(int *)a7 originalRowY:(int *)a8 newRenditionSize:(struct { int x0; int x1; } *)a9 newSliceCount:(int *)a10 renditionRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a11 throwawaySliceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a12;
- (struct { struct CGSize { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; })_subtractThrowawaySliceFromMetricsIfNeeded:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 metrics:(struct { struct CGSize { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; })a1 renditionRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)copyAttributesInto:(id)a0;
- (id)copyDataFromAttributes;
- (id)createCSIRepresentationFromGradientPSDImage:(id)a0 withCompression:(BOOL)a1 colorSpaceID:(unsigned long long)a2;
- (id)createCSIRepresentationFromPSDImage:(id)a0 withCompression:(BOOL)a1 colorSpaceID:(unsigned long long)a2;
- (id)createCSIRepresentationFromPSDImage:(id)a0 withCompression:(BOOL)a1 edgeMetricsMask:(id)a2 textMetricsMask:(id)a3 baselineMetricsMask:(id)a4 auxiliary1MetricsMask:(id)a5 auxiliary2MetricsMask:(id)a6 colorSpaceID:(unsigned long long)a7 allowsPaletteImageCompression:(BOOL)a8 allowsHevcCompression:(BOOL)a9 allowsDeepmapImageCompression:(BOOL)a10 allowsDeepmap2ImageCompression:(BOOL)a11;
- (id)createCSIRepresentationWithCompression:(BOOL)a0 colorSpaceID:(unsigned long long)a1 document:(id)a2;
- (void)drawPackableRenditionInContext:(struct CGContext { } *)a0 withDocument:(id)a1;
- (int)psdSliceNumberForRenditionRow:(int)a0 sliceRow:(int)a1 renditionColumn:(int)a2 sliceColumn:(int)a3 rowsPerRendition:(int)a4 columnsPerRendition:(int)a5 renditionColumnCount:(int)a6;
- (void)setAttributesFromCopyData:(id)a0;
- (BOOL)updatePackingPropertiesWithDocument:(id)a0;

@end
