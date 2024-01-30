@class NSString, TLAudioQueue, NSMapTable;

@interface TLAlertSystemSoundController : NSObject <TLBacklightObserver, TLAlertPlaybackBackEndController> {
    TLAudioQueue *_audioQueue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMapTable *_alertSystemSoundContexts;
    long long _backlightStatus;
    unsigned long long _backlightObservationRequestsCount;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned int)_componentSuppressionFlagsForAlert:(id)a0;
+ (id)_descriptionForAlertComponentsSuppressionFlags:(unsigned int)a0;
+ (id)_optionsForSystemSoundAlert:(id)a0 withSound:(id)a1;
+ (unsigned int)_soundBehaviorForAlert:(id)a0 withSound:(id)a1;
+ (id)_soundForAlert:(id)a0 toneIdentifierForDeemphasizingAlert:(id)a1;
+ (id)_toneIdentifierForDeemphasizingAlert:(id)a0;
+ (id)_vibrationPatternForAlert:(id)a0 withSound:(id)a1;

- (BOOL)stopPlayingAlerts:(id)a0 withOptions:(id)a1 playbackCompletionType:(long long)a2;
- (void)preheatForAlert:(id)a0 completionHandler:(id /* block */)a1;
- (void)playAlert:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_beginRequiringBacklightObservationForAlert:(id)a0 alertSystemSoundContext:(id)a1;
- (struct { long long x0; BOOL x1; BOOL x2; })_considerDeferringPlayingAlertForBacklightStatusResolution:(id)a0 alertSystemSoundContext:(id)a1;
- (void)_didCompletePlaybackForAlert:(id)a0;
- (void)_endRequiringBacklightObservationForAlert:(id)a0 alertSystemSoundContext:(id)a1;
- (void)_playAlert:(id)a0 alertSystemSoundContext:(id)a1 toneIdentifierForDeemphasizingAlert:(id)a2 backlightStatusResolutionDeferralContext:(struct { long long x0; BOOL x1; BOOL x2; })a3;
- (id)_playTaskDescriptorForAlert:(id)a0 withSound:(id)a1 alertSystemSoundContext:(id)a2;
- (void)_preheatForAlert:(id)a0 backlightStatus:(long long)a1 completionHandler:(id /* block */)a2;
- (id)_prepareForPreemptingAlertsBeforeBeginningPlaybackOfAlert:(id)a0 withSound:(id)a1 playbackCompletionType:(long long)a2;
- (id)_prepareForStoppingAlerts:(id)a0 withOptions:(id)a1 playbackCompletionType:(long long)a2;
- (void)_processDeemphasizableAlertChangesForBackglightStatus:(long long)a0 stopTasksDescriptorForDeemphasizedAlerts:(id)a1 deemphasizableAlertBeginPlayingContexts:(id)a2;
- (void)_processPlayTaskDescriptors:(id)a0;
- (void)_processPlaybackCompletionContexts:(id)a0;
- (void)_processStopTasksDescriptor:(id)a0;
- (void)_removeAlert:(id)a0 alertSystemSoundContext:(id)a1 didFailToPrepareSound:(BOOL)a2 appendingPlaybackCompletionContextToArray:(id)a3;
- (void)backlightStatusDidChange:(long long)a0;

@end
