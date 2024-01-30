@class NSArray, CXProviderConfiguration, CXAbstractProvider, NSString, NSObject;
@protocol OS_dispatch_queue, CXProviderDelegate, CXProviderDelegatePrivate, CXAbstractProviderDelegate;

@interface CXProvider : NSObject <CXActionDelegateInternal>

@property (readonly, nonatomic) CXAbstractProvider *abstractProvider;
@property (weak, nonatomic) id<CXAbstractProviderDelegate, CXProviderDelegate> delegate;
@property (readonly, nonatomic) id<CXProviderDelegatePrivate> privateDelegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *completionQueue;
@property (copy, nonatomic) CXProviderConfiguration *configuration;
@property (readonly, copy, nonatomic) NSArray *pendingTransactions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (void)reportNewIncomingVoIPPushPayload:(id)a0 completion:(id /* block */)a1;

- (void)setDelegate:(id)a0 queue:(id)a1;
- (void)requestTransaction:(id)a0 completion:(id /* block */)a1;
- (void)performAction:(id)a0;
- (id)hostProtocolDelegate;
- (void)invalidate;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (void)performCompletionBlock:(id /* block */)a0;
- (id)callProviderHostDelegate;
- (oneway void)commitTransaction:(id)a0;
- (oneway void)handleActionTimeout:(id)a0;
- (oneway void)handleAudioSessionActivationStateChangedTo:(id)a0;
- (void)handleMediaServicesWereResetNotification:(id)a0;
- (id)pendingCallActionsOfClass:(Class)a0 withCallUUID:(id)a1;
- (void)registerCurrentConfiguration;
- (void)reportAudioFinishedForCallWithUUID:(id)a0;
- (void)reportCallWithUUID:(id)a0 changedFrequencyData:(id)a1 forDirection:(long long)a2;
- (void)reportCallWithUUID:(id)a0 changedMeterLevel:(float)a1 forDirection:(long long)a2;
- (void)reportCallWithUUID:(id)a0 crossDeviceIdentifier:(id)a1 changedBytesOfDataUsed:(long long)a2;
- (void)reportCallWithUUID:(id)a0 endedAtDate:(id)a1 privateReason:(long long)a2;
- (void)reportCallWithUUID:(id)a0 endedAtDate:(id)a1 privateReason:(long long)a2 failureContext:(id)a3;
- (void)reportCallWithUUID:(id)a0 endedAtDate:(id)a1 reason:(long long)a2;
- (void)reportCallWithUUID:(id)a0 failedAtDate:(id)a1 withContext:(id)a2;
- (void)reportCallWithUUID:(id)a0 updated:(id)a1;
- (void)reportNewIncomingCallWithUUID:(id)a0 update:(id)a1 completion:(id /* block */)a2;
- (void)reportNewOutgoingCallWithUUID:(id)a0 update:(id)a1;
- (void)reportOutgoingCallWithUUID:(id)a0 connectedAtDate:(id)a1;
- (void)reportOutgoingCallWithUUID:(id)a0 sentInvitationAtDate:(id)a1;
- (void)reportOutgoingCallWithUUID:(id)a0 startedConnectingAtDate:(id)a1;
- (BOOL)requiresProxyingAVAudioSessionState;

@end
