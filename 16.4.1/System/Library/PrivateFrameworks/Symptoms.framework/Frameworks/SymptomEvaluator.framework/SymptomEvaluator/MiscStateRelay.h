@interface MiscStateRelay : NSObject {
    BOOL _cellPrivateNetworkActive;
    unsigned long long _cellWRMStatus;
    BOOL _cellWRMStatusProlongedBad;
    BOOL _cellWRMExpensive;
    BOOL _wifiDnsProlongedOut;
    BOOL _wifiGoodSecurity;
    BOOL _wifiHotspot20;
    BOOL _wifiManuallyJoined;
    BOOL _wifiPolledFlowsCurrentlyBad;
    BOOL _wifiPolledFlowsProlongedBad;
    BOOL _wifiProfileBased;
    BOOL _wifiPublic;
    unsigned long long _wifiWRMStatus;
    BOOL _LOIUseAuthorized;
    BOOL _homeLocationIsKnown;
    BOOL _wifiHome;
}

@property (nonatomic) unsigned long long cellWRMStatus;
@property (nonatomic) BOOL cellWRMStatusProlongedBad;
@property (nonatomic) BOOL cellWRMExpensive;
@property (nonatomic) BOOL wifiDnsProlongedOut;
@property (nonatomic) BOOL wifiGoodSecurity;
@property (nonatomic) BOOL cellPrivateNetworkActive;
@property (nonatomic) BOOL wifiHotspot20;
@property (nonatomic) BOOL wifiManuallyJoined;
@property (nonatomic) BOOL wifiPolledFlowsCurrentlyBad;
@property (nonatomic) BOOL wifiPolledFlowsProlongedBad;
@property (nonatomic) BOOL wifiProfileBased;
@property (nonatomic) BOOL wifiPublic;
@property (nonatomic) BOOL wifiActive;
@property (nonatomic) BOOL wifiSporadic;
@property (nonatomic) unsigned long long wifiWRMStatus;
@property (nonatomic) BOOL LOIUseAuthorized;
@property (nonatomic) BOOL homeLocationIsKnown;

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (void)setWifiHome:(BOOL)a0;
- (BOOL)wifiHome;

@end
