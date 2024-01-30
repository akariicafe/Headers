@interface HearingAppPlugin.HeadphoneNotificationsAvailability : NSObject {
    void /* unknown type, empty encoding */ _areHeadphoneNotificationsVisible;
    void /* unknown type, empty encoding */ _headphoneNotificationsFeatureStatus;
    void /* unknown type, empty encoding */ logger;
}

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)headphoneExposureNotificationsEnabledDidChange;

@end
