@class NSString, AXUIClient, NSMutableDictionary, AXDispatchTimer, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, HCHeardControllerProtocol;

@interface RTTController : NSObject <AXUIClientDelegate, RTTCallDelegate, TUCallCapabilitiesDelegate> {
    AXUIClient *_actionUIClient;
    NSObject<OS_dispatch_queue> *_workerQueue;
    NSMutableDictionary *_localSettingsCache;
    AXDispatchTimer *_preferredRelayCoalescer;
    AXDispatchTimer *_callUpdateCoalescer;
}

@property (copy, nonatomic) id /* block */ actionCompletionBlock;
@property (nonatomic) BOOL shouldSuppressIncomingNotification;
@property (retain, nonatomic) NSMutableArray *rttCalls;
@property (weak, nonatomic) id<HCHeardControllerProtocol> delegate;
@property (copy, nonatomic) id /* block */ serverInvalidateCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedController;

- (void).cxx_destruct;
- (void)didChangeTelephonyCallingSupport;
- (id)init;
- (id)userInterfaceClient:(id)a0 processMessageFromServer:(id)a1 withIdentifier:(unsigned long long)a2 error:(id *)a3;
- (void)clientRemoved:(id)a0;
- (void)dealloc;
- (void)_handlePreferredRelayNumberUpdate;
- (BOOL)invalidateServerCaches:(id)a0;
- (void)_requestNotificationAuthorizationIfNecessary;
- (void)callDidConnect:(id)a0;
- (void)_requestNotificationAuthorization;
- (void)_refreshCurrentCallListWithExistingCalls:(id)a0;
- (void)handleUpdatedCalls:(id)a0;
- (id)_callForUUIDWithoutRefresh:(id)a0;
- (void)ttyCall:(id)a0 setVisible:(BOOL)a1 serviceUpdate:(id)a2;
- (void)displayRTTFirstUseAlert;
- (void)_refreshCurrentCallList;
- (id)actionClient;
- (id)callForUUID:(id)a0;
- (void)ttyCall:(id)a0 didReceiveString:(id)a1 forUtterance:(id)a2;
- (void)ttyCall:(id)a0 didSendRemoteString:(id)a1 forUtterance:(id)a2;
- (void)dismissRTTFirstUseAlert;
- (id)handleRTTControllerIsVisible:(id)a0;
- (id)handleMediaAction:(id)a0;
- (id)handleDatabaseRequest:(id)a0;
- (id)handleDictionaryRequest:(id)a0;
- (id)handleSettingsRequest:(id)a0;
- (id)displayCallPrompt:(id)a0;
- (id)handleIncomingNotificationSuppressionChange:(id)a0;

@end
