@interface WiFiUsageLinkSession : WiFiUsageSession {
    BOOL _linkUp;
}

- (id)metricName;
- (id)initWithInterfaceName:(id)a0;
- (void)linkStateDidChange:(BOOL)a0 isInvoluntary:(BOOL)a1 linkChangeReason:(long long)a2 linkChangeSubreason:(long long)a3 withNetworkDetails:(id)a4;

@end
