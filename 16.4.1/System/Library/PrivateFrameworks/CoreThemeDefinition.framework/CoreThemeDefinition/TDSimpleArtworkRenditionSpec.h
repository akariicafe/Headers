@class NSOrderedSet, TDPNGAsset, TDThemeCompressionType, NSString, TDImageColorHistogram;

@interface TDSimpleArtworkRenditionSpec : TDRenditionSpec {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _alignmentRect;
}

@property (nonatomic) BOOL allowsMultiPassEncoding;
@property (nonatomic) BOOL allowsOptimalRowbytesPacking;
@property (nonatomic) BOOL allowsCompactCompression;
@property (nonatomic) BOOL allowsPaletteImageCompression;
@property (nonatomic) BOOL allowsHevcCompression;
@property (nonatomic) BOOL allowsDeepmapCompression;
@property (nonatomic) BOOL allowsDeepmap2Compression;
@property (retain, nonatomic) TDPNGAsset *asset;
@property (retain, nonatomic) NSOrderedSet *slices;
@property (retain, nonatomic) TDThemeCompressionType *compressionType;
@property (retain, nonatomic) TDImageColorHistogram *histogram;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } alignmentRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } primitiveAlignmentRect;
@property (retain, nonatomic) NSString *alignmentRectString;
@property (retain, nonatomic) NSString *originalImageSizeString;
@property (retain, nonatomic) NSString *nonAlphaImageAreaString;
@property (retain, nonatomic) NSString *physicalSizeInMetersString;
@property (nonatomic) struct CGSize { double x0; double x1; } physicalSizeInMeters;
@property (nonatomic) BOOL isTintable;
@property (nonatomic) BOOL isBackstop;
@property (nonatomic) double postScaleFactor;

+ (void)initialize;

- (void)awakeFromFetch;
- (void)dealloc;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })alignmentRect;
- (struct CGSize { double x0; double x1; })_scaleRecognitionImageFromSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGImage { } *)_createImageRefWithURL:(id)a0 andDocument:(id)a1 format:(unsigned int *)a2 vectorBased:(BOOL *)a3;
- (struct { struct CGSize { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; })_edgeMetricsForAlignmentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 originalRenditionSize:(struct { int x0; int x1; })a1 newRenditionSize:(struct { int x0; int x1; })a2;
- (void)_logError:(id)a0;
- (void)_logExtra:(id)a0;
- (void)_logWarning:(id)a0;
- (int)_rawPixelFormatOfCGImage:(struct CGImage { } *)a0;
- (id)_sliceRectanglesForRenditionSize:(struct { int x0; int x1; })a0 unadjustedSliceRectangles:(id *)a1 imageSlicesNeedAdjustment:(BOOL *)a2 newRenditionSize:(struct { int x0; int x1; } *)a3;
- (id)_slicesToUseForCSI;
- (id)associatedFileModificationDateWithDocument:(id)a0;
- (BOOL)canBePackedWithDocument:(id)a0;
- (void)copyAttributesInto:(id)a0;
- (id)createCSIRepresentationWithCompression:(BOOL)a0 colorSpaceID:(unsigned long long)a1 document:(id)a2;
- (void)drawPackableRenditionInContext:(struct CGContext { } *)a0 withDocument:(id)a1;
- (void)setAlignmentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)updatePackingPropertiesWithDocument:(id)a0;

@end
