@class NSString, HDFeatureAvailabilityManager;

@interface HDExampleFeatureProfileExtension : NSObject <HDFeatureAvailabilityExtensionProvider> {
    HDFeatureAvailabilityManager *_featureAvailabilityManager;
    NSString *_featureIdentifier;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithProfile:(id)a0;
- (id)featureAvailabilityExtensionForFeatureIdentifier:(id)a0;
- (void).cxx_destruct;

@end
