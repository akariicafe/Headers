@class NSString, HDProfile;

@interface CHCompanionWidgetSchedulingManager : NSObject <HDProfileReadyObserver, HDDataObserver, HDUserCharacteristicsProfileObserver> {
    HDProfile *_profile;
    long long _wheelchairUse;
    int _standalonePhoneFitnessModeChangeToken;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)samplesAdded:(id)a0 anchor:(id)a1;
- (void)profileDidBecomeReady:(id)a0;
- (id)initWithProfile:(id)a0;
- (void)userCharacteristicsManager:(id)a0 didUpdateUserProfile:(id)a1;
- (void)_stopObservingWorkouts;
- (void)_startObservingUserCharacteristics;
- (void)_startObservingStandalonePhoneFitnessMode;
- (long long)_currentWheelchairUse;
- (void)_reloadWidgetTimelines;
- (void)dealloc;
- (void)_startObservingWorkouts;
- (void)_donateRelevance;
- (void)_stopObservingStandalonePhoneFitnessMode;
- (void).cxx_destruct;
- (void)_stopObservingUserCharacteristics;

@end
