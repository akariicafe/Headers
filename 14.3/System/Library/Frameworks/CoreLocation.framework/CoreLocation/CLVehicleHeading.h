@class NSDate;

@interface CLVehicleHeading : NSObject <NSCopying, NSSecureCoding> {
    id _internal;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double trueHeading;
@property (readonly, nonatomic) NSDate *timestamp;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)shortDescription;
- (id)initWithCoder:(id)a0;
- (id)initWithClientVehicleHeading:(struct { double x0; double x1; })a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
