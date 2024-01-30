@class NSDictionary;

@interface SHInsights : NSObject

@property (retain, nonatomic) NSDictionary *insightsDictionary;

- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (long long)maxGeoChartsGeohashLength;
- (id)targetingEndpointForStorefront:(id)a0;
- (long long)minGeoChartsGeohashLength;
- (id)geoChartsEndpointForDate:(id)a0 geoHash:(id)a1;

@end
