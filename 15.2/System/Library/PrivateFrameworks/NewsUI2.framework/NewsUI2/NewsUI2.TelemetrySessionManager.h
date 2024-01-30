@class NSString;

@interface NewsUI2.TelemetrySessionManager : NSObject <FCNetworkEventObserving, NSSNewsAnalyticsSessionManagerObserving> {
    void /* unknown type, empty encoding */ sessionManager;
    void /* unknown type, empty encoding */ sessionObserver;
    void /* unknown type, empty encoding */ sceneSessionIdentifier;
}

@property (nonatomic, copy) NSString *sceneSessionIdentifier;

- (void)networkEventMonitor:(id)a0 loggedEvent:(id)a1 inSession:(id)a2;
- (void)sessionDidStartWithSessionID:(id)a0 sourceApplication:(id)a1;
- (void)sessionWillResignActive;
- (void)sessionWillEndWithEndReason:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
