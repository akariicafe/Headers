@class HMDHomeManager, NSString, NSUUID, NSMutableDictionary, NSMutableArray, NSObject, HMDMessageDispatcher;
@protocol OS_dispatch_queue, HMDTimerManager;

@interface HMDUserDeviceCapabilitiesRequestManager : HMDRemoteMessageTransport <HMDTimerManagerDelegate, HMFMessageReceiver, HMDUserDeviceCapabilitiesRequestManager> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    HMDHomeManager *_homeManager;
    HMDMessageDispatcher *_messageDispatcher;
    NSMutableDictionary *_requestContexts;
    id<HMDTimerManager> _timerManager;
    NSMutableArray *_timerContextsToCancel;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)registerForMessages;
- (void)_cancelPendingTimerContexts;
- (void)_completeWithResponse:(id)a0 error:(id)a1 context:(id)a2;
- (void)_handleRequestCapabilitiesXPCRequest:(id)a0;
- (void)_handleResponsePayload:(id)a0 error:(id)a1 transactionID:(id)a2;
- (id /* block */)_responseHandlerForTransactionID:(id)a0;
- (id)_selectBestResponseForContext:(id)a0;
- (id)_updateDeviceCapabilities:(id)a0 withDestination:(id)a1;
- (void)_updateResponseTimeoutForContext:(id)a0;
- (void)electDeviceForUserID:(id)a0 destination:(id)a1 deviceCapabilities:(id)a2 responseTimeout:(double)a3 responseQueue:(id)a4 completionHandler:(id /* block */)a5;
- (id)initWithHomeManager:(id)a0 accountRegistry:(id)a1 messageDispatcher:(id)a2;
- (id)initWithHomeManager:(id)a0 accountRegistry:(id)a1 messageDispatcher:(id)a2 timerManager:(id)a3;
- (void)timerManager:(id)a0 didFireForTimerContext:(id)a1;

@end
