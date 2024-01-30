@interface NewsAnalytics.AppSessionObserver : NSObject <NSSNewsAnalyticsAppSessionManagerObserving> {
    void /* unknown type, empty encoding */ appSessionManager;
}

- (void)endAppSessionWithEndReason:(id)a0;
- (void)startAppSessionWithUserIDReset:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
