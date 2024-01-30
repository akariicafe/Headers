@class NSUUID;

@interface WRM_iRATProximityRecommendationLogging : NSObject

@property (retain, nonatomic) NSUUID *Uuid;
@property (nonatomic) unsigned long long btRSSI;
@property (nonatomic) long long wifiRSSI;
@property (nonatomic) long long wifiSNR;
@property (nonatomic) int beaconPER;
@property (nonatomic) char nwType;
@property (nonatomic) long long wifiCCA;
@property (nonatomic) long long lsmRecommendationBe;
@property (nonatomic) long long expectedThroughputVIBE;
@property (nonatomic) long long packetLifetimeVIBE;
@property (nonatomic) long long packetLossRateVIBE;
@property (nonatomic) long long btRetransmissionRateTx;
@property (nonatomic) long long btRetransmissionRateRx;
@property (nonatomic) long long btTech;

- (id)init;
- (void)dealloc;

@end
