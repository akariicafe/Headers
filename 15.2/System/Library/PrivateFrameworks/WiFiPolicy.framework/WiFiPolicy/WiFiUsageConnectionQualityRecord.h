@class NSString, GEOWiFiConnectionQuality;

@interface WiFiUsageConnectionQualityRecord : NSObject

@property (retain, nonatomic) GEOWiFiConnectionQuality *geoMessage;
@property (retain, nonatomic) NSString *identifier;

- (void).cxx_destruct;
- (id)initWithUsageSession:(id)a0 andNeighborBssList:(id)a1 andOtherBssList:(id)a2;
- (void)queryNetworkPerformanceFeedAndSubmitToGeoWiFi;

@end
