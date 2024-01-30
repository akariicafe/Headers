@class NSString, NSDate;

@interface HAENGeoLocation : NSObject

@property (readonly, nonatomic) NSString *countryCode;
@property (readonly, nonatomic) unsigned int source;
@property (readonly, nonatomic) unsigned int sourceDevice;
@property (readonly, nonatomic) NSDate *timestamp;

- (void)fetchGeoLocation;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)describeSource;

@end
