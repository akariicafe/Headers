@interface CapturedSystemState : NSObject

@property (nonatomic) unsigned int cosmState;
@property (nonatomic) unsigned long long reasonFlags;
@property (nonatomic) unsigned long long wrmStatus;
@property (nonatomic) double timestamp;
@property (nonatomic) int cellularRAT;
@property (nonatomic) int cellularRSRP;
@property (nonatomic) int cellularNRFrequencyBand;
@property (nonatomic) long long cellularBandwidth;
@property (readonly, nonatomic) BOOL cellularExpensive;
@property (readonly, nonatomic) BOOL cellularWRMExpensive;
@property (nonatomic) int wifiRAT;
@property (nonatomic) int wifiRSSI;
@property (readonly, nonatomic) BOOL wifiSecure;
@property (nonatomic) int outrankPercentFGExploited;
@property (nonatomic) int outrankPercentFGNonExploited;
@property (nonatomic) int outrankPercentIconShown;
@property (nonatomic) int outrankNumIconOnTransitions;
@property (nonatomic) int outrankNumFGAppsExploiting;
@property (nonatomic) int outrankNumFGAppsNonExploiting;

@end
