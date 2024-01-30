@class Logger;

@interface PSUIWiFiAssistSwitchSpecifier : PSAppDataUsagePolicySwitchSpecifier {
    struct __CTServerConnection { } *_serverConnection;
    Logger *_logger;
}

+ (BOOL)shouldShowWifiAssist;
+ (id)wifiAssistGroupSpecifier;

- (id)getLogger;
- (unsigned long long)dataUsage;
- (id)initDefault;
- (void).cxx_destruct;
- (void)dealloc;
- (id)cellularUsagePolicy;
- (void)setCellularUsagePolicy:(id)a0;

@end
