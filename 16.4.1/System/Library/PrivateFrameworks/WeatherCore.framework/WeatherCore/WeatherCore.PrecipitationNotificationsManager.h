@interface WeatherCore.PrecipitationNotificationsManager : NSObject {
    void /* unknown type, empty encoding */ weatherDataService;
    void /* unknown type, empty encoding */ policyHandler;
    void /* unknown type, empty encoding */ notificationContentFactory;
    void /* unknown type, empty encoding */ notificationDeliveryScheduler;
    void /* unknown type, empty encoding */ notificationFetchScheduler;
    void /* unknown type, empty encoding */ notificationSubscriptionManager;
    void /* unknown type, empty encoding */ notificationConfigurationProvider;
    void /* unknown type, empty encoding */ notificationAuthorizationStatusProvider;
    void /* unknown type, empty encoding */ locationManager;
    void /* unknown type, empty encoding */ notificationsEnablementTracker;
    void /* unknown type, empty encoding */ notificationAccuracyTracker;
    void /* unknown type, empty encoding */ operationQueue;
    void /* unknown type, empty encoding */ observingCurrentLocation;
}

- (id)init;
- (void).cxx_destruct;

@end
