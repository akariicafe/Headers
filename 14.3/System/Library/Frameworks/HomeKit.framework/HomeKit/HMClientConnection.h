@class HMFMessageDispatcher, NSUUID, NSString, HMXPCClient, NSObject;
@protocol OS_dispatch_queue;

@interface HMClientConnection : NSObject <HMFMessageReceiver>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue;
@property (retain, nonatomic) HMXPCClient *xpcClient;
@property (retain, nonatomic) HMFMessageDispatcher *msgDispatcher;
@property (retain, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)siriHomeIdentifier;
+ (BOOL)areAnyHomePodsConfigured;
+ (BOOL)areHomesConfigured;
+ (BOOL)areAnyTelevisionAccessoriesConfigured;
+ (BOOL)areAnySpeakersConfigured;
+ (BOOL)areAnyAppleTVAccessoriesConfigured;
+ (id)siriCurrentHome;
+ (BOOL)areAnySmallHomePodsConfigured;
+ (BOOL)areAnyAccessoriesConfigured;

- (void)_start;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithNoValidation;
- (void)_reportResultsTohandler:(id /* block */)a0;
- (void)_reportIntentResultTohandler:(id /* block */)a0;
- (void)sendSiriCommand:(id)a0 completionHandler:(id /* block */)a1;
- (void)sendIntentRequestCommand:(id)a0 withPayload:(id)a1 completionHandler:(id /* block */)a2;
- (void)requestSiriSyncDataWithValidity:(id)a0 completion:(id /* block */)a1;
- (void)_registerToDaemon;

@end
