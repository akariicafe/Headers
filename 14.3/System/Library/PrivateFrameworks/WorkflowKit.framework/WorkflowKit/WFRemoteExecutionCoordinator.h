@class NSObject, NSString, NSMutableArray, IDSService;
@protocol OS_dispatch_queue;

@interface WFRemoteExecutionCoordinator : NSObject <WFRemoteExecutionSessionDelegate, IDSServiceDelegate>

@property (retain, nonatomic) NSMutableArray *activeSessions;
@property (retain, nonatomic) IDSService *service;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) BOOL allowRunRequests;
@property (readonly, nonatomic) NSString *pairedDeviceModelIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedCoordinator;

- (void)sessionDidFinish:(id)a0;
- (void)cancelRequest:(id)a0;
- (void)service:(id)a0 account:(id)a1 incomingMessage:(id)a2 fromID:(id)a3 context:(id)a4;
- (void)service:(id)a0 account:(id)a1 identifier:(id)a2 didSendWithSuccess:(BOOL)a3 error:(id)a4;
- (void)handleAlertRequestResponse:(id)a0 service:(id)a1 account:(id)a2 fromID:(id)a3 context:(id)a4;
- (void).cxx_destruct;
- (id)sessionsOfClass:(Class)a0;
- (void)sendFileAtURL:(id)a0 transferIdentifier:(id)a1 requestIdentifier:(id)a2 error:(id *)a3;
- (id)unknownRequestMessageWithIdentifier:(id)a0;
- (BOOL)sendStopRequest:(id)a0 error:(id *)a1;
- (void)handleUnknownRequestMessage:(id)a0;
- (void)sendAceCommandDictionary:(id)a0 completion:(id /* block */)a1;
- (void)finishSessionWithRequest:(id)a0;
- (id)unknownRequestError;
- (id)defaultIDSOptions;
- (void)handleAceCommandResponse:(id)a0 service:(id)a1 account:(id)a2 fromID:(id)a3 context:(id)a4;
- (void)handleAskWhenRunRequest:(id)a0 service:(id)a1 account:(id)a2 fromID:(id)a3 context:(id)a4;
- (void)service:(id)a0 account:(id)a1 incomingUnhandledProtobuf:(id)a2 fromID:(id)a3 context:(id)a4;
- (BOOL)hasPairedDevice;
- (void)sendRunRequestResponse:(id)a0;
- (id)sessionFromRequestIdentifier:(id)a0;
- (void)handleAskWhenRunRequestResponse:(id)a0 service:(id)a1 account:(id)a2 fromID:(id)a3 context:(id)a4;
- (id)pairedDevice;
- (void)sendAlertRequest:(id)a0 completion:(id /* block */)a1;
- (void)cancelSessions:(id)a0;
- (void)handleRunRequestResponse:(id)a0 service:(id)a1 account:(id)a2 fromID:(id)a3 context:(id)a4;
- (id)initAndAllowRunRequests:(BOOL)a0;
- (void)handleAlertRequest:(id)a0 service:(id)a1 account:(id)a2 fromID:(id)a3 context:(id)a4;
- (void)sendAskWhenRunRequest:(id)a0 completion:(id /* block */)a1;
- (void)sendRunRequest:(id)a0 userInterface:(id)a1 parameterInputProvider:(id)a2 completionHandler:(id /* block */)a3;
- (void)cancelPendingFileTransfers;
- (BOOL)shouldDropMessageDueToStaleness:(id)a0;
- (void)service:(id)a0 account:(id)a1 incomingResourceAtURL:(id)a2 metadata:(id)a3 fromID:(id)a4 context:(id)a5;
- (BOOL)messageCameFromPairedDevice:(id)a0;
- (void)cancelAllSessions;
- (void)handleRunRequest:(id)a0 service:(id)a1 account:(id)a2 fromID:(id)a3 context:(id)a4;
- (void)handleIncomingAceCommand:(id)a0 service:(id)a1 account:(id)a2 fromID:(id)a3 context:(id)a4;
- (void)mapSelectorsForIncomingProtobuf;
- (void)handleStopRequest:(id)a0 service:(id)a1 account:(id)a2 fromID:(id)a3 context:(id)a4;

@end
