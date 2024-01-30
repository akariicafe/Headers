@class HDProfile, NSMutableDictionary;

@interface HDOnboardingCompletionManager : NSObject {
    HDProfile *_profile;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableDictionary *_observersByFeatureIdentifier;
}

- (id)initWithProfile:(id)a0;
- (BOOL)_insertCodableOnboardingCompletions:(id)a0 syncProvenance:(long long)a1 error:(id *)a2 inaccessabilityHandler:(id /* block */)a3;
- (BOOL)insertOnboardingCompletion:(id)a0 error:(id *)a1;
- (void)_lock_unregisterObserver:(id)a0 featureIdentifier:(id)a1;
- (void)registerObserver:(id)a0 featureIdentifier:(id)a1 queue:(id)a2;
- (void).cxx_destruct;
- (void)unregisterObserver:(id)a0 featureIdentifier:(id)a1;
- (id)onboardingCompletionsForLowestVersionOfFeatureIdentifier:(id)a0 error:(id *)a1;
- (BOOL)insertCodableOnboardingCompletions:(id)a0 syncProvenance:(long long)a1 error:(id *)a2;
- (void)unregisterObserver:(id)a0;
- (BOOL)resetOnboardingCompletionsForFeature:(id)a0 error:(id *)a1;
- (void)_notifyObserversOfFeatureIdentifiers:(id)a0;
- (id)onboardingCompletionsForHighestVersionOfFeatureIdentifier:(id)a0 error:(id *)a1;
- (BOOL)_performWriteTransactionAndNotifyObserversWithError:(id *)a0 block:(id /* block */)a1 inaccessibilityHandler:(id /* block */)a2;

@end
