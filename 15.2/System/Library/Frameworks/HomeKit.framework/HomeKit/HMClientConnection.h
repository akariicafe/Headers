@class NSUUID, HMFMessageDispatcher, NSString, HMXPCClient, NSObject;
@protocol OS_dispatch_queue;

@interface HMClientConnection : NSObject <HMFMessageReceiver>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue;
@property (retain, nonatomic) HMXPCClient *xpcClient;
@property (retain, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) HMFMessageDispatcher *msgDispatcher;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (BOOL)areAnySmallHomePodsConfigured;
+ (BOOL)areAnyTelevisionAccessoriesConfigured;
+ (BOOL)areAnyAccessoriesConfigured;
+ (id)siriCurrentHome;
+ (BOOL)areHomesConfigured;
+ (id)siriHomeIdentifier;
+ (BOOL)areAnyAppleTVAccessoriesConfigured;
+ (BOOL)areAnyHomePodsConfigured;
+ (BOOL)areAnySpeakersConfigured;

- (void)_start;
- (void)_IDMSAccountUsernameModifiedWithCompletionHandler:(id /* block */)a0;
- (void)_invokeCompletionHandler:(id /* block */)a0 withError:(id)a1;
- (void)sendSiriCommand:(id)a0 completionHandler:(id /* block */)a1;
- (void)_reportIntentResultTohandler:(id /* block */)a0;
- (void)_primaryAccountDidChange:(id)a0 modified:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (id)initWithNoValidation;
- (id)init;
- (void)sendIntentRequestCommand:(id)a0 withPayload:(id)a1 completionHandler:(id /* block */)a2;
- (void)requestSiriSyncDataWithValidity:(id)a0 completion:(id /* block */)a1;
- (void)_registerToDaemon;
- (void)notifyAccountStatusUpdate:(unsigned long long)a0 accountIdentifier:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)_primaryAccountWasDeletedWithCompletionHandler:(id /* block */)a0;
- (void)_reportResultsTohandler:(id /* block */)a0;

@end
