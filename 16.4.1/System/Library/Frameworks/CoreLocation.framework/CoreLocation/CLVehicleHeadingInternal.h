@interface CLVehicleHeadingInternal : NSObject <NSCopying> {
    struct { double trueHeading; double timestamp; } fHeading;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithClientVehicleHeading:(struct { double x0; double x1; })a0;

@end
