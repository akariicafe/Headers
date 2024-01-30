@class NSArray, NSMutableArray, NSValue;

@interface PXLayoutMetricInterpolator : NSObject {
    struct { BOOL referenceValuesByMetricsOrder; } _needsUpdateFlags;
}

@property (class, readonly, nonatomic) NSArray *allLayoutMetricConfigurationSizes;

@property (readonly, nonatomic) NSMutableArray *_referenceValuesByMetrics;
@property (nonatomic, setter=_setCachedMetric:) double _cachedMetric;
@property (retain, nonatomic, setter=_setCachedValue:) NSValue *_cachedValue;

+ (id)_sharedGridItemWidthInterpolator;
+ (id)gadgetColumnWidthSpanSingleSetAInterpolator;
+ (unsigned long long)photosGridLayoutColumnsForWidth:(double)a0;
+ (id)memoriesDetailsEdgeInsetsInterpolator;
+ (id)memoriesFeedInteritemSpacingInterpolator;
+ (id)legacyLayoutMarginWidthInterpolator;
+ (long long)photosGridSizeSubclassForScreenSize:(struct CGSize { double x0; double x1; })a0;
+ (id)memoriesFeedLandscapeEdgeInsetsInterpolator;
+ (id)gadgetColumnWidthSpanDoubleSetBInterpolator;
+ (id)layoutMarginWidthInterpolator;
+ (id)albumsGridItemWidthInterpolator;
+ (id)gadgetColumnSpacingSpanSingleSetAInterpolator;
+ (id)memoriesItemWidthInterpolator;
+ (id)_gridItemWidthInterpolatorWithGridEdgeInsetsInterpolator:(id)a0;
+ (id)gadgetColumnWidthSpanDoubleSetAInterpolator;
+ (id)albumsGridEdgeInsetsInterpolator;
+ (id)_sharedGridEdgeInsetsInterpolator;
+ (struct CGSize { double x0; double x1; })zoomableGridLayoutSmallItemSizeForWidth:(double)a0;
+ (id)photosDetailsEdgeInsetsInterpolator;
+ (id)memoriesFeedPortraitEdgeInsetsInterpolator;
+ (id)gadgetColumnSpacingSpanDoubleSetBInterpolator;
+ (id)gadgetColumnSpacingSpanDoubleSetAInterpolator;
+ (struct CGSize { double x0; double x1; })bestItemSizeForAvailableWidth:(double)a0 screenScale:(double)a1 columns:(unsigned long long)a2 bestSpacing:(double *)a3 bestInset:(double *)a4;

- (void)setReferenceValue:(double)a0 forMetric:(double)a1;
- (id)description;
- (void)_setNeedsUpdate;
- (void).cxx_destruct;
- (id)init;
- (id)_valueForMetric:(double)a0 fromInterpolationBetweenValue:(id)a1 secondValue:(id)a2;
- (void)_getReferenceValueForMetric:(double)a0 exactMatch:(id *)a1 closestBeforeMatch:(id *)a2 closestAfterMatch:(id *)a3;
- (void)_updateReferenceValuesByMetricsOrderIfNeeded;
- (double)valueForMetric:(double)a0;
- (void)_invalidateReferenceValuesByMetricsOrder;

@end
