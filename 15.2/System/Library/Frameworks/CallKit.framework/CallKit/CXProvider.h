@class NSArray, CXProviderConfiguration, NSString, NSMutableArray, NSObject;
@protocol CXProviderDelegate, CXProviderHostProtocol, CXProviderDelegatePrivate, OS_dispatch_queue;

@interface CXProvider : NSObject <CXActionDelegate, CXProviderVendorProtocol>

@property (weak, nonatomic) id<CXProviderDelegate> delegate;
@property (readonly, nonatomic) id<CXProviderDelegatePrivate> privateDelegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *completionQueue;
@property (retain, nonatomic) NSMutableArray *mutablePendingTransactions;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) id<CXProviderHostProtocol> hostProtocolDelegate;
@property (readonly, nonatomic) BOOL requiresProxyingAVAudioSessionState;
@property (copy, nonatomic) CXProviderConfiguration *configuration;
@property (readonly, copy, nonatomic) NSArray *pendingTransactions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (void)reportNewIncomingVoIPPushPayload:(id)a0 completion:(id /* block */)a1;

- (void)_performDelegateCallback:(id /* block */)a0;
- (void)_performAction:(id)a0;
- (void)performDelegateCallback:(id /* block */)a0;
- (void)setDelegate:(id)a0 queue:(id)a1;
- (void)requestTransaction:(id)a0 completion:(id /* block */)a1;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)performCompletionBlock:(id /* block */)a0;
- (void)invalidate;
- (void)actionCompleted:(id)a0;
- (oneway void)commitTransaction:(id)a0;
- (oneway void)handleActionTimeout:(id)a0;
- (oneway void)handleAudioSessionActivationStateChangedTo:(BOOL)a0;
- (void)reportCallWithUUID:(id)a0 updated:(id)a1;
- (void)reportOutgoingCallWithUUID:(id)a0 sentInvitationAtDate:(id)a1;
- (void)reportOutgoingCallWithUUID:(id)a0 startedConnectingAtDate:(id)a1;
- (void)reportOutgoingCallWithUUID:(id)a0 connectedAtDate:(id)a1;
- (void)reportCallWithUUID:(id)a0 endedAtDate:(id)a1 privateReason:(long long)a2 failureContext:(id)a3;
- (void)reportAudioFinishedForCallWithUUID:(id)a0;
- (void)reportCallWithUUID:(id)a0 changedFrequencyData:(id)a1 forDirection:(long long)a2;
- (void)reportCallWithUUID:(id)a0 changedMeterLevel:(float)a1 forDirection:(long long)a2;
- (void)reportCallWithUUID:(id)a0 crossDeviceIdentifier:(id)a1 changedBytesOfDataUsed:(long long)a2;
- (id)_pendingActionWithUUID:(id)a0;
- (void)_updatePendingTransactions;
- (void)sendProviderDidBegin;
- (void)handleConnectionInterruption;
- (void)reportNewIncomingCallWithUUID:(id)a0 update:(id)a1 completion:(id /* block */)a2;
- (void)registerCurrentConfiguration;
- (void)handleMediaServicesWereResetNotification:(id)a0;
- (void)reportCallWithUUID:(id)a0 endedAtDate:(id)a1 privateReason:(long long)a2;
- (id)pendingCallActionsOfClass:(Class)a0 withCallUUID:(id)a1;
- (void)reportCallWithUUID:(id)a0 endedAtDate:(id)a1 reason:(long long)a2;
- (void)reportCallWithUUID:(id)a0 failedAtDate:(id)a1 withContext:(id)a2;

@end
