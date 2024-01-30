@class MovementStateEstimator;

@interface CinematicTrack : BaseTrack {
    MovementStateEstimator *_mseX;
    MovementStateEstimator *_mseY;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _afterImageBoundingBox;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _afterImageExpirationTimestamp;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _lastMeasuredFaceBoundingBox;
}

@property (readonly, nonatomic) BOOL wasStationaryBefore;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } lastStationaryRect;
@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } withinFrameLastTimestamp;
@property (readonly, nonatomic) BOOL isOutsideOfView;
@property (readonly, nonatomic) BOOL isStationary;
@property (nonatomic) BOOL isTrackedByDirector;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } boundingBoxForFraming;

- (void).cxx_destruct;
- (void)resetProperties;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })afterImageBoundingBoxAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })faceBoundingBoxForFramingAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)initWithObservation:(id)a0 identifier:(long long)a1 options:(id)a2 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3;
- (void)setAfterImage:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forDuration:(float)a1 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2;
- (void)updatePropertiesWithMetadata:(id)a0 inView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end
