@interface VKMapAnnotationTrackingCameraController : VKAnnotationTrackingCameraController {
    float _currentAnimationCompletedFraction;
    BOOL _zooming;
}

- (void)setEdgeInsets:(struct VKEdgeInsets { float x0; float x1; float x2; float x3; })a0;
- (void)_goToAnnotationAnimated:(BOOL)a0 duration:(double)a1 timingFunction:(id /* block */)a2 isInitial:(BOOL)a3;
- (void)_rotateToHeadingAnimated:(BOOL)a0 duration:(double)a1;
- (void)updateFramerate;
- (struct VKEdgeInsets { float x0; float x1; float x2; float x3; })_effectiveEdgeInsets;
- (double)_minTrackingCameraDistance:(BOOL)a0;
- (double)_zoomLevelForCameraPosition:(struct Matrix<double, 3, 1> { double x0[3]; })a0;

@end
