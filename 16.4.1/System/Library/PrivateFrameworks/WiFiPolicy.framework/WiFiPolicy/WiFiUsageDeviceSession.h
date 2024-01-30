@interface WiFiUsageDeviceSession : WiFiUsageSession {
    BOOL _firstDisplayOn;
}

- (id)initWithInterfaceName:(id)a0;
- (id)metricName;
- (void)displayStateDidChange:(BOOL)a0;
- (void)systemWakeStateDidChange:(BOOL)a0 wokenByWiFi:(BOOL)a1;

@end
