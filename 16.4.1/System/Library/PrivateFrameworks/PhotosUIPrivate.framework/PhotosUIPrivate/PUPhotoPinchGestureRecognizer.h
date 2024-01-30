@class PUValueFilter;

@interface PUPhotoPinchGestureRecognizer : UIPinchGestureRecognizer {
    struct CGPoint { double x; double y; } _initialTouchLocations[2];
    struct CGPoint { double x; double y; } _latestTouchLocations[2];
    BOOL _initialTouchLocationsSet;
}

@property (nonatomic, setter=_setTouchesNeedUpdate:) BOOL _touchesNeedUpdate;
@property (retain, nonatomic, setter=_setRotationFilter:) PUValueFilter *_rotationFilter;
@property (nonatomic) double rotationHysteresisDegrees;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } initialPinchRect;

- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)_updateIfNeeded;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)reset;
- (double)adjustedRotationVelocityInView:(id)a0;
- (struct CGPoint { double x0; double x1; })adjustedInitialCenterInView:(id)a0;
- (double)adjustedRotationInView:(id)a0;
- (double)adjustedScaleInView:(id)a0;
- (double)adjustedScaleVelocityInView:(id)a0;
- (struct CGPoint { double x0; double x1; })adjustedTranslationInView:(id)a0;
- (struct CGPoint { double x0; double x1; })adjustedTranslationVelocityInView:(id)a0;

@end
