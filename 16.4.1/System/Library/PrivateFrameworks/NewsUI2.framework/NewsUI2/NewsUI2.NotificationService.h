@interface NewsUI2.NotificationService : NSObject <AMSUserNotificationAuthorizationDelegate> {
    void /* unknown type, empty encoding */ authorizationOptions;
    void /* unknown type, empty encoding */ sceneProvider;
    void /* unknown type, empty encoding */ networkReachability;
    void /* unknown type, empty encoding */ metricsProvider;
}

- (void)handleEngagementRequest:(id)a0 completion:(id /* block */)a1;
- (id)init;
- (void).cxx_destruct;

@end
