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

+ (BOOL)_shouldStopAlertForUserInterruption:(id)a0;
+ (long long)_playbackBackEndForAlert:(id)a0;
+ (long long)_playbackBackEndForAlertType:(long long)a0 topic:(id)a1;

- (void)updateAudioVolumeDynamicallyForAlert:(id)a0 toValue:(float)a1;
- (void)_performBlockOnAccessQueue:(id /* block */)a0;
- (BOOL)stopPlayingAlerts:(id)a0 withOptions:(id)a1 playbackCompletionType:(long long)a2;
- (void)preheatForAlert:(id)a0 completionHandler:(id /* block */)a1;
- (void)_assertRunningOnAccessQueue;
- (void)playAlert:(id)a0 withCompletionHandler:(id /* block */)a1;
- (id)_systemSoundController;
- (id)_controllerForPlaybackBackEnd:(long long)a0;
- (BOOL)stopAllAlerts;
- (void)dealloc;
- (void)handleActivationAssertionStatusChangeForAlert:(id)a0 updatedStatus:(BOOL)a1;
- (id)_prepareForPlayingAlert:(id)a0;
- (id)init;
- (void)_didCompletePlaybackOfAlert:(id)a0;
- (id)_queuePlayerController;
- (void)_didReachTimeoutForAlert:(id)a0;
- (BOOL)_stopPlayingAlerts:(id)a0 withOptions:(id)a1 playbackCompletionType:(long long)a2;
- (void).cxx_destruct;
- (BOOL)_stopAllAlertsInCurrentProcess;

@end
