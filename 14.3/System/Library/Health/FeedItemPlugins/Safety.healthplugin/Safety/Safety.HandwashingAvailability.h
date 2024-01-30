@interface Safety.HandwashingAvailability : NSObject {
    void /* unknown type, empty encoding */ handwashingPromotionVisibilityPublisher;
    void /* unknown type, empty encoding */ handwashingPromotionVisibility;
    void /* unknown type, empty encoding */ handwashingFeatureStatusPublisher;
    void /* unknown type, empty encoding */ handwashingFeatureStatus;
    void /* unknown type, empty encoding */ settings;
}

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)pairedDevicesDidUpdate;
- (void)didReceiveHandwashingNotification;

@end
