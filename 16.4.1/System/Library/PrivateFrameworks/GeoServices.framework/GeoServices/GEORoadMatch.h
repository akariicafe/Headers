@class NSString, GEOMultiSectionFeature;

@interface GEORoadMatch : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *roadName;
@property (nonatomic) struct { double latitude; double longitude; double altitude; } coordinateOnRoad;
@property (nonatomic) double courseOnRoad;
@property (nonatomic) double distanceFromRoad;
@property (nonatomic) double roadWidth;
@property (nonatomic) double distanceFromJunction;
@property (nonatomic) double junctionRadius;
@property (readonly, nonatomic) GEOMultiSectionFeature *roadFeature;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)setRoadFeature:(id)a0;
- (id)initWithCoordinateOnRoad:(struct { double x0; double x1; double x2; })a0 courseOnRoad:(double)a1;

@end
