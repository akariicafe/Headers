@class NSString, HDProfile;

@interface CHCompanionWidgetSchedulingManager : NSObject <HDHealthDaemonReadyObserver, HDDataObserver, HDUserCharacteristicsProfileObserver> {
    HDProfile *_profile;
    long long _wheelchairUse;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)samplesAdded:(id)a0 anchor:(id)a1;
- (void)daemonReady:(id)a0;
- (id)initWithProfile:(id)a0;
- (void)_stopObservingUserCharacteristics;
- (void)_donateRelevance;
- (void)_startObservingWorkouts;
- (long long)_currentWheelchairUse;
- (void)userCharacteristicsManager:(id)a0 didUpdateUserProfile:(id)a1;
- (void)_startObservingUserCharacteristics;
- (void).cxx_destruct;
- (void)_reloadWidgetTimelines;
- (void)_stopObservingWorkouts;
- (void)dealloc;

@end
