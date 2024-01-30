@class NSString, NSArray, CLCircularRegion, CLLocation, NSData;

@interface CLSLitePlacemark : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) CLLocation *location;
@property (retain, nonatomic) CLCircularRegion *region;
@property (retain, nonatomic) NSString *thoroughfare;
@property (retain, nonatomic) NSString *subThoroughfare;
@property (retain, nonatomic) NSString *locality;
@property (retain, nonatomic) NSString *subLocality;
@property (retain, nonatomic) NSString *administrativeArea;
@property (retain, nonatomic) NSString *administrativeAreaCode;
@property (retain, nonatomic) NSString *subAdministrativeArea;
@property (retain, nonatomic) NSString *ISOcountryCode;
@property (retain, nonatomic) NSString *inlandWater;
@property (retain, nonatomic) NSString *ocean;
@property (retain, nonatomic) NSArray *areasOfInterest;
@property (nonatomic) BOOL isIsland;
@property (retain, nonatomic) NSData *revGeoLocationData;
@property (retain, nonatomic) NSString *geoServiceProvider;
@property (readonly, nonatomic) BOOL isOcean;

+ (id)litePlacemarkFromCLPlacemark:(id)a0;
+ (BOOL)_isIslandForGeoMapItem:(id)a0;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCLPlacemark:(id)a0;
- (id)initWithRTMapItem:(id)a0;
- (void)_extractValuesFromGeoMapItem:(id)a0;

@end
