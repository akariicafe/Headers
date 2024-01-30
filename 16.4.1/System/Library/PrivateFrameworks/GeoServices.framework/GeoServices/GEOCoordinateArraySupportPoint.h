@interface GEOCoordinateArraySupportPoint : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) struct PolylineCoordinate { unsigned int index; float offset; } routeCoordinate;
@property (nonatomic) unsigned long long index;
@property (nonatomic) long long roadID;
@property (nonatomic) double heading;
@property (nonatomic) BOOL isUTurn;
@property (nonatomic) int legacyRoadClass;
@property (nonatomic) int legacyFormOfWay;

- (void)encodeWithCoder:(id)a0;
- (id).cxx_construct;
- (id)initWithCoder:(id)a0;
- (id)init;
- (id)description;

@end
