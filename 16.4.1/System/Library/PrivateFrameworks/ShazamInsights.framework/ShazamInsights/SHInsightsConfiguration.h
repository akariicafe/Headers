@class SHBagContract;

@interface SHInsightsConfiguration : NSObject

@property (readonly, nonatomic) SHBagContract *bagContract;
@property (readonly, nonatomic) double tracksCachedDataMaxAge;
@property (readonly, nonatomic) BOOL tracksEnabled;
@property (readonly, nonatomic) double artistsCachedDataMaxAge;
@property (readonly, nonatomic) BOOL artistsEnabled;
@property (readonly, nonatomic) long long minGeoChartsGeohashLength;
@property (readonly, nonatomic) long long maxGeoChartsGeohashLength;

+ (id)bagContract;
+ (void)fetchSharedInstanceWithCompletion:(id /* block */)a0;

- (id)initWithBagContract:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)artistsClusterEndpoint;
- (id)geoChartsEndpointForDate:(id)a0 geoHash:(id)a1;
- (id)tokenizedURLForBagPathKey:(id)a0;
- (id)tracksClusterEndpointForStorefront:(id)a0;

@end
