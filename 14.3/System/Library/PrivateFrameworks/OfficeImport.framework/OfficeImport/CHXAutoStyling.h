@class NSString;

@interface CHXAutoStyling : CHAutoStyling <CHAutoStyling>

@property BOOL _autoChartFillIsHollow;
@property BOOL _autoChartStrokeIsHollow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)colorWithSchemeColorId:(int)a0 transformType:(int)a1 transformValue:(float)a2;
+ (int)styleRowWithStyleId:(int)a0;
+ (int)styleColumnWithStyleId:(int)a0;
+ (id)colorWithSchemeColorId:(int)a0 tint:(float)a1;
+ (id)colorWithSchemeColorId:(int)a0 shade:(float)a1;
+ (int)styleIdWithStyleRow:(int)a0 styleColumn:(int)a1;

- (int)styleId;
- (id)autoStrokeForSeriesIndex:(unsigned long long)a0;
- (void)resolveAxisGraphicProperties:(id)a0;
- (void)resolveMinorGridLinesGraphicProperties:(id)a0;
- (void)resolveMajorGridLinesGraphicProperties:(id)a0;
- (void)resolveWallGraphicProperties:(id)a0;
- (void)resolveFloorGraphicProperties:(id)a0;
- (void)resolveGraphicPropertiesOfErrorBar:(id)a0 forSeriesIndex:(unsigned long long)a1;
- (void)resolveLegendGraphicProperties:(id)a0;
- (void)resolvePlotAreaGraphicProperties:(id)a0;
- (void)resolveGraphicPropertiesOfSeries:(id)a0 forSeriesIndex:(unsigned long long)a1;
- (int)styleColumn;
- (id)autoColorOfFirstColumnSeriesWithIndex:(unsigned long long)a0 seriesCount:(unsigned long long)a1;
- (id)autoChartAreaFillColor;
- (unsigned int)autoFloorAndChartAreaStrokeIndex;
- (id)autoChartAreaAndDataTableAndFloorStrokeColor;
- (unsigned int)autoFloorAndWallsFillIndex;
- (id)autoFloorAndWallsAndPlotArea2DFillColor;
- (id)autoAxisAndMajorGridColor;
- (id)autoMinorGridColor;
- (id)autoColorOfSeriesWithIndex:(unsigned long long)a0;
- (int)styleRow;
- (void)setDefaultErrorBarPropertiesInGraphicProperties:(id)a0;
- (id)autoOtherStrokeColor;
- (void)setAutoChartFillIsHollow:(BOOL)a0;
- (void)setAutoChartStrokeIsHollow:(BOOL)a0;
- (void)resolveChartAreaGraphicProperties:(id)a0;
- (id)autoTextFill;
- (void)resolveGraphicPropertiesOfSeries:(id)a0 forSeriesIndex:(unsigned long long)a1 isLine:(BOOL)a2;
- (void)resolveMarker:(id)a0 withSeriesGraphicProperties:(id)a1 forSeriesIndex:(unsigned long long)a2 clientGraphicPropertyDefaults:(id /* block */)a3;
- (void)resolveGraphicPropertiesOfTrendline:(id)a0 forSeriesIndex:(unsigned long long)a1;

@end
