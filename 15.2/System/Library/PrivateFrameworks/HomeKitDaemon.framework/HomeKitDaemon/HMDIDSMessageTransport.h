@class HMDAppleAccountManager, NSString, IDSService, NSMutableDictionary, HMDRemoteAccountManager, NSMutableArray, NSObject, HMFOperationBudget, NSMutableOrderedSet;
@protocol OS_dispatch_queue;

@interface HMDIDSMessageTransport : HMDRemoteMessageTransport <IDSServiceDelegate>

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
@property (readonly, nonatomic) IDSService *service;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)restriction;
+ (id)logCategory;
+ (long long)priorityForMessage:(id)a0;
+ (struct _HMFRate { unsigned long long x0; double x1; })sendMessageRate;
+ (unsigned long long)sendMessageLimit;

- (void)service:(id)a0 account:(id)a1 incomingMessage:(id)a2 fromID:(id)a3 context:(id)a4;
- (void)sendMessage:(id)a0 completionHandler:(id /* block */)a1;
- (id)logIdentifier;
- (void)start;
- (long long)qualityOfService;
- (void).cxx_destruct;
- (void)service:(id)a0 account:(id)a1 identifier:(id)a2 didSendWithSuccess:(BOOL)a3 error:(id)a4 context:(id)a5;
- (BOOL)isSecure;
- (int)transportType;
- (BOOL)canSendMessage:(id)a0;
- (id)initWithAccountRegistry:(id)a0;
- (id)initLegacyTransportWithAccountRegistry:(id)a0;
- (id)initLegacyTransportWithAccountRegistry:(id)a0 service:(id)a1 appleAccountManager:(id)a2 remoteAccountManager:(id)a3;
- (id)initWithAccountRegistry:(id)a0 service:(id)a1 appleAccountManager:(id)a2 remoteAccountManager:(id)a3;
- (id)deviceForSenderContext:(id)a0;
- (id)sendMessage:(id)a0 fromHandle:(id)a1 destination:(id)a2 priority:(long long)a3 timeout:(double)a4 options:(unsigned long long)a5 error:(id *)a6;
- (void)_restartPendingResponseTimerFor:(id)a0 withReducedFactor:(unsigned long long)a1;
- (void)_pendingResponseTimeoutFor:(id)a0;
- (void)_startPendingResponseTimer:(id)a0 responseTimeout:(double)a1 identifier:(id)a2;
- (void)_removePendingResponseTimerForTransaction:(id)a0;
- (void)_removePendingResponseTransaction:(id)a0;
- (void)legacyHandleIncomingRemoteMessage:(id)a0 sourceDevice:(id)a1 senderDeviceHandle:(id)a2 isSecure:(BOOL)a3 incomingMessage:(id)a4 fromID:(id)a5 context:(id)a6;

@end
