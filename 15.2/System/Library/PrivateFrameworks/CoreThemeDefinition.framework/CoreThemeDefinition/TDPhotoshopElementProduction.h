@class CUIImage, CUIPSDImageRef, NSDate, TDPhotoshopAsset, NSMutableAttributedString;

@interface TDPhotoshopElementProduction : TDElementProduction <TDElementAttributes> {
    NSMutableAttributedString *log;
    CUIPSDImageRef *psdImageRef;
    NSDate *_cachedImageDate;
    CUIImage *_edgeMetricsMask;
    CUIImage *_textMetricsMask;
    CUIImage *_baselineMetricsMask;
    CUIImage *_auxiliary1MetricsMask;
    CUIImage *_auxiliary2MetricsMask;
    BOOL _didCheckForMetricsMasks;
}

@property (retain, nonatomic) TDPhotoshopAsset *asset;

+ (unsigned int)sliceRowsPerRendition:(long long)a0;
+ (unsigned int)sliceColumnsPerRendition:(long long)a0;

- (void)setIsActive:(id)a0;
- (id)columnCount;
- (void)setColumnCount:(id)a0;
- (id)rowCount;
- (id)relativePath;
- (id)isActive;
- (id)log;
- (void)dealloc;
- (void)setRowCount:(id)a0;
- (void)copyAttributesInto:(id)a0;
- (id)copyDataFromAttributes;
- (void)setAttributesFromCopyData:(id)a0;
- (id)baseKeySpec;
- (void)addDrawingLayerIndex:(id)a0 themeLayer:(id)a1 toIndices:(id)a2 layers:(id)a3 lowestIndex:(long long *)a4;
- (id)psdImageRefWithDocument:(id)a0;
- (void)_loadMetricsMasksWithDocument:(id)a0;
- (void)appendToLog:(id)a0;
- (void)getDrawingLayerIndices:(id *)a0 themeLayers:(id *)a1 lowestIndex:(long long *)a2;
- (void)fillIterationKeyAttribute:(id)a0 iteration:(int)a1 rowOrColumn:(int)a2 document:(id)a3;
- (id)dataFromAttributes;
- (void)setAttributesFromData:(id)a0;
- (id)_layerMappingForPhotoshopLayer:(long long)a0 drawingLayer:(long long)a1;
- (id)columnIterationType;
- (id)rowIterationType;
- (void)setColumnIterationType:(id)a0;
- (void)setRowIterationType:(id)a0;
- (id)associatedFileURLWithDocument:(id)a0;
- (id)edgeMetricsMaskWithDocument:(id)a0;
- (id)textMetricsMaskWithDocument:(id)a0;
- (id)baselineMetricsMaskWithDocument:(id)a0;
- (id)auxiliary1MetricsMaskWithDocument:(id)a0;
- (id)auxiliary2MetricsMaskWithDocument:(id)a0;
- (BOOL)generateRenditionsWithEntityName:(id)a0 document:(id)a1 errorDescription:(id *)a2;
- (void)deleteRenditionsInDocument:(id)a0 shouldDeleteAssetFiles:(BOOL)a1;

@end
