@class HMDHAPAccessory, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface HMDCameraRecordingBulkSendSessionInitiator : HMFObject <HMFLogging, HMDDataStreamBulkSendListener>

@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, weak) HMDHAPAccessory *accessory;
@property BOOL hasRegisteredBulkSendListener;
@property BOOL canOpenBulkSendSession;
@property (copy) id /* block */ pendingOpenSessionCallback;
@property (copy) NSString *pendingOpenSessionReason;
@property (readonly, getter=isSessionOpenInProgress) BOOL sessionOpenInProgress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)shutDown;
- (void).cxx_destruct;
- (void)dealloc;
- (void)start;
- (id)logIdentifier;
- (void)openNewSessionWithReason:(id)a0 completion:(id /* block */)a1;
- (void)accessoryDidCloseDataStream:(id)a0;
- (void)_callPendingOpenSessionCallbackWithResult:(id)a0 error:(id)a1;
- (void)callPendingOpenSessionCallbackWithResult:(id)a0 error:(id)a1;
- (void)accessory:(id)a0 didReceiveBulkSessionCandidate:(id)a1;
- (void)accessoryDidStartListening:(id)a0;
- (id)initWithWorkQueue:(id)a0 accessory:(id)a1;
- (void)handleAccessoryDoesSupportBulkSendDataStream:(id)a0;
- (void)_registerAsBulkSendListener;
- (void)_openBulkSendSessionWithReason:(id)a0;

@end
