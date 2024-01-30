@interface WiFiUsageUserSession : WiFiUsageSession {
    BOOL _userInactive;
    BOOL _deviceLocked;
}

- (void)lockStateDidChange:(BOOL)a0;
- (id)metricName;
- (void)linkQualityDidChange:(id)a0;
- (id)initWithInterfaceName:(id)a0;
- (void)displayStateDidChange:(BOOL)a0;

@end
