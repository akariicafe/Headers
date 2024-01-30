@class NSString, AVVoiceTriggerClient;

@interface CSAudioServerCrashMonitor : CSEventMonitor <CSAudioServerCrashEventProvidingDelegate>

@property (nonatomic) unsigned long long serverState;
@property (retain, nonatomic) AVVoiceTriggerClient *alwaysOnProcessorController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)_startMonitoringWithQueue:(id)a0;
- (void)_mediaserverdDidRestart;
- (void)_didReceiveMediaserverNotification:(unsigned long long)a0;
- (void)audioServerCrashEventProvidingLostMediaserverd;
- (id)init;
- (void)_notifyObserver:(id)a0 withMediaserverState:(unsigned long long)a1;
- (void).cxx_destruct;

@end
