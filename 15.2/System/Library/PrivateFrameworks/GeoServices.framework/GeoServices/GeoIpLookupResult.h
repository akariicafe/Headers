@class NSString;

@interface GeoIpLookupResult : NSObject

@property (readonly, nonatomic) NSString *ipAddress;
@property (readonly, nonatomic) struct { double latitude; double longitude; } latLong;
@property (readonly, nonatomic) NSString *countryCode;
@property (readonly, nonatomic) NSString *timeZone;

- (void).cxx_destruct;
- (id)initWithGEOPDPlaceResponse:(id)a0;

@end
