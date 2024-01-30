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

- (void)_stopMonitoring;
- (void)_handleInterruption:(id)a0;
- (void)_deregisterAudioSessionNotifications;
- (void)_registerAudioRouteChangeNotification;
- (void)registerObserver:(id)a0;
- (void)dealloc;
- (void)CSAudioServerCrashMonitorDidReceiveServerCrash:(id)a0;
- (void)unregisterObserver:(id)a0;
- (id)init;
- (void)_registerAudioSessionNotifications;
- (void)_audioRouteChanged:(id)a0;
- (void)_registerInterruptionNotification;
- (void)_startMonitoring;
- (void).cxx_destruct;
- (void)CSAudioServerCrashMonitorDidReceiveServerRestart:(id)a0;
- (unsigned int)audioSessionIdForDeviceId:(id)a0;

@end
