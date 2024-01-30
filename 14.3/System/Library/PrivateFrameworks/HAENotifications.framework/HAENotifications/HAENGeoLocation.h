@class NSString, NSDate;

@interface HAENGeoLocation : NSObject

@property (readonly, nonatomic) NSString *countryCode;
@property (readonly, nonatomic) unsigned int source;
@property (readonly, nonatomic) unsigned int sourceDevice;
@property (readonly, nonatomic) NSDate *timestamp;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (void)fetchGeoLocation;
- (id)describeSource;

@end
