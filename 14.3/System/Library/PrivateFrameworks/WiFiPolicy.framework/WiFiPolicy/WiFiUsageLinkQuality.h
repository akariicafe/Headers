@interface WiFiUsageLinkQuality : NSObject

@property (nonatomic) long long rssi;
@property (nonatomic) long long noise;
@property (nonatomic) long long snr;
@property (nonatomic) long long selfCca;
@property (nonatomic) long long otherCca;
@property (nonatomic) long long interference;
@property (nonatomic) long long totalReportedCca;
@property (nonatomic) long long beaconPer;

+ (id)linkQualityWithRssi:(long long)a0 noise:(long long)a1 snr:(long long)a2 selfCca:(long long)a3 otherCca:(long long)a4 interference:(long long)a5 totalReportedCca:(long long)a6 beaconPer:(long long)a7;

@end
