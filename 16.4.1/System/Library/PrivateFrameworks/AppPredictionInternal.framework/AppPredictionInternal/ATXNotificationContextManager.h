@class ATXMotionManagerWrapper, _ATXAppLaunchCategoricalHistogram, ATXLocationManager, ATXNotificationsContentAnalyzer, _ATXAppLaunchHistogram;

@interface ATXNotificationContextManager : NSObject {
    ATXMotionManagerWrapper *_motionmanager;
    ATXLocationManager *_locationmanager;
    ATXNotificationsContentAnalyzer *_contentanalyzer;
    _ATXAppLaunchCategoricalHistogram *_notificationsHistory;
    _ATXAppLaunchHistogram *_appHistory;
}

+ (id)sharedInstance;
+ (void)appendContentFeaturesToMetadata:(id)a0 features:(id)a1;
+ (void)appendMotionToMetadata:(id)a0 motion:(id)a1;
+ (void)appendLocationToMetadata:(id)a0 locationType:(id)a1 visits:(unsigned long long)a2;
+ (void)appendNotificationHistoryToMetadata:(id)a0 history:(id)a1;

- (id)getNotificationHistoryForApp:(id)a0;
- (void)appendContextToMetadata:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
