@class NSString, NSData;

@interface SGStorageLocation : NSObject <NSCopying, NSSecureCoding, SGEventLocationForGeocode>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) int locationType;
@property (readonly, nonatomic) NSString *label;
@property (readonly, nonatomic) NSString *address;
@property (readonly, nonatomic) NSString *airportCode;
@property (readonly, nonatomic) double latitude;
@property (readonly, nonatomic) double longitude;
@property (readonly, nonatomic) double accuracy;
@property (readonly, nonatomic) double quality;
@property (readonly, nonatomic) NSData *handle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)compare:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)geocodeLabel;
- (id)geocodeAddress;
- (id)geocodeAirportCode;
- (BOOL)geocodeIsStart;
- (BOOL)geocodeIsEnd;
- (double)geocodeLatitude;
- (double)geocodeLongitude;
- (double)geocodeAccuracy;
- (id)geocodeHandle;
- (id)geocodedLocationWithLabel:(id)a0 address:(id)a1 latitude:(double)a2 longitude:(double)a3 accuracy:(double)a4 handle:(id)a5;
- (id)geocodedLocationWithLatitude:(double)a0 longitude:(double)a1 accuracy:(double)a2 handle:(id)a3;
- (id)initWithType:(int)a0 label:(id)a1 address:(id)a2 airportCode:(id)a3 accuracy:(double)a4 quality:(double)a5;
- (id)initWithType:(int)a0 label:(id)a1 airportCode:(id)a2 latitude:(double)a3 longitude:(double)a4 accuracy:(double)a5 quality:(double)a6;
- (id)initWithType:(int)a0 label:(id)a1 address:(id)a2 airportCode:(id)a3 latitude:(double)a4 longitude:(double)a5 accuracy:(double)a6 quality:(double)a7 handle:(id)a8;
- (BOOL)isEqualToStorageLocation:(id)a0;
- (id)convertToLocationWithId:(id)a0 origin:(id)a1;

@end
