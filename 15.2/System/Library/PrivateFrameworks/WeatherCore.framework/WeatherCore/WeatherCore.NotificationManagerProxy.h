@interface WeatherCore.NotificationManagerProxy : NSObject <NSXPCListenerDelegate, WeatherCore.NotificationManagerProxyType> {
    void /* unknown type, empty encoding */ listener;
    void /* unknown type, empty encoding */ weatherDataService;
    void /* unknown type, empty encoding */ policyHandler;
    void /* unknown type, empty encoding */ notificationContentFactory;
    void /* unknown type, empty encoding */ notificationDeliveryScheduler;
    void /* unknown type, empty encoding */ notificationFetchScheduler;
    void /* unknown type, empty encoding */ notificationSubscriptionManager;
    void /* unknown type, empty encoding */ appConfigurationManager;
    void /* unknown type, empty encoding */ notificationAuthorizationStatusProvider;
    void /* unknown type, empty encoding */ locationManager;
    void /* unknown type, empty encoding */ operationQueue;
    void /* unknown type, empty encoding */ observingCurrentLocation;
}

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)evaluateWith:(id /* block */)a0;
- (void)scheduleWith:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;

@end
