@interface _MKZoomingPanGestureRecognizer : UIPanGestureRecognizer {
    double _translation;
    double _scale;
    double _velocity;
    double _previousVelocity;
    BOOL _didStartUpdate;
    double _lastUpdateTimestamp;
}

@property (nonatomic) double zoomDraggingResistance;
@property (readonly, nonatomic) double scale;
@property (readonly, nonatomic) double velocity;

- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)reset;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)_updateScaleAndVelocityIfNeeded:(long long)a0;

@end
