@class TSDShadow, TSCHChartAxis, TSWPParagraphStyle, TSCHChartSeries, TSCHChartValueAxis, TSDStroke;

@interface TSCHBarSeriesModelCache : NSObject

@property (readonly) TSCHChartSeries *series;
@property (readonly) TSCHChartValueAxis *valueAxis;
@property (readonly) TSCHChartAxis *groupAxis;
@property (readonly) TSWPParagraphStyle *paragraphStyle;
@property (readonly) unsigned long long seriesIndex;
@property (readonly) BOOL valueLabelsOn;
@property (readonly) double unitSpaceIntercept;
@property (readonly) unsigned int labelPosition;
@property (readonly) double barWidthRatio;
@property (readonly) double barGroupGapRatio;
@property (readonly) double barGapRatio;
@property (readonly) TSDShadow *shadow;
@property (readonly) TSDStroke *stroke;
@property (readonly) id fill;
@property (readonly) double opacity;

- (void).cxx_destruct;
- (id)initWithChartModel:(id)a0 forSeries:(unsigned long long)a1;

@end
