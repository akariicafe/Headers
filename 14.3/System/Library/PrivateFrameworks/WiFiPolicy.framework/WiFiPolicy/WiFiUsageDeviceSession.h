@interface WiFiUsageDeviceSession : WiFiUsageSession {
    BOOL _firstDisplayOn;
}

- (id)metricName;
- (id)initWithInterfaceName:(id)a0;
- (void)systemWakeStateDidChange:(BOOL)a0 wokenByWiFi:(BOOL)a1;
- (void)displayStateDidChange:(BOOL)a0;

@end
