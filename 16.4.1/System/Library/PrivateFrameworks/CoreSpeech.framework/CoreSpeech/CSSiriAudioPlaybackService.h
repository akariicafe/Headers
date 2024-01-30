@class NSString, NSMutableDictionary, NSHashTable, AVAudioSession, NSObject, CSAudioSessionController;
@protocol OS_dispatch_queue;

@interface CSSiriAudioPlaybackService : NSObject <AFMemoryPressureListening, CSAudioSessionControllerDelegate, AFAudioPlaybackService> {
    NSObject<OS_dispatch_queue> *_queue;
    NSHashTable *_listeners;
    NSMutableDictionary *_activeSessionsByRequest;
    NSMutableDictionary *_reusableSessionsByRequest;
    unsigned int _audioSessionID;
    AVAudioSession *_audioSession;
    CSAudioSessionController *_audioSessionController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedService;

- (void)addListener:(id)a0;
- (void)removeListener:(id)a0;
- (void)audioSessionController:(id)a0 didReceiveAudioSessionOwnerLostNotification:(id)a1;
- (void)audioSessionController:(id)a0 didReceiveAudioSessionInterruptionNotificationWithUserInfo:(id)a1;
- (void)startRequest:(id)a0 options:(unsigned long long)a1 preparationHandler:(id /* block */)a2 executionHandler:(id /* block */)a3 finalizationHandler:(id /* block */)a4;
- (void)audioSessionController:(id)a0 didReceiveAudioSessionMediaServicesWereLostNotificationWithUserInfo:(id)a1;
- (void)startRequest:(id)a0 options:(unsigned long long)a1 completion:(id /* block */)a2;
- (id)_createAudioPlaybackSessionWithRequest:(id)a0 options:(unsigned long long)a1;
- (void)audioSessionController:(id)a0 didReceiveAudioSessionMediaServicesWereResetNotificationWithUserInfo:(id)a1;
- (void)_evictAllReusableSessionsForReason:(id)a0;
- (void)_enumerateListenersUsingBlock:(id /* block */)a0;
- (unsigned int)_audioSessionID;
- (void)memoryPressureObserver:(id)a0 didChangeFromCondition:(long long)a1 toCondition:(long long)a2;
- (void)_stopAllRequests:(BOOL)a0 completion:(id /* block */)a1;
- (void)_handlePreparationForSession:(id)a0;
- (void)_handleExecutionForSession:(id)a0;
- (void)prewarmRequest:(id)a0 completion:(id /* block */)a1;
- (id)_audioSession;
- (void)stopAllRequestsSynchronously;
- (void)stopRequest:(id)a0 immediately:(BOOL)a1;
- (void)_setAudioSessionID:(unsigned int)a0;
- (void)_handleFinalizationForSession:(id)a0 error:(id)a1;
- (id)initWithAudioSessionController:(id)a0;
- (void)_prewarmRequest:(id)a0 completion:(id /* block */)a1;
- (void)_stopAllRequestsSynchronously;
- (void)removeAllListeners;
- (void)_invalidate;
- (void)stopAllRequests:(BOOL)a0 completion:(id /* block */)a1;
- (void)_startRequest:(id)a0 options:(unsigned long long)a1 preparationHandler:(id /* block */)a2 executionHandler:(id /* block */)a3 finalizationHandler:(id /* block */)a4;
- (void)_stopRequest:(id)a0 immediately:(BOOL)a1;
- (void).cxx_destruct;
- (void)audioSessionController:(id)a0 didReceiveAudioSessionOwnerResetNotification:(id)a1;

@end
