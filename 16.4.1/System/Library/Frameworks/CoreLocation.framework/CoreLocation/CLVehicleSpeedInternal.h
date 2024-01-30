@interface CLVehicleSpeedInternal : NSObject <NSCopying> {
    struct { double speed; double timestamp; double machContinuousTime; double machAbsoluteTime; } fSpeed;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithClientVehicleSpeed:(struct { double x0; double x1; double x2; double x3; })a0;

@end
