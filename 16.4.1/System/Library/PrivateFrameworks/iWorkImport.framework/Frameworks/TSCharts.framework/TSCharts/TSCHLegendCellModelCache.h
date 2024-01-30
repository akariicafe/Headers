@class NSString, TSDStroke, TSCHChartSeries;

@interface TSCHLegendCellModelCache : NSObject

@property (readonly) int cellType;
@property (readonly) int badgeType;
@property (readonly) unsigned long long seriesIndex;
@property (readonly) TSCHChartSeries *series;
@property (readonly) NSString *labelString;
@property (readonly) struct CGSize { double width; double height; } size;
@property (readonly) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } badgeFrame;
@property (readonly) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } labelFrame;
@property (readonly) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } badgeFillFrame;
@property (readonly) TSDStroke *stroke;
@property (readonly) id fill;
@property (readonly) TSDStroke *symbolStroke;
@property (readonly) id symbolFill;
@property (readonly) double effectiveStrokeWidth;
@property (readonly) double effectiveSymbolStrokeWidth;
@property (readonly) int symbolType;
@property (readonly) int lineType;

- (void).cxx_destruct;
- (id)initWithChartModel:(id)a0 cellType:(int)a1 seriesIndex:(unsigned long long)a2 withMetrics:(id)a3 overrideLabel:(id)a4 styleProvidingSource:(id)a5;

@end
