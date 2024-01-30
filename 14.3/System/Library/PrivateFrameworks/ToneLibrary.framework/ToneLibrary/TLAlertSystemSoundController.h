@class NSString, NSMapTable, NSObject;
@protocol OS_dispatch_queue;

@interface TLAlertSystemSoundController : NSObject <TLBacklightObserver, TLAlertPlaybackBackEndController> {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSString *_accessQueueLabel;
    NSMapTable *_alertSystemSoundContexts;
    long long _backlightStatus;
    unsigned long long _backlightObservationRequestsCount;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_toneIdentifierForDeemphasizingAlert:(id)a0;
+ (id)_soundForAlert:(id)a0 toneIdentifierForDeemphasizingAlert:(id)a1;
+ (void)_reportPlaybackFailureWithPlaybackCompletionContext:(id)a0;
+ (id)_optionsForSystemSoundAlert:(id)a0 withSound:(id)a1;
+ (unsigned int)_soundBehaviorForAlert:(id)a0 withSound:(id)a1;
+ (unsigned int)_componentSuppressionFlagsForAlert:(id)a0;
+ (id)_descriptionForAlertComponentsSuppressionFlags:(unsigned int)a0;
+ (id)_vibrationPatternForAlert:(id)a0 withSound:(id)a1;
+ (double)_unduckTimeForAlert:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_assertRunningOnAccessQueue;
- (void)_performBlockOnAccessQueue:(id /* block */)a0;
- (void)_prepareForDealloc;
- (void)_stopPlayingAlerts:(id)a0 withOptions:(id)a1 playbackCompletionType:(long long)a2 willStopAlertsHandler:(id /* block */)a3 completionHandler:(id /* block */)a4;
- (void)_playAlert:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)_beginRequiringBacklightObservation;
- (void)_notifyOfPlaybackCompletionWithContext:(id)a0;
- (void)_willBeginPlayingAlert:(id)a0 withSound:(id)a1;
- (void)_playAlert:(id)a0 withSound:(id)a1;
- (void)_didCompletePlaybackForAlert:(id)a0;
- (void)_preheatForAlert:(id)a0 completionHandler:(id /* block */)a1;
- (void)_endRequiringBacklightObservation;
- (void)backlightStatusDidChange:(long long)a0;
- (void)playAlert:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)stopPlayingAlerts:(id)a0 withOptions:(id)a1 playbackCompletionType:(long long)a2 willStopAlertsHandler:(id /* block */)a3 completionHandler:(id /* block */)a4;
- (void)preheatForAlert:(id)a0 completionHandler:(id /* block */)a1;

@end
