@class NSString;

@interface CHBAutoStyling : CHAutoStyling <CHAutoStyling>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)autoFill;
- (id)autoSeriesFill:(unsigned long long)a0;
- (void)resolveLegendGraphicProperties:(id)a0;
- (id)autoSeriesBorderStroke;
- (id)autoStroke;
- (id)autoStrokeForSeriesIndex:(unsigned long long)a0;
- (id)autoTextFill;
- (id)fillWithColorIndex:(unsigned long long)a0;
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
- (void)resolvedGraphicProperties:(id)a0 autoFill:(id)a1 autoStroke:(id)a2 autoShadow:(BOOL)a3 nullFill:(id)a4 nullStroke:(id)a5 nullShadow:(BOOL)a6;
- (id)strokeWithColorIndex:(int)a0;

@end
