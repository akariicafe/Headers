@class NSString, HDProfile;

@interface CHCompanionWidgetSchedulingManager : NSObject <HDHealthDaemonReadyObserver, HDDataObserver, HDUserCharacteristicsProfileObserver> {
    HDProfile *_profile;
    long long _wheelchairUse;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithProfile:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)samplesAdded:(id)a0 anchor:(id)a1;
- (void)daemonReady:(id)a0;
- (void)userCharacteristicsManager:(id)a0 didUpdateUserProfile:(id)a1;
- (void)_stopObservingWorkouts;
- (void)_stopObservingUserCharacteristics;
- (void)_startObservingWorkouts;
- (long long)_currentWheelchairUse;
- (void)_startObservingUserCharacteristics;
- (void)_reloadWidgetTimelines;

@end
