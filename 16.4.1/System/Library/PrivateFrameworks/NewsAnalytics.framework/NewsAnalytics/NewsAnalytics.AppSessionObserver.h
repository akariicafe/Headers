@interface NewsAnalytics.AppSessionObserver : NSObject <NSSNewsAnalyticsAppSessionManagerObserving> {
    void /* unknown type, empty encoding */ appSessionManager;
}

- (void)startAppSessionWithUserIDReset:(id)a0;
- (void)endAppSessionWithEndReason:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
