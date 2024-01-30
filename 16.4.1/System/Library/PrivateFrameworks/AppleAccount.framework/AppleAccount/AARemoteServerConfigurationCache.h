@class AAURLConfiguration, NSHTTPURLResponse, NSDate;

@interface AARemoteServerConfigurationCache : NSObject

@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) AAURLConfiguration *configuration;
@property (readonly, nonatomic) NSHTTPURLResponse *response;

+ (id)cacheWithConfiguration:(id)a0 response:(id)a1;

- (id)initWithConfiguration:(id)a0 response:(id)a1;
- (id)init;
- (void).cxx_destruct;

@end
