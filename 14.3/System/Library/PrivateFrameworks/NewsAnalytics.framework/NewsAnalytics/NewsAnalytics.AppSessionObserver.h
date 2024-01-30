@interface NewsAnalytics.AppSessionObserver : NSObject <NSSNewsAnalyticsAppSessionManagerObserving> {
    void /* unknown type, empty encoding */ appSessionManager;
}

- (void)endAppSessionWithEndReason:(id)a0;
- (void)startAppSessionWithUserIDReset:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
