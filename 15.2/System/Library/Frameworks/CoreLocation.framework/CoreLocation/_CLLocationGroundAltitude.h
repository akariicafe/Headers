@interface _CLLocationGroundAltitude : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double estimate;
@property (readonly, nonatomic) double uncertainty;
@property (readonly, nonatomic) double undulation;
@property (readonly, nonatomic) int undulationModel;
@property (readonly, nonatomic) double altitude;
@property (readonly, nonatomic) BOOL isAltitudeWgs84Available;
@property (readonly, nonatomic) double altitudeWgs84;
@property (readonly, nonatomic) double uncertaintyWgs84;

- (id)initWithEstimate:(double)a0 uncertainty:(double)a1 undulation:(double)a2 undulationModel:(int)a3;
- (id)initWithEstimate:(double)a0 uncertainty:(double)a1;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
