@class NSDate;

@interface WiFiUsageLinkSession : WiFiUsageSession {
    BOOL _linkUp;
    BOOL _didIssueFirstLinkTest;
    NSDate *_lastLinkTest;
    NSDate *_lastFaultIndicationTime;
    unsigned long long _numLinkTestFailures;
    BOOL _didHandleFaultEvent;
    BOOL _didBecomePrimary;
    BOOL _foundSuccessfulLinkTest;
}

- (void)rangingCompleted;
- (void)linkQualityDidChange:(id)a0;
- (void)processIPv6Changes:(id)a0;
- (void)linkStateDidChange:(BOOL)a0 isInvoluntary:(BOOL)a1 linkChangeReason:(long long)a2 linkChangeSubreason:(long long)a3 withNetworkDetails:(id)a4;
- (BOOL)useSavedJoinStats;
- (void)performLinkTestFor:(id)a0;
- (id)initWithInterfaceName:(id)a0;
- (id)metricName;
- (void)displayStateDidChange:(BOOL)a0;
- (void)lockStateDidChange:(BOOL)a0;
- (void)processIPv4Changes:(id)a0;
- (void)systemWakeStateDidChange:(BOOL)a0 wokenByWiFi:(BOOL)a1;
- (void)applicationStateDidChange:(id)a0 withAttributes:(id)a1;
- (void)processDHCPChanges:(id)a0;
- (void)faultEventDetected:(unsigned long long)a0;
- (void)processDriverAvailability:(id)a0 available:(unsigned long long)a1 version:(unsigned long long)a2 flags:(unsigned long long)a3 eventID:(unsigned long long)a4 reason:(unsigned long long)a5 subReason:(unsigned long long)a6 minorReason:(unsigned long long)a7 reasonString:(id)a8;
- (void)interfaceRankingDidChange:(BOOL)a0;
- (void)retryLinkTest;
- (void)handleFaultEventWithReason:(id)a0;
- (void).cxx_destruct;

@end
