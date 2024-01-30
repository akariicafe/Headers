@interface PSUIWiFiAssistSwitchSpecifier : PSAppDataUsagePolicySwitchSpecifier {
    struct __CTServerConnection { } *_serverConnection;
}

+ (BOOL)shouldShowWifiAssist;
+ (id)wifiAssistGroupSpecifier;

- (id)getLogger;
- (id)initDefault;
- (void)dealloc;
- (unsigned long long)dataUsage;
- (id)cellularUsagePolicy;
- (void)setCellularUsagePolicy:(id)a0;

@end
