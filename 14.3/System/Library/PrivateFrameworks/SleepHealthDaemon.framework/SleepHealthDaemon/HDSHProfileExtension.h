@class HDSHFeatureAvailabilityManager, NSString, HDProfile, HDSHAccessibilityAssertionManager;

@interface HDSHProfileExtension : NSObject <HDProfileExtension, HDFeatureAvailabilityExtensionProvider> {
    id /* block */ _sleepStoreProvider;
}

@property (readonly, nonatomic) HDSHAccessibilityAssertionManager *accessibilityAssertionManager;
@property (readonly, nonatomic) HDSHFeatureAvailabilityManager *coachingAvailabilityManager;
@property (readonly, nonatomic) HDSHFeatureAvailabilityManager *trackingAvailabilityManager;
@property (readonly, nonatomic) HDSHFeatureAvailabilityManager *windDownShortcutsAvailabilityManager;
@property (readonly, weak, nonatomic) HDProfile *profile;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
