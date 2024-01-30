@class VKMapView;
@protocol MKRotationFilterDelegate;

@interface MKRotationFilter : NSObject {
    VKMapView *_mapLayer;
    double _gestureStartAngle;
    BOOL _userRotatedAwayFromVerticalYaw;
    double _previousVerticalYawOverride;
    BOOL _snappedAtStart;
    BOOL _snappingEnabled;
}

@property (nonatomic, getter=isSnappedToNorth) BOOL snappedToNorth;
@property (nonatomic) double additionalSnappingAngle;
@property (weak, nonatomic) id<MKRotationFilterDelegate> delegate;

- (void)snapToNorthAnimated:(BOOL)a0 forceTrueNorth:(BOOL)a1;
- (void)updateRotationWithFocusPoint:(struct CGPoint { double x0; double x1; })a0 newValue:(double)a1;
- (void)stopRotatingWithFocusPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)startRotatingWithFocusPoint:(struct CGPoint { double x0; double x1; })a0 withSnapping:(BOOL)a1;
- (id)initWithMapLayer:(id)a0;
- (void).cxx_destruct;
- (BOOL)hasAdditionalSnappingAngle;
- (id)init;
- (void)updateSnappedToNorth;

@end
