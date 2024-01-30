@class NSArray, NSMutableArray, NSValue;

@interface PXLayoutMetricInterpolator : NSObject {
    struct { BOOL referenceValuesByMetricsOrder; } _needsUpdateFlags;
}

@property (class, readonly, nonatomic) NSArray *allLayoutMetricConfigurationSizes;

@property (readonly, nonatomic) NSMutableArray *_referenceValuesByMetrics;
@property (nonatomic, setter=_setCachedMetric:) double _cachedMetric;
@property (retain, nonatomic, setter=_setCachedValue:) NSValue *_cachedValue;

+ (id)memoriesItemWidthInterpolator;
+ (id)gadgetColumnWidthSpanDoubleSetBInterpolator;
+ (id)memoriesDetailsEdgeInsetsInterpolator;
+ (id)gadgetColumnSpacingSpanSingleSetAInterpolator;
+ (unsigned long long)photosGridLayoutColumnsForWidth:(double)a0;
+ (id)albumsGridEdgeInsetsInterpolator;
+ (id)gadgetColumnWidthSpanSingleSetAInterpolator;
+ (id)gadgetColumnSpacingSpanDoubleSetBInterpolator;
+ (id)photosDetailsEdgeInsetsInterpolator;
+ (id)memoriesFeedPortraitEdgeInsetsInterpolator;
+ (id)_sharedGridEdgeInsetsInterpolator;
+ (id)albumsGridItemWidthInterpolator;
+ (struct CGSize { double x0; double x1; })zoomableGridLayoutSmallItemSizeForWidth:(double)a0;
+ (double)locketGadgetColumnWidthForLayoutWidth:(struct CGSize { double x0; double x1; })a0 layoutMargins:(double)a1 interSpacing:(double)a2 isPhone:(BOOL)a3;
+ (id)memoriesFeedLandscapeEdgeInsetsInterpolator;
+ (id)_gridItemWidthInterpolatorWithGridEdgeInsetsInterpolator:(id)a0;
+ (long long)photosGridSizeSubclassForScreenSize:(struct CGSize { double x0; double x1; })a0;
+ (struct CGSize { double x0; double x1; })bestItemSizeForAvailableWidth:(double)a0 screenScale:(double)a1 columns:(unsigned long long)a2 bestSpacing:(double *)a3 bestInset:(double *)a4;
+ (id)gadgetColumnWidthSpanDoubleSetAInterpolator;
+ (id)gadgetColumnSpacingSpanDoubleSetAInterpolator;
+ (id)layoutMarginWidthInterpolator;
+ (id)_sharedGridItemWidthInterpolator;
+ (id)memoriesFeedInteritemSpacingInterpolator;
+ (id)legacyLayoutMarginWidthInterpolator;

- (double)valueForMetric:(double)a0;
- (void)_invalidateReferenceValuesByMetricsOrder;
- (void)_updateReferenceValuesByMetricsOrderIfNeeded;
- (void)_setNeedsUpdate;
- (id)init;
- (id)_valueForMetric:(double)a0 fromInterpolationBetweenValue:(id)a1 secondValue:(id)a2;
- (void)setReferenceValue:(double)a0 forMetric:(double)a1;
- (id)description;
- (void)_getReferenceValueForMetric:(double)a0 exactMatch:(id *)a1 closestBeforeMatch:(id *)a2 closestAfterMatch:(id *)a3;
- (void).cxx_destruct;

@end
