@interface WFHealthIssueOverrides : NSObject

@property (nonatomic) BOOL noInternetConnection;
@property (nonatomic) BOOL hiddenNetwork;
@property (nonatomic) BOOL commonSSID;
@property (nonatomic) BOOL legacyPHY;
@property (nonatomic) BOOL carrierNetwork;
@property (nonatomic) BOOL dnsFiltered;
@property (nonatomic) long long securityOverride;
@property (nonatomic) long long privateAddressOverride;
@property (nonatomic) long long cellularOutrankStateOverride;

@end
