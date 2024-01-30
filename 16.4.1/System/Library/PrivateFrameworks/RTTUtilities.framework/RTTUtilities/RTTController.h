@class NSObject, NSString, AXUIClient, NSMutableDictionary, AXDispatchTimer, RTTTranscriptionController, NSMutableArray;
@protocol OS_dispatch_queue, HCHeardControllerProtocol;

@interface RTTController : NSObject <RTTCallDelegate, TUCallCapabilitiesDelegate, AXUIClientDelegate, RTTTranscriptionControllerDelegate> {
    AXUIClient *_actionUIClient;
    NSObject<OS_dispatch_queue> *_workerQueue;
    NSMutableDictionary *_localSettingsCache;
    AXDispatchTimer *_preferredRelayCoalescer;
    AXDispatchTimer *_callUpdateCoalescer;
}

@property (copy, nonatomic) id /* block */ actionCompletionBlock;
@property (nonatomic) BOOL shouldSuppressIncomingNotification;
@property (retain, nonatomic) RTTTranscriptionController *transcriber;
@property (retain, nonatomic) NSMutableArray *rttCalls;
@property (weak, nonatomic) id<HCHeardControllerProtocol> delegate;
@property (copy, nonatomic) id /* block */ serverInvalidateCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedController;

- (void)dealloc;
- (id)init;
- (id)userInterfaceClient:(id)a0 processMessageFromServer:(id)a1 withIdentifier:(unsigned long long)a2 error:(id *)a3;
- (void).cxx_destruct;
- (void)didChangeTelephonyCallingSupport;
- (void)clientRemoved:(id)a0;
- (id)displayCallPrompt:(id)a0;
- (id)handleDatabaseRequest:(id)a0;
- (id)handleDictionaryRequest:(id)a0;
- (id)handleIncomingNotificationSuppressionChange:(id)a0;
- (id)handleMediaAction:(id)a0;
- (id)handleRTTControllerIsVisible:(id)a0;
- (id)handleSettingsRequest:(id)a0;
- (void)callDidConnect:(id)a0;
- (id)_callForUUIDWithoutRefresh:(id)a0;
- (void)_handlePreferredRelayNumberUpdate;
- (void)_refreshCurrentCallList;
- (void)_refreshCurrentCallListWithExistingCalls:(id)a0;
- (void)_requestNotificationAuthorization;
- (void)_requestNotificationAuthorizationIfNecessary;
- (void)_updateConversationControllerWithTranscription:(id)a0 type:(long long)a1 callUUID:(id)a2;
- (id)actionClient;
- (id)callForUUID:(id)a0;
- (void)dismissRTTFirstUseAlert;
- (void)displayRTTFirstUseAlert;
- (void)handleUpdatedCalls:(id)a0;
- (BOOL)invalidateServerCaches:(id)a0;
- (void)transcriptionDidStart:(id)a0 forCallUUID:(id)a1;
- (void)transcriptionDidUpdate:(id)a0 forCallUUID:(id)a1;
- (void)ttyCall:(id)a0 didReceiveString:(id)a1 forUtterance:(id)a2;
- (void)ttyCall:(id)a0 didSendRemoteString:(id)a1 forUtterance:(id)a2;
- (void)ttyCall:(id)a0 setVisible:(BOOL)a1 serviceUpdate:(id)a2;

@end
