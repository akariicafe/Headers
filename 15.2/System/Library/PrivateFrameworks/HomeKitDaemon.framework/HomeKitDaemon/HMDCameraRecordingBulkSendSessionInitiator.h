@class NSObject, NSString, HMDHAPAccessory, HMDCameraRecordingBulkSendListener;
@protocol OS_dispatch_queue;

@interface HMDCameraRecordingBulkSendSessionInitiator : HMFObject <HMFLogging, HMDCameraRecordingBulkSendListenerDelegate>

@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (weak) HMDHAPAccessory *accessory;
@property (getter=isWaitingForAccessory) BOOL waitingForAccessory;
@property (retain) HMDCameraRecordingBulkSendListener *currentListener;
@property (readonly, getter=isSessionOpenInProgress) BOOL sessionOpenInProgress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)configure;
- (id)logIdentifier;
- (void).cxx_destruct;
- (void)stop;
- (void)openNewSessionWithReason:(id)a0 completion:(id /* block */)a1;
- (id)initWithWorkQueue:(id)a0 accessory:(id)a1;
- (void)listenerDidReceiveDataStreamStart:(id)a0;
- (void)listenerDidReceiveDataStreamClose:(id)a0;
- (void)_registerBulkSendListener;
- (void)handleAccessoryDoesSupportBulkSendDataStreamNotification:(id)a0;

@end
