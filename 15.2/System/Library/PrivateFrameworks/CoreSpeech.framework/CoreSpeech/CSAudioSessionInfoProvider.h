@class NSHashTable, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface CSAudioSessionInfoProvider : NSObject <CSAudioSessionInfoProviding>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *sessionInfoQueue;
@property (retain, nonatomic) NSHashTable *observers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)CSAudioServerCrashMonitorDidReceiveServerCrash:(id)a0;
- (void)_stopMonitoring;
- (unsigned int)audioSessionIdForDeviceId:(id)a0;
- (void)registerObserver:(id)a0;
- (void)_registerAudioRouteChangeNotification;
- (void)_registerAudioSessionNotifications;
- (void)_deregisterAudioSessionNotifications;
- (void)_handleInterruption:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)_startMonitoring;
- (void)CSAudioServerCrashMonitorDidReceiveServerRestart:(id)a0;
- (void)unregisterObserver:(id)a0;
- (void)dealloc;
- (void)_audioRouteChanged:(id)a0;
- (void)_registerInterruptionNotification;

@end
