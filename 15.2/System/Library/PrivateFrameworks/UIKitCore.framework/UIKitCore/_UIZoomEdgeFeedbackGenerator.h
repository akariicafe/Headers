@interface _UIZoomEdgeFeedbackGenerator : _UIEdgeFeedbackGenerator

@property (nonatomic) double minimumZoomScale;
@property (nonatomic) double maximumZoomScale;
@property (nonatomic) double minimumTemporaryZoomScale;
@property (nonatomic) double maximumTemporaryZoomScale;

- (void)_zoomScaleUpdated:(double)a0 withVelocity:(double)a1;
- (id)initWithCoordinateSpace:(id)a0;
- (id)init;
- (void)zoomScaleUpdated:(double)a0;
- (void)_updateMaximumValue;

@end
