@class NSUUID, HMFMessageDispatcher, NSString, HMXPCClient, NSObject;
@protocol OS_dispatch_queue;

@interface HMClientConnection : NSObject <HMFLogging, HMFMessageReceiver>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue;
@property (retain, nonatomic) HMXPCClient *xpcClient;
@property (retain, nonatomic) NSUUID *uuid;
@property BOOL shouldWeRetrySendingSignOutMessageToHomeKitDaemon;
@property (readonly, nonatomic) HMFMessageDispatcher *msgDispatcher;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;

+ (id)sharedInstance;
+ (BOOL)areAnyLargeHomePodConfigured;
+ (BOOL)areAnyAppleTVAccessoriesConfigured;
+ (id)siriHomeIdentifier;
+ (BOOL)areAnyHomePodMiniConfigured;
+ (id)siriCurrentHome;
+ (BOOL)areAnySpeakersConfigured;
+ (BOOL)areAnyHomePodsConfigured;
+ (BOOL)areHomesConfigured;
+ (BOOL)areAnyAccessoriesConfigured;
+ (BOOL)areAnyTelevisionAccessoriesConfigured;
+ (id)logCategory;

- (void)_start;
- (void)_IDMSAccountUsernameModifiedWithCompletionHandler:(id /* block */)a0;
- (void)notifyAccountStatusUpdate:(unsigned long long)a0 accountIdentifier:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)_retrySendingSignOutWithCompletion:(id /* block */)a0;
- (id)initWithNoValidation;
- (void)sendIntentRequestCommand:(id)a0 withPayload:(id)a1 completionHandler:(id /* block */)a2;
- (void)sendSiriCommand:(id)a0 completionHandler:(id /* block */)a1;
- (void)_registerToDaemon;
- (void)_reportIntentResultTohandler:(id /* block */)a0;
- (id)init;
- (void)requestSiriSyncDataWithValidity:(id)a0 completion:(id /* block */)a1;
- (void)_primaryAccountWasDeletedWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)_reportResultsTohandler:(id /* block */)a0;
- (void)_primaryAccountDidChange:(id)a0 modified:(BOOL)a1 completionHandler:(id /* block */)a2;
- (BOOL)shouldRetrySendingSignOutMessageDueToError:(id)a0;

@end
