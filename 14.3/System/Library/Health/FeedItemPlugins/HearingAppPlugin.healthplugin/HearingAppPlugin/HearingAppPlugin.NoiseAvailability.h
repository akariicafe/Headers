@interface HearingAppPlugin.NoiseAvailability : NSObject {
    void /* unknown type, empty encoding */ noiseFeatureStatusPublisher;
    void /* unknown type, empty encoding */ noiseFeatureStatus;
    void /* unknown type, empty encoding */ noisePromotionVisibilityPublisher;
    void /* unknown type, empty encoding */ noisePromotionVisibility;
}

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)pairedDevicesDidUpdate;

@end
