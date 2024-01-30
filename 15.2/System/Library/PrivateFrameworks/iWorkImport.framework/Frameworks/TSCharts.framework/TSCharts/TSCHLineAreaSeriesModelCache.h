@class TSDShadow, TSCHChartAxis, TSWPParagraphStyle, TSCHChartSeries, TSCHChartValueAxis, TSDStroke;

@interface TSCHLineAreaSeriesModelCache : NSObject

@property (readonly) unsigned long long seriesIndex;
@property (readonly) TSCHChartSeries *series;
@property (readonly) TSCHChartValueAxis *valueAxis;
@property (readonly) TSCHChartAxis *groupAxis;
@property (readonly) TSWPParagraphStyle *paragraphStyle;
@property (readonly) unsigned int labelPosition;
@property (readonly) BOOL showLabelsInFront;
@property (readonly) int symbolType;
@property (readonly) TSDStroke *symbolStroke;
@property (readonly) id symbolFill;
@property (readonly) TSDStroke *seriesStroke;
@property (readonly) id seriesFill;
@property (readonly) double dataPointSize;
@property (readonly) double opacity;
@property (readonly) int lineType;
@property (readonly) BOOL showValueLabels;
@property (readonly) TSDShadow *seriesShadow;
@property (readonly) struct CGPath { } *unitSymbolPath;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithChartModel:(id)a0 forSeries:(unsigned long long)a1;

@end
