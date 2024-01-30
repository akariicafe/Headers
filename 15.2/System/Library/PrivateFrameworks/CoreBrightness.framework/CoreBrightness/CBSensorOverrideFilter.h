@interface CBSensorOverrideFilter : CBFilter {
    struct { float x; float y; } _chromaticity;
    double _illuminance;
}

@property int orientation;

- (id)initWithData:(id)a0;
- (id)filterEvent:(id)a0;
- (void)dealloc;

@end
