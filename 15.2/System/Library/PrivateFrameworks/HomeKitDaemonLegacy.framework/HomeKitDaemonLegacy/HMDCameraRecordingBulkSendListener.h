@class NSUUID, NSString, NSObject;
@protocol OS_dispatch_queue, HMDCameraRecordingBulkSendListenerDelegate;

@interface HMDCameraRecordingBulkSendListener : HMFObject <HMFLogging, HMDDataStreamBulkSendListener> {
    NSObject<OS_dispatch_queue> *_workQueue;
    NSString *_pendingOpenSessionReason;
    id /* block */ _pendingOpenSessionCallback;
}

@property (readonly, copy) NSUUID *UUID;
@property (weak) id<HMDCameraRecordingBulkSendListenerDelegate> delegate;
@property (readonly, getter=isSessionOpenInProgress) BOOL sessionOpenInProgress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)attributeDescriptions;
- (id)logIdentifier;
- (void).cxx_destruct;
- (void)accessoryDidCloseDataStream:(id)a0;
- (void)accessory:(id)a0 didReceiveBulkSessionCandidate:(id)a1;
- (void)accessoryDidStartListening:(id)a0;
- (id)initWithWorkQueue:(id)a0;
- (void)addPendingBulkSendSessionOpenReason:(id)a0 pendingBulkSendSessionCallback:(id /* block */)a1;
- (void)openBulkSendSessionWithAccessory:(id)a0 reason:(id)a1 callback:(id /* block */)a2;

@end
