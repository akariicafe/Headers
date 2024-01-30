@interface HKLevelOverlaySeries : HKLineSeries {
    unsigned long long _options;
}

+ (id)levelOverlaySeriesWithDisplayType:(id)a0 dataSource:(id)a1 options:(unsigned long long)a2;

- (long long)overlayType;
- (id)initWithOptions:(unsigned long long)a0;
- (void)drawSeriesWithBlockCoordinates:(id)a0 axisRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 zoomLevelConfiguration:(id)a2 pointTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a3 renderContext:(struct CGContext { } *)a4 secondaryRenderContext:(id)a5 seriesRenderingDelegate:(id)a6;
- (id)_chartDataFromBlockCoordinates:(id)a0;
- (void)_drawLevelBoundsInContext:(struct CGContext { } *)a0 coordinates:(id)a1 pointTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a2 seriesRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 extendFirstPoint:(BOOL)a4 seriesRenderingDelegate:(id)a5;
- (id)_visibleBlockCoordinatesFromBlockCoordinates:(id)a0 pointTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1 screenRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 strict:(BOOL)a3;
- (BOOL)shouldDisplayLowerBound;
- (BOOL)shouldDisplayUpperBound;

@end
