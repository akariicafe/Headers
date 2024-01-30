@class NSString, CSAudioServerCrashMonitor, NSObject;
@protocol OS_dispatch_queue;

@interface CSAudioSessionMonitor : CSEventMonitor <CSAudioServerCrashMonitorDelegate, CSAudioSessionEventProvidingDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
    CSAudioServerCrashMonitor *_crashMonitor;
}

@property (nonatomic, getter=getAudioSessionState) unsigned long long audioSessionState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)CSAudioServerCrashMonitorDidReceiveServerCrash:(id)a0;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)_stopMonitoring;
- (void).cxx_destruct;
- (id)initWithCrashMonitor:(id)a0;
- (void)_notifyObserver:(id)a0 withAudioSessionState:(unsigned long long)a1;
- (void)notifyAudioSessionStateChange:(unsigned long long)a0;
- (void)audioSessionEventProvidingWillSetAudioSessionActive:(BOOL)a0;
- (void)audioSessionEventProvidingDidSetAudioSessionActive:(BOOL)a0;

@end
