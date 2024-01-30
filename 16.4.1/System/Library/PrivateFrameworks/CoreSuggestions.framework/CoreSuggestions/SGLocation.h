@class NSString, NSData;

@interface SGLocation : SGObject <SGEventLocationForGeocode, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long locationType;
@property (readonly, nonatomic) NSString *label;
@property (readonly, nonatomic) NSString *address;
@property (readonly, nonatomic, getter=isGeocoded) BOOL geocoded;
@property (readonly, nonatomic) double latitude;
@property (readonly, nonatomic) double longitude;
@property (readonly, nonatomic) double accuracy;
@property (readonly, nonatomic) double quality;
@property (readonly, nonatomic) NSString *airportCode;
@property (readonly, nonatomic) NSData *handle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToLocation:(id)a0;
- (long long)compare:(id)a0;
- (void).cxx_destruct;
- (double)geocodeLatitude;
- (double)geocodeAccuracy;
- (id)geocodeAddress;
- (id)geocodeAirportCode;
- (id)geocodeHandle;
- (BOOL)geocodeIsEnd;
- (BOOL)geocodeIsStart;
- (id)geocodeLabel;
- (double)geocodeLongitude;
- (id)geocodedLocationWithLabel:(id)a0 address:(id)a1 latitude:(double)a2 longitude:(double)a3 accuracy:(double)a4 handle:(id)a5;
- (id)geocodedLocationWithLatitude:(double)a0 longitude:(double)a1 accuracy:(double)a2 handle:(id)a3;
- (id)initWithId:(id)a0 origin:(id)a1 type:(unsigned long long)a2 label:(id)a3 address:(id)a4 airportCode:(id)a5 accuracy:(double)a6 quality:(double)a7;
- (id)initWithId:(id)a0 origin:(id)a1 type:(unsigned long long)a2 label:(id)a3 address:(id)a4 airportCode:(id)a5 latitude:(double)a6 longitude:(double)a7 accuracy:(double)a8 quality:(double)a9 handle:(id)a10;
- (id)initWithId:(id)a0 origin:(id)a1 type:(unsigned long long)a2 label:(id)a3 airportCode:(id)a4 latitude:(double)a5 longitude:(double)a6 accuracy:(double)a7 quality:(double)a8;
- (id)initWithLocation:(id)a0 latitude:(double)a1 longitude:(double)a2 accuracy:(double)a3 handle:(id)a4;

@end
