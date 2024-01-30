@class HMDAppleAccountManager, NSString, NSMutableDictionary, HMDRemoteAccountManager, NSMutableArray, NSObject, HMFOperationBudget, NSMutableOrderedSet;
@protocol OS_dispatch_queue, HMDIDSService;

@interface HMDIDSMessageTransport : HMDRemoteMessageTransport <HMDIDSServiceDelegate>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) HMDAppleAccountManager *appleAccountManager;
@property (readonly, nonatomic) HMDRemoteAccountManager *remoteAccountManager;
@property (readonly) NSMutableArray *messageContexts;
@property (readonly) HMFOperationBudget *sendMessageBudget;
@property (readonly, nonatomic) NSMutableDictionary *pendingResponses;
@property (readonly, nonatomic) NSMutableDictionary *receivedResponses;
@property (readonly, nonatomic) NSMutableDictionary *requestedCapabilities;
@property (readonly, nonatomic) NSMutableDictionary *destinationAddress;
@property (readonly, nonatomic) NSMutableDictionary *pendingResponseTimers;
@property (readonly, nonatomic) NSMutableOrderedSet *messageDedupBuffer;
@property (readonly, nonatomic, getter=isLegacyTransport) BOOL legacyTransport;
@property (readonly, nonatomic) id<HMDIDSService> service;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)restriction;
+ (id)logCategory;
+ (struct _HMFRate { unsigned long long x0; double x1; })sendMessageRate;
+ (long long)priorityForMessage:(id)a0;
+ (id)queueOneIdentifierWithMessageName:(id)a0 target:(id)a1 collapseID:(id)a2 timeToLive:(double)a3 now:(id)a4;
+ (unsigned long long)sendMessageLimit;

- (void)service:(id)a0 account:(id)a1 incomingMessage:(id)a2 fromID:(id)a3 context:(id)a4;
- (void)service:(id)a0 account:(id)a1 identifier:(id)a2 didSendWithSuccess:(BOOL)a3 error:(id)a4 context:(id)a5;
- (long long)qualityOfService;
- (BOOL)isSecure;
- (id)logIdentifier;
- (int)transportType;
- (void)sendMessage:(id)a0 completionHandler:(id /* block */)a1;
- (id)start;
- (void).cxx_destruct;
- (BOOL)canSendMessage:(id)a0;
- (BOOL)isValidMessage:(id)a0;
- (void)_pendingResponseTimeoutFor:(id)a0;
- (void)_removePendingResponseTimerForTransaction:(id)a0;
- (void)_removePendingResponseTransaction:(id)a0;
- (void)_restartPendingResponseTimerFor:(id)a0 withReducedFactor:(unsigned long long)a1;
- (void)_startPendingResponseTimer:(id)a0 responseTimeout:(double)a1 identifier:(id)a2;
- (id)deviceForSenderContext:(id)a0;
- (id)initWithAccountRegistry:(id)a0;
- (id)initWithAccountRegistry:(id)a0 service:(id)a1 appleAccountManager:(id)a2 remoteAccountManager:(id)a3;
- (void)legacyHandleIncomingRemoteMessage:(id)a0 sourceDevice:(id)a1 senderDeviceHandle:(id)a2 isSecure:(BOOL)a3 incomingMessage:(id)a4 fromID:(id)a5 context:(id)a6;
- (id)sendMessage:(id)a0 fromHandle:(id)a1 destination:(id)a2 priority:(long long)a3 timeout:(double)a4 options:(unsigned long long)a5 queueOneID:(id)a6 error:(id *)a7;
- (id)initLegacyTransportWithAccountRegistry:(id)a0;
- (id)initLegacyTransportWithAccountRegistry:(id)a0 service:(id)a1 appleAccountManager:(id)a2 remoteAccountManager:(id)a3;
- (BOOL)shouldAcceptLegacyIDSMessage:(id)a0;

@end
