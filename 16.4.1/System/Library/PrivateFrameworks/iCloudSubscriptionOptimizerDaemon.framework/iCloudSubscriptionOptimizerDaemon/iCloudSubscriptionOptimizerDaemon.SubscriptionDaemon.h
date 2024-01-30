@interface iCloudSubscriptionOptimizerDaemon.SubscriptionDaemon : _TtCs12_SwiftObject {
    void /* unknown type, empty encoding */ stopwatch;
    void /* unknown type, empty encoding */ mainLoop;
    void /* unknown type, empty encoding */ xpcServer;
    void /* unknown type, empty encoding */ mobileAssetDownloadManager;
    void /* unknown type, empty encoding */ exitTimer;
    void /* unknown type, empty encoding */ batteryStateProvider;
}

- (void)onExitTimerRun;

@end
