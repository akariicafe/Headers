@class NSString, HMDSnapshotFile, NSObject, HMDDevice;
@protocol OS_dispatch_queue, HMDCameraSnapshotIDSStreamReceiverDelegate;

@interface HMDCameraSnapshotIDSStreamReceiver : HMDCameraSnapshotIDSStream <HMFLogging, IDSServiceDelegate>

@property (readonly) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly) HMDDevice *remoteDevice;
@property (weak) id<HMDCameraSnapshotIDSStreamReceiverDelegate> delegate;
@property (readonly) HMDSnapshotFile *snapshotFile;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)service:(id)a0 account:(id)a1 incomingResourceAtURL:(id)a2 metadata:(id)a3 fromID:(id)a4 context:(id)a5;
- (id)logIdentifier;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_callFileReceivedWithError:(id)a0;
- (id)initWithSessionID:(id)a0 workQueue:(id)a1 proxyService:(id)a2 snapshotFile:(id)a3 delegate:(id)a4 delegateQueue:(id)a5 remoteDevice:(id)a6;
- (id)initWithSessionID:(id)a0 workQueue:(id)a1 snapshotFile:(id)a2 delegate:(id)a3 delegateQueue:(id)a4 remoteDevice:(id)a5;

@end
