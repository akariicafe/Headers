@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface CSAudioSessionMonitor : CSEventMonitor <CSAudioServerCrashMonitorDelegate, CSAudioSessionEventProvidingDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (nonatomic, getter=getAudioSessionState) unsigned long long audioSessionState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)CSAudioServerCrashMonitorDidReceiveServerCrash:(id)a0;
- (void)_notifyObserver:(id)a0 withAudioSessionState:(unsigned long long)a1;
- (void)notifyAudioSessionStateChange:(unsigned long long)a0;
- (void)audioSessionEventProvidingWillSetAudioSessionActive:(BOOL)a0;
- (void)audioSessionEventProvidingDidSetAudioSessionActive:(BOOL)a0;

@end
