@class TSCH3DLightingModel, TSCH3DFillSetIdentifier, NSNumber, TSDFill;

@interface TSCH3DFill : TSDFill {
    TSCH3DLightingModel *_lightingModel;
    TSDFill *_fallbackFill;
    TSDFill *_cachedImageFill;
    struct CGSize { double width; double height; } _cachedImageFillSize;
    TSDFill *_swatchFill;
}

@property (retain, nonatomic) NSNumber *percentage;
@property (readonly, nonatomic) float percentageValue;
@property (readonly) TSCH3DLightingModel *lightingModel;
@property (retain, nonatomic) TSCH3DFillSetIdentifier *identifier;

+ (id)fill;
+ (id)instanceWithArchive:(const void *)a0 unarchiver:(id)a1;
+ (id)fillWithIdentifier:(id)a0;
+ (id)fillWithLightingModel:(id)a0 identifier:(id)a1;
+ (id)fillWithSageFillData:(id)a0;
+ (id)lightingModelWithSageFillData:(id)a0;

- (BOOL)isOpaque;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (void).cxx_destruct;
- (id)referenceColor;
- (long long)fillType;
- (BOOL)hasCompleteData;
- (void)paintPath:(struct CGPath { } *)a0 inContext:(struct CGContext { } *)a1;
- (void)paintRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inContext:(struct CGContext { } *)a1;
- (void)drawSwatchInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inContext:(struct CGContext { } *)a1;
- (id)initWithArchive:(const void *)a0 unarchiver:(id)a1;
- (void)paintPath:(struct CGPath { } *)a0 naturalBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 inContext:(struct CGContext { } *)a2 isPDF:(BOOL)a3;
- (void)didInitFromSOS;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (void)nonatomicallyClearLightingModel;
- (id)swatchFillWithSize:(struct CGSize { double x0; double x1; })a0 scaleFactor:(double)a1;
- (void)assignQuicklookColorToMaterialDiffuseColorForLightingModel:(id)a0;
- (id)convertForChartSeriesType:(id)a0 context:(id)a1;
- (id)convertToSimpleTSDFillWithSize:(unsigned long long)a0 context:(id)a1;
- (BOOL)identifierReferencesUnavailableLocalBundle;
- (id)initWithLightingModel:(id)a0 identifier:(id)a1;
- (id)lightenByPercent:(float)a0;
- (void)nonatomicallySetLightingModel:(id)a0;
- (id)p_convertToTSDFillWithSize:(unsigned long long)a0 technique:(unsigned long long)a1;
- (id)p_convertToTSDFillWithSize:(unsigned long long)a0 technique:(unsigned long long)a1 context:(id)a2;
- (id)p_iconFill;
- (id)p_imageFillForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 context:(struct CGContext { } *)a1;
- (id)p_imageFillForSize:(struct CGSize { double x0; double x1; })a0 context:(id)a1;
- (id)p_lazyLightingModel;
- (void)paintPath:(struct CGPath { } *)a0 inContext:(struct CGContext { } *)a1 offset:(struct CGPoint { double x0; double x1; })a2;
- (id)renderingLightingModelWithLightings:(id)a0;
- (id)representativeDiffuseColor;
- (id)sageFillData;
- (void)setFallbackFill:(id)a0;
- (BOOL)tsch_hasAllResources;

@end
