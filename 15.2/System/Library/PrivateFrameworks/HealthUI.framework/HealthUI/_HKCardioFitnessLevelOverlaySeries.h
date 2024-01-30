@interface _HKCardioFitnessLevelOverlaySeries : HKLineSeries {
    long long _cardioFitnessLevel;
    BOOL _shouldDisplayUpperBound;
    BOOL _shouldDisplayLowerBound;
}

- (long long)overlayType;
- (void)drawSeriesWithBlockCoordinates:(id)a0 axisRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 zoomLevelConfiguration:(id)a2 pointTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a3 renderContext:(struct CGContext { } *)a4 secondaryRenderContext:(id)a5;
- (id)_visibleCardioFitnessBlockCoordinatesFromBlockCoordinates:(id)a0 pointTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1 screenRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 strict:(BOOL)a3;
- (id)_cardioFitnessDataFromBlockCoordinates:(id)a0;
- (void)_drawCardioFitnessBoundsInContext:(struct CGContext { } *)a0 coordinates:(id)a1 pointTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a2 seriesRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 extendFirstPoint:(BOOL)a4;
- (id)initWithCardioLevel:(long long)a0;

@end
