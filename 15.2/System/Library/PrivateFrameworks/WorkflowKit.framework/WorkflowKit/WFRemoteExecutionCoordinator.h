@class NSObject, NSMapTable, NSString, NSMutableArray, IDSService;
@protocol OS_dispatch_queue;

@interface WFRemoteExecutionCoordinator : NSObject <WFRemoteExecutionSessionDelegate, IDSServiceDelegate>

@property (retain, nonatomic) NSMutableArray *activeSessions;
@property (retain, nonatomic) NSMapTable *completionsForSessions;
@property (retain, nonatomic) IDSService *service;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) BOOL allowRunRequests;
@property (readonly, nonatomic) NSString *pairedDeviceModelIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedCoordinator;

- (void)cancelRequest:(id)a0;
- (BOOL)hasPairedDevice;
- (void)service:(id)a0 account:(id)a1 incomingMessage:(id)a2 fromID:(id)a3 context:(id)a4;
- (void)handleAceCommandResponse:(id)a0 service:(id)a1 account:(id)a2 fromID:(id)a3 context:(id)a4;
- (id)pairedDevice;
- (void)service:(id)a0 account:(id)a1 incomingUnhandledProtobuf:(id)a2 fromID:(id)a3 context:(id)a4;
- (void)service:(id)a0 account:(id)a1 identifier:(id)a2 didSendWithSuccess:(BOOL)a3 error:(id)a4;
- (void)handleUnknownRequestMessage:(id)a0;
- (id)sessionsOfClass:(Class)a0;
- (void)sendRunRequest:(id)a0 userInterface:(id)a1 parameterInputProvider:(id)a2 completionHandler:(id /* block */)a3;
- (void)finishSessionWithRequest:(id)a0;
- (void)handleRunRequest:(id)a0 service:(id)a1 account:(id)a2 fromID:(id)a3 context:(id)a4;
- (void)handleStopRequest:(id)a0 service:(id)a1 account:(id)a2 fromID:(id)a3 context:(id)a4;
- (void)sendAskWhenRunRequest:(id)a0 completion:(id /* block */)a1;
- (void)sendRunRequestResponse:(id)a0 completion:(id /* block */)a1;
- (id)unknownRequestMessageWithIdentifier:(id)a0;
- (BOOL)shouldDropMessageDueToStaleness:(id)a0;
- (void)service:(id)a0 account:(id)a1 incomingResourceAtURL:(id)a2 metadata:(id)a3 fromID:(id)a4 context:(id)a5;
- (void)sendAlertRequest:(id)a0 completion:(id /* block */)a1;
- (void)handleAlertRequestResponse:(id)a0 service:(id)a1 account:(id)a2 fromID:(id)a3 context:(id)a4;
- (void)sendFileAtURL:(id)a0 transferIdentifier:(id)a1 requestIdentifier:(id)a2 error:(id *)a3;
- (void)cancelSessions:(id)a0;
- (id)unknownRequestError;
- (void).cxx_destruct;
- (void)handleIncomingAceCommand:(id)a0 service:(id)a1 account:(id)a2 fromID:(id)a3 context:(id)a4;
- (id)initAndAllowRunRequests:(BOOL)a0;
- (id)defaultIDSOptions;
- (void)handleAskWhenRunRequest:(id)a0 service:(id)a1 account:(id)a2 fromID:(id)a3 context:(id)a4;
- (BOOL)messageCameFromPairedDevice:(id)a0;
- (id)sessionFromRequestIdentifier:(id)a0;
- (BOOL)sendStopRequest:(id)a0 error:(id *)a1;
- (void)sessionDidFinish:(id)a0;
- (void)mapSelectorsForIncomingProtobuf;
- (void)sendAceCommandDictionary:(id)a0 completion:(id /* block */)a1;
- (void)handleRunRequestResponse:(id)a0 service:(id)a1 account:(id)a2 fromID:(id)a3 context:(id)a4;
- (void)handleAskWhenRunRequestResponse:(id)a0 service:(id)a1 account:(id)a2 fromID:(id)a3 context:(id)a4;
- (void)cancelPendingFileTransfers;
- (void)handleAlertRequest:(id)a0 service:(id)a1 account:(id)a2 fromID:(id)a3 context:(id)a4;
- (void)cancelAllSessions;

@end
