@class WiFiUsageNetworkDetails, NSMutableSet, NSDate;

@interface WiFiUsageNetworkSession : WiFiUsageSession {
    WiFiUsageNetworkDetails *_lastNetworkDetails;
    BOOL _linkUp;
    NSDate *_lastLinkUpTime;
    NSDate *_lastLinkDownTime;
    double _networkUsageDuration;
    NSMutableSet *_neighborBssList;
    NSMutableSet *_otherBssList;
}

- (id)metricName;
- (void).cxx_destruct;
- (id)initWithInterfaceName:(id)a0;
- (void)sessionDidStart;
- (void)sessionDidEnd;
- (void)linkStateDidChange:(BOOL)a0 isInvoluntary:(BOOL)a1 linkChangeReason:(long long)a2 linkChangeSubreason:(long long)a3 withNetworkDetails:(id)a4;
- (void)displayStateDidChange:(BOOL)a0;
- (void)joinStateDidChange:(id)a0 withReason:(unsigned long long)a1 lastDisconnectReason:(long long)a2 lastJoinFailure:(long long)a3 andNetworkDetails:(id)a4;
- (void)scanningStateDidChange:(BOOL)a0 client:(unsigned long long)a1 neighborBSS:(id)a2 otherBSS:(id)a3;
- (BOOL)isSessionHarvestable;

@end
