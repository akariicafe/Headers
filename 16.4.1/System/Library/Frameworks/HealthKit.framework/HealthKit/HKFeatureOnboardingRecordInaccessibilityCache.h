@class NSString, NSUserDefaults;

@interface HKFeatureOnboardingRecordInaccessibilityCache : NSObject <HKFeatureOnboardingRecordFallbackProviding> {
    NSUserDefaults *_cachingDefaults;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)_cachedOnboardingRecordForFeatureIdentifier:(id)a0;
- (id)fallbackOnboardingRecordForError:(id)a0 featureIdentifier:(id)a1;
- (id)initWithCachingDefaults:(id)a0;
- (void)updateForRetrievedOnboardingRecord:(id)a0 featureIdentifier:(id)a1;

@end
