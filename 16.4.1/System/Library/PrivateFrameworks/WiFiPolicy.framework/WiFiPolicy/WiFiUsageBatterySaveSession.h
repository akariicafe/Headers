@interface WiFiUsageBatterySaveSession : WiFiUsageSession {
    BOOL _batterySaveMode;
}

- (void)updateWowState:(BOOL)a0 lpasState:(BOOL)a1 lowPowerState:(BOOL)a2 batterySaverState:(BOOL)a3;
- (id)initWithInterfaceName:(id)a0;
- (id)metricName;

@end
