@interface PSUIWiFiAssistSwitchSpecifier : PSAppDataUsagePolicySwitchSpecifier

+ (BOOL)shouldShowWifiAssist;
+ (id)wifiAssistGroupSpecifier;

- (unsigned long long)dataUsage;
- (id)initDefault;
- (id)cellularUsagePolicy;
- (void)setCellularUsagePolicy:(id)a0;

@end
