@interface PKInputPointAltitudeAndAzimuthZLimitFilter : PKInputPointBaseFilter {
    double _altitudeAndAzimuthZLimit;
    double _lastKnownAzimuth;
    double _lastKnownAltitude;
}

- (void)addInputPoint:(struct { union { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; BOOL x8; long long x9; double x10; BOOL x11; })a0;

@end
