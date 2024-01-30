@class NSArray, NSMutableArray, NSValue;

@interface PXLayoutMetricInterpolator : NSObject {
    struct { BOOL referenceValuesByMetricsOrder; } _needsUpdateFlags;
}

@property (class, readonly, nonatomic) NSArray *allLayoutMetricConfigurationSizes;

@property (readonly, nonatomic) NSMutableArray *_referenceValuesByMetrics;
@property (nonatomic, setter=_setCachedMetric:) double _cachedMetric;
@property (retain, nonatomic, setter=_setCachedValue:) NSValue *_cachedValue;

+ (id)_sharedGridEdgeInsetsInterpolator;
+ (id)legacyLayoutMarginWidthInterpolator;
+ (unsigned long long)photosGridLayoutColumnsForWidth:(double)a0;
+ (id)layoutMarginWidthInterpolator;
+ (id)_sharedGridItemWidthInterpolator;
+ (id)memoriesDetailsEdgeInsetsInterpolator;
+ (id)memoriesFeedLandscapeEdgeInsetsInterpolator;
+ (id)memoriesFeedInteritemSpacingInterpolator;
+ (id)_gridItemWidthInterpolatorWithGridEdgeInsetsInterpolator:(id)a0;
+ (id)memoriesFeedPortraitEdgeInsetsInterpolator;
+ (struct CGSize { double x0; double x1; })bestItemSizeForAvailableWidth:(double)a0 screenScale:(double)a1 columns:(unsigned long long)a2 bestSpacing:(double *)a3 bestInset:(double *)a4;
+ (id)gadgetColumnWidthSpanSingleSetAInterpolator;
+ (long long)photosGridSizeSubclassForScreenSize:(struct CGSize { double x0; double x1; })a0;
+ (id)albumsGridItemWidthInterpolator;
+ (id)gadgetColumnSpacingSpanDoubleSetAInterpolator;
+ (id)gadgetColumnWidthSpanDoubleSetBInterpolator;
+ (id)albumsGridEdgeInsetsInterpolator;
+ (id)memoriesItemWidthInterpolator;
+ (struct CGSize { double x0; double x1; })zoomableGridLayoutSmallItemSizeForWidth:(double)a0;
+ (id)gadgetColumnSpacingSpanSingleSetAInterpolator;
+ (id)gadgetColumnSpacingSpanDoubleSetBInterpolator;
+ (id)gadgetColumnWidthSpanDoubleSetAInterpolator;

- (id)_valueForMetric:(double)a0 fromInterpolationBetweenValue:(id)a1 secondValue:(id)a2;
- (id)init;
- (void).cxx_destruct;
- (void)_setNeedsUpdate;
- (id)description;
- (void)_getReferenceValueForMetric:(double)a0 exactMatch:(id *)a1 closestBeforeMatch:(id *)a2 closestAfterMatch:(id *)a3;
- (void)_updateReferenceValuesByMetricsOrderIfNeeded;
- (double)valueForMetric:(double)a0;
- (void)setReferenceValue:(double)a0 forMetric:(double)a1;
- (void)_invalidateReferenceValuesByMetricsOrder;

@end
