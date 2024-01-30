@class NSString, NSMapTable, TLAlertQueuePlayerController, NSObject, TLAlertSystemSoundController;
@protocol OS_dispatch_queue;

@interface TLAlertController : NSObject <TLAlertPlaybackBackEndController> {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSString *_accessQueueLabel;
    TLAlertQueuePlayerController *_queuePlayerController;
    TLAlertSystemSoundController *_systemSoundController;
    NSMapTable *_alertContexts;
}

@property (class, readonly) TLAlertController *sharedAlertController;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)_playbackBackEndForAlertType:(long long)a0 topic:(id)a1;
+ (long long)_playbackBackEndForAlert:(id)a0;
+ (BOOL)_shouldStopAlertForUserInterruption:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_assertRunningOnAccessQueue;
- (void)_performBlockOnAccessQueue:(id /* block */)a0;
- (void)_stopPlayingAlerts:(id)a0 withOptions:(id)a1 playbackCompletionType:(long long)a2 willStopAlertsHandler:(id /* block */)a3 completionHandler:(id /* block */)a4;
- (void)playAlert:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)stopPlayingAlerts:(id)a0 withOptions:(id)a1 playbackCompletionType:(long long)a2 willStopAlertsHandler:(id /* block */)a3 completionHandler:(id /* block */)a4;
- (void)handleActivationAssertionStatusChangeForAlert:(id)a0 updatedStatus:(BOOL)a1;
- (void)preheatForAlert:(id)a0 completionHandler:(id /* block */)a1;
- (void)updateAudioVolumeDynamicallyForAlert:(id)a0 toValue:(float)a1;
- (BOOL)stopAllAlerts;
- (BOOL)_stopAllAlertsInCurrentProcess;
- (id)_prepareForPlayingAlert:(id)a0;
- (void)_didCompletePlaybackOfAlert:(id)a0;
- (id)_controllerForPlaybackBackEnd:(long long)a0;
- (void)_didReachTimeoutForAlert:(id)a0;
- (id)_queuePlayerController;
- (id)_systemSoundController;

@end
