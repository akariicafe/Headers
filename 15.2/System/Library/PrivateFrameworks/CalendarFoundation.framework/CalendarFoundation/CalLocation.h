@class NSString, NSData, CLLocation, CLPlacemark;

@interface CalLocation : NSObject <NSSecureCoding> {
    CLLocation *_location;
    BOOL _isCurrentLocation;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) CLLocation *location;
@property (copy) NSString *address;
@property (copy) NSString *title;
@property (copy) NSString *displayName;
@property (copy) NSString *abURLString;
@property (copy) NSString *routeType;
@property (copy) NSData *mapKitHandle;
@property (retain) CLPlacemark *placemark;
@property (readonly, nonatomic) BOOL isCurrentLocation;
@property int type;
@property (nonatomic) double radius;

+ (long long)routingModeEnumForCalRouteType:(id)a0;
+ (id)coordinatesFromGeoURLString:(id)a0;
+ (id)geoURLStringFromCoordinates:(id)a0;
+ (id)displayStringForAddress:(id)a0 withoutTitle:(id)a1;
+ (id)fullDisplayStringWithTitle:(id)a0 address:(id)a1;
+ (id)routeTypeStringForCalLocationRoutingMode:(long long)a0;

- (void)encodeWithCoder:(id)a0;
- (id)displayString;
- (double)distanceFromLocation:(id)a0;
- (id)description;
- (id)typeString;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)geoURLString;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)fullTitleAndAddressString;

@end
