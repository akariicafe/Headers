@class NSString, HDFeatureAvailabilityManager, HDBackgroundFeatureDeliveryManager;

@interface HDGlucoseExperienceProfileExtension : NSObject <HDFeatureAvailabilityExtensionProvider> {
    HDFeatureAvailabilityManager *_featureAvailabilityManager;
    HDBackgroundFeatureDeliveryManager *_featureDeliveryManager;
    NSString *_featureIdentifier;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithProfile:(id)a0;
- (void).cxx_destruct;
- (id)featureAvailabilityExtensionForFeatureIdentifier:(id)a0;

@end
