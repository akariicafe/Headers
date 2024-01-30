@class NSString, HMDSnapshotFile, NSObject;
@protocol OS_dispatch_queue, HMDCameraSnapshotIDSStreamInitiatorDelegate;

@interface HMDCameraSnapshotIDSStreamInitiator : HMDCameraSnapshotIDSStream <IDSServiceDelegate, HMFLogging>

@property (retain, nonatomic) NSString *destinationID;
@property (retain, nonatomic) NSString *sendFileIdentifier;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, weak, nonatomic) id<HMDCameraSnapshotIDSStreamInitiatorDelegate> delegate;
@property (retain, nonatomic) HMDSnapshotFile *snapshotFile;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)service:(id)a0 account:(id)a1 identifier:(id)a2 didSendWithSuccess:(BOOL)a3 error:(id)a4;
- (id)logIdentifier;
- (void).cxx_destruct;
- (void)dealloc;
- (void)sendFile:(id)a0;
- (id)initWithSessionID:(id)a0 workQueue:(id)a1 destinationID:(id)a2 delegate:(id)a3 delegateQueue:(id)a4;
- (void)_callFileTransferFailed:(id)a0;
- (void)_sendFile:(id)a0;

@end
