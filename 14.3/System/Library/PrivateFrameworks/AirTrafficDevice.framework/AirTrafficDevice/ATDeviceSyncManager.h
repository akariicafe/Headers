@class NSString, NSMutableDictionary, ATDeviceSettings, NSObject;
@protocol OS_dispatch_queue;

@interface ATDeviceSyncManager : NSObject <ATMessageLinkObserver, ATSessionObserver, ATMessageLinkRequestHandler> {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_activeSessionsForLinkIDAndDataClass;
    ATDeviceSettings *_settings;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)deviceSyncManager;

- (void)sessionDidFinish:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)messageLink:(id)a0 didReceiveRequest:(id)a1;
- (void)session:(id)a0 didFinishSessionTask:(id)a1;
- (void)messageLinkWasClosed:(id)a0;
- (void)session:(id)a0 willBeginSessionTask:(id)a1;
- (void)messageLinkWasOpened:(id)a0;
- (void)cancelSyncOnMessageLink:(id)a0;
- (void)messageLinkWasInitialized:(id)a0;
- (void)sessionWillBegin:(id)a0;
- (id)_initiateSyncForDataClass:(id)a0 onMessageLink:(id)a1;
- (void)_cancelSyncForDataClass:(id)a0 onMessageLink:(id)a1;
- (id)_activeSessionsOnMessageLink:(id)a0;
- (void)_handleBeginSyncSessionRequest:(id)a0 onMessageLink:(id)a1;
- (void)_handleEndSyncSessionRequest:(id)a0 onMessageLink:(id)a1;
- (void)_handleRequest:(id)a0 onMessageLink:(id)a1;
- (id)_sessionForMessageLink:(id)a0 dataClass:(id)a1;
- (void)_removeSessionForMessageLink:(id)a0 dataClass:(id)a1;
- (id)_startSyncSessionForDataClass:(id)a0 messageLink:(id)a1 identifier:(id)a2;
- (void)cancelSyncForDataClass:(id)a0 onMessageLink:(id)a1;
- (id)_sessionTaskForRequest:(id)a0 onMessageLink:(id)a1;
- (void)_setSession:(id)a0 forMessageLink:(id)a1 dataClass:(id)a2;
- (id)initiateSyncForDataClass:(id)a0 onMessageLink:(id)a1;
- (void)initiateSyncOnMessageLink:(id)a0;

@end
