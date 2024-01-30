@class NSUUID, NSString, NSHashTable, CSXPCClient, NSObject;
@protocol OS_dispatch_queue, CSAudioSessionInfoProviding;

@interface CSAudioSessionController : NSObject <CSAudioSessionInfoProvidingDelegate, CSXPCClientDelegate, CSCoreSpeechDaemonStateMonitorDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) id<CSAudioSessionInfoProviding> sessionInfoProvider;
@property (retain, nonatomic) CSXPCClient *xpcClient;
@property BOOL shouldKeepConnection;
@property (retain, nonatomic) NSUUID *endpointId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)audioSessionInfoProvider:(id)a0 didReceiveAudioSessionMediaServicesWereLostNotificationWithUserInfo:(id)a1;
- (void)CSXPCClient:(id)a0 didDisconnect:(BOOL)a1;
- (void)_stopMonitoring;
- (unsigned int)_getAudioSessionID;
- (unsigned int)getAudioSessionID;
- (void)coreSpeechDaemonStateMonitor:(id)a0 didReceiveStateChanged:(unsigned long long)a1;
- (void)registerObserver:(id)a0;
- (void)_registerAudioRouteChangeNotification;
- (void)_teardownXPCClientIfNeeded;
- (void)_mediaServicesWereReset:(id)a0;
- (void)getAudioSessionIDWithCompletion:(id /* block */)a0;
- (id)initWithEndpointId:(id)a0;
- (void)_handleInterruption:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)audioSessionInfoProvider:(id)a0 didReceiveAudioSessionRouteChangeNotificationWithUserInfo:(id)a1;
- (void)_startMonitoring;
- (BOOL)_createXPCClientConnectionIfNeeded;
- (void)audioSessionInfoProvider:(id)a0 didReceiveAudioSessionMediaServicesWereResetNotificationWithUserInfo:(id)a1;
- (void)unregisterObserver:(id)a0;
- (void)dealloc;
- (void)_audioRouteChanged:(id)a0;
- (void)_registerInterruptionNotification;
- (void)_mediaServicesWereLost:(id)a0;
- (void)audioSessionInfoProvider:(id)a0 didReceiveAudioSessionInterruptionNotificationWithUserInfo:(id)a1;

@end
