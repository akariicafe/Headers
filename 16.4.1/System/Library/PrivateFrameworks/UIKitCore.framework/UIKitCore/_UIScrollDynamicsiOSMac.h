@interface _UIScrollDynamicsiOSMac : _UIScrollDynamics {
    double _durationUntilStop;
    double _durationUntilStopIgnoringRubberbanding;
    struct CGSize { double width; double height; } _absDisplacementVectorIgnoringRubberbanding;
    double _linearDisplacementIgnoringRubberbanding;
    struct CGPoint { double x; double y; } _destinationIgnoringRubberbanding;
    double _durationUntilRubberband;
    struct CGPoint { double x; double y; } _initialRubberbandingOrigin;
    struct CGVector { double dx; double dy; } _initialRubberbandingVelocity;
    unsigned long long _rubberBandingAxis;
    double _decelerationRate;
}

- (id)init;
- (void)calculateDecelerationTarget;
- (void)calculateToReachDecelerationTarget;
- (double)durationUntilStop;
- (BOOL)isRubberBandingAfterDuration:(double)a0;
- (struct CGPoint { double x0; double x1; })positionAfterDuration:(double)a0;
- (double)speedAfterDuration:(double)a0;
- (struct CGVector { double x0; double x1; })velocityAfterDuration:(double)a0;

@end
