@class NSString;

@interface CHXAutoStyling : CHAutoStyling <CHAutoStyling>

@property BOOL _autoChartFillIsHollow;
@property BOOL _autoChartStrokeIsHollow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)colorWithSchemeColorId:(int)a0 shade:(float)a1;
+ (id)colorWithSchemeColorId:(int)a0 tint:(float)a1;
+ (id)colorWithSchemeColorId:(int)a0 transformType:(int)a1 transformValue:(float)a2;
+ (int)styleColumnWithStyleId:(int)a0;
+ (int)styleIdWithStyleRow:(int)a0 styleColumn:(int)a1;
+ (int)styleRowWithStyleId:(int)a0;

- (int)styleId;
- (void)resolveLegendGraphicProperties:(id)a0;
- (id)autoAxisAndMajorGridColor;
- (id)autoChartAreaAndDataTableAndFloorStrokeColor;
- (id)autoChartAreaFillColor;
- (id)autoColorOfFirstColumnSeriesWithIndex:(unsigned long long)a0 seriesCount:(unsigned long long)a1;
- (id)autoColorOfSeriesWithIndex:(unsigned long long)a0;
- (unsigned int)autoFloorAndChartAreaStrokeIndex;
- (id)autoFloorAndWallsAndPlotArea2DFillColor;
- (unsigned int)autoFloorAndWallsFillIndex;
- (id)autoMinorGridColor;
- (id)autoOtherStrokeColor;
- (id)autoStrokeForSeriesIndex:(unsigned long long)a0;
- (id)autoTextFill;
- (void)resolveAxisGraphicProperties:(id)a0;
- (void)resolveChartAreaGraphicProperties:(id)a0;
- (void)resolveFloorGraphicProperties:(id)a0;
- (void)resolveGraphicPropertiesOfErrorBar:(id)a0 forSeriesIndex:(unsigned long long)a1;
- (void)resolveGraphicPropertiesOfSeries:(id)a0 forSeriesIndex:(unsigned long long)a1;
- (void)resolveGraphicPropertiesOfSeries:(id)a0 forSeriesIndex:(unsigned long long)a1 isLine:(BOOL)a2;
- (void)resolveGraphicPropertiesOfTrendline:(id)a0 forSeriesIndex:(unsigned long long)a1;
- (void)resolveMajorGridLinesGraphicProperties:(id)a0;
- (void)resolveMarker:(id)a0 withSeriesGraphicProperties:(id)a1 forSeriesIndex:(unsigned long long)a2 clientGraphicPropertyDefaults:(id /* block */)a3;
- (void)resolveMinorGridLinesGraphicProperties:(id)a0;
- (void)resolvePlotAreaGraphicProperties:(id)a0;
- (void)resolveWallGraphicProperties:(id)a0;
- (void)setAutoChartFillIsHollow:(BOOL)a0;
- (void)setAutoChartStrokeIsHollow:(BOOL)a0;
- (void)setDefaultErrorBarPropertiesInGraphicProperties:(id)a0;
- (int)styleColumn;
- (int)styleRow;

@end
