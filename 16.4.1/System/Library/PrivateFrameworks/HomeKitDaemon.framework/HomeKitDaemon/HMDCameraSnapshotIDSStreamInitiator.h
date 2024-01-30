@class NSString, HMDSnapshotFile, NSObject;
@protocol OS_dispatch_queue, HMDCameraSnapshotIDSStreamInitiatorDelegate;

@interface HMDCameraSnapshotIDSStreamInitiator : HMDCameraSnapshotIDSStream <HMFLogging, IDSServiceDelegate>

@property (readonly, copy) NSString *destinationID;
@property (readonly) NSObject<OS_dispatch_queue> *delegateQueue;
@property (weak) id<HMDCameraSnapshotIDSStreamInitiatorDelegate> delegate;
@property (copy) NSString *sendFileIdentifier;
@property (retain) HMDSnapshotFile *snapshotFile;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)service:(id)a0 account:(id)a1 identifier:(id)a2 didSendWithSuccess:(BOOL)a3 error:(id)a4;
- (id)logIdentifier;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_callFileTransferFailedWithError:(id)a0;
- (void)_sendFile:(id)a0;
- (id)initWithSessionID:(id)a0 workQueue:(id)a1 destinationID:(id)a2 delegate:(id)a3 delegateQueue:(id)a4;
- (id)initWithSessionID:(id)a0 workQueue:(id)a1 proxyService:(id)a2 destinationID:(id)a3 delegate:(id)a4 delegateQueue:(id)a5;
- (void)sendFile:(id)a0;

@end
