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

- (void)registerObserver:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_stopMonitoring;
- (void)dealloc;
- (void)_handleInterruption:(id)a0;
- (void)_deregisterAudioSessionNotifications;
- (void)_startMonitoring;
- (void)_registerAudioSessionNotifications;
- (void)_registerInterruptionNotification;
- (void)unregisterObserver:(id)a0;
- (void)CSAudioServerCrashMonitorDidReceiveServerRestart:(id)a0;
- (void)_audioRouteChanged:(id)a0;
- (unsigned int)audioSessionID;
- (void)_registerAudioRouteChangeNotification;
- (void)CSAudioServerCrashMonitorDidReceiveServerCrash:(id)a0;

@end
