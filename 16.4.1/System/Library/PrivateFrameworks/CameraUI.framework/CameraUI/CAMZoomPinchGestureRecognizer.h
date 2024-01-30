@interface CAMZoomPinchGestureRecognizer : UIPinchGestureRecognizer

@property (nonatomic, setter=_setZoomPinchInitialDistance:) double _zoomPinchInitialDistance;
@property (readonly, nonatomic) double zoomScale;

- (double)_zoomPinchDistance;
- (double)_exponentialZoomScale;
- (double)_distanceBetweenInitialTwoTouches;
- (double)_hybridZoomScale;
- (void)setState:(long long)a0;

@end
