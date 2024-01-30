@class NSString, AVVoiceTriggerClient, NSObject;
@protocol OS_dispatch_queue;

@interface CSAVVCRecordingClientMonitor : CSEventMonitor <CSAudioServerCrashMonitorDelegate>

@property (retain, nonatomic) AVVoiceTriggerClient *alwaysOnProcessorController;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) unsigned long long numOfAVVCRecordingClients;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)CSAudioServerCrashMonitorDidReceiveServerCrash:(id)a0;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)_stopMonitoring;
- (void)_didReceiveAVVCRecordingClientNumberChange:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;

@end
