@class TSDShadow, NSArray, TSWPParagraphStyle, TSCHLegendCellMetrics, TSDStroke, TSCHLegendViewCache;
@protocol TSWPStyleProviding;

@interface TSCHLegendModelCache : NSObject {
    id<TSWPStyleProviding> _styleProvidingSource;
    TSCHLegendCellMetrics *_metrics;
    double _lastLegendWidth;
    TSCHLegendViewCache *_lastLegendViewCache;
}

@property (readonly) BOOL legendOn;
@property (readonly) unsigned long long cellCount;
@property (readonly) NSArray *cells;
@property (readonly) TSWPParagraphStyle *paragraphStyle;
@property (readonly) TSDStroke *stroke;
@property (readonly) id fill;
@property (readonly) TSDShadow *shadow;
@property (readonly) double opacity;
@property (readonly) double horizontalCellSpacing;
@property (readonly) double verticalCellSpacing;
@property (readonly) double symbolGap;
@property (readonly) struct CGSize { double width; double height; } largestCellSize;
@property (readonly) double effectiveStrokeWidth;
@property (readonly) BOOL reverseSingleColumnLegendOrder;
@property (readonly) BOOL legendIsRTL;

- (void).cxx_destruct;
- (id)cellForSeriesIndex:(unsigned long long)a0 cellType:(int)a1;
- (id)initWithChartModel:(id)a0 textEditingSelectionPair:(id)a1 styleProvidingSource:(id)a2;
- (id)viewCacheForWidth:(double)a0;

@end
