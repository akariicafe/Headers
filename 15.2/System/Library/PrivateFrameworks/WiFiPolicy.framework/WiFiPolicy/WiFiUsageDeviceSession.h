@interface WiFiUsageDeviceSession : WiFiUsageSession {
    BOOL _firstDisplayOn;
}

- (id)metricName;
- (void)systemWakeStateDidChange:(BOOL)a0 wokenByWiFi:(BOOL)a1;
- (id)initWithInterfaceName:(id)a0;
- (void)displayStateDidChange:(BOOL)a0;

@end
