@class HDProfile, NSMutableDictionary;

@interface HDOnboardingCompletionManager : NSObject {
    HDProfile *_profile;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableDictionary *_observersByFeatureIdentifier;
}

- (void)registerObserver:(id)a0 featureIdentifier:(id)a1 queue:(id)a2;
- (id)initWithProfile:(id)a0;
- (id)onboardingCompletionsForLowestVersionOfFeatureIdentifier:(id)a0 error:(id *)a1;
- (BOOL)insertCodableOnboardingCompletions:(id)a0 syncProvenance:(long long)a1 syncIdentity:(long long)a2 error:(id *)a3;
- (id)onboardingCompletionsForHighestVersionOfFeatureIdentifier:(id)a0 error:(id *)a1;
- (void)unregisterObserver:(id)a0;
- (BOOL)insertOnboardingCompletion:(id)a0 error:(id *)a1;
- (BOOL)resetOnboardingCompletionsForFeature:(id)a0 error:(id *)a1;
- (void)unregisterObserver:(id)a0 featureIdentifier:(id)a1;
- (void).cxx_destruct;

@end
