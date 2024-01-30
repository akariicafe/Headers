@class NSDate;

@interface WiFiUsageLinkSession : WiFiUsageSession {
    BOOL _linkUp;
    NSDate *_lastLinkTest;
    NSDate *_lastFaultIndicationTime;
}

- (void)lockStateDidChange:(BOOL)a0;
- (void)faultEventDetected:(unsigned long long)a0;
- (void)linkStateDidChange:(BOOL)a0 isInvoluntary:(BOOL)a1 linkChangeReason:(long long)a2 linkChangeSubreason:(long long)a3 withNetworkDetails:(id)a4;
- (id)metricName;
- (void)applicationStateDidChange:(id)a0 withAttributes:(id)a1;
- (id)initWithInterfaceName:(id)a0;
- (void)displayStateDidChange:(BOOL)a0;
- (void).cxx_destruct;
- (void)performLinkTestFor:(id)a0;

@end
