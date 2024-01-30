@class NSString, NSHashTable, CSXPCClient, NSObject;
@protocol OS_dispatch_queue, CSAudioSessionInfoProviding;

@interface CSAudioSessionController : NSObject <CSAudioSessionInfoProvidingDelegate, CSXPCClientDelegate, CSCoreSpeechDaemonStateMonitorDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) id<CSAudioSessionInfoProviding> sessionInfoProvider;
@property (retain, nonatomic) CSXPCClient *xpcClient;
@property BOOL shouldKeepConnection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)_mediaServicesWereLost:(id)a0;
- (void)registerObserver:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_stopMonitoring;
- (void)dealloc;
- (void)_handleInterruption:(id)a0;
- (void)_teardownXPCClientIfNeeded;
- (void)_startMonitoring;
- (void)_registerInterruptionNotification;
- (void)audioSessionInfoProvider:(id)a0 didReceiveAudioSessionMediaServicesWereResetNotificationWithUserInfo:(id)a1;
- (void)_mediaServicesWereReset:(id)a0;
- (unsigned int)getAudioSessionID;
- (BOOL)_createXPCClientConnectionIfNeeded;
- (void)unregisterObserver:(id)a0;
- (void)audioSessionInfoProvider:(id)a0 didReceiveAudioSessionMediaServicesWereLostNotificationWithUserInfo:(id)a1;
- (void)coreSpeechDaemonStateMonitor:(id)a0 didReceiveStateChanged:(unsigned long long)a1;
- (void)CSXPCClient:(id)a0 didDisconnect:(BOOL)a1;
- (void)_audioRouteChanged:(id)a0;
- (unsigned int)_getAudioSessionID;
- (void)getAudioSessionIDWithCompletion:(id /* block */)a0;
- (void)audioSessionInfoProvider:(id)a0 didReceiveAudioSessionRouteChangeNotificationWithUserInfo:(id)a1;
- (void)_registerAudioRouteChangeNotification;
- (void)audioSessionInfoProvider:(id)a0 didReceiveAudioSessionInterruptionNotificationWithUserInfo:(id)a1;
- (unsigned int)_getLocalAudioSessionID;

@end
