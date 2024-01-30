@class NSString, NSArray;

@interface HDMinorExperiencesProfileExtension : NSObject <HDFeatureAvailabilityExtensionProvider> {
    NSArray *_minorExperiences;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithProfile:(id)a0;
- (void).cxx_destruct;
- (id)featureAvailabilityExtensionForFeatureIdentifier:(id)a0;

@end
