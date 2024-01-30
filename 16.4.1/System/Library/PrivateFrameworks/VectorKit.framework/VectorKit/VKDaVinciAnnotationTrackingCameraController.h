@interface VKDaVinciAnnotationTrackingCameraController : VKAnnotationTrackingCameraController {
    float _currentAnimationCompletedFraction;
    BOOL _zooming;
    struct { double latitude; double longitude; } _currentAnimationPresentationStartCoordinate;
    struct { double latitude; double longitude; } _currentAnimationPresentationEndCoordinate;
}

- (void)setEdgeInsets:(struct VKEdgeInsets { float x0; float x1; float x2; float x3; })a0;
- (void)updateFramerate;
- (struct Coordinate3D<geo::Radians, double> { struct Unit<geo::RadianUnitDescription, double> { double x0; } x0; struct Unit<geo::RadianUnitDescription, double> { double x0; } x1; struct Unit<geo::MeterUnitDescription, double> { double x0; } x2; })_centerCoordinate:(struct Coordinate3D<geo::Radians, double> { struct Unit<geo::RadianUnitDescription, double> { double x0; } x0; struct Unit<geo::RadianUnitDescription, double> { double x0; } x1; struct Unit<geo::MeterUnitDescription, double> { double x0; } x2; })a0 forEdgeInsets:(struct VKEdgeInsets { float x0; float x1; float x2; float x3; })a1;
- (struct VKEdgeInsets { float x0; float x1; float x2; float x3; })_effectiveEdgeInsets;
- (void)_goToAnnotationAnimated:(BOOL)a0 duration:(double)a1 timingFunction:(id /* block */)a2 isInitial:(BOOL)a3;
- (double)_minTrackingCameraDistance:(BOOL)a0;
- (void)_rotateToHeadingAnimated:(BOOL)a0 duration:(double)a1;
- (struct VKEdgeInsets { float x0; float x1; float x2; float x3; })_scaledEdgeInsets:(struct VKEdgeInsets { float x0; float x1; float x2; float x3; })a0 withCanvasSize:(struct CGSize { double x0; double x1; })a1;
- (double)_zoomLevelForDistance:(struct Unit<geo::MeterUnitDescription, double> { double x0; })a0;

@end
