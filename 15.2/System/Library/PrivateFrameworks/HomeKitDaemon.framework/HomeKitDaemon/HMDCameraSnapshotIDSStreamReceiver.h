@class NSString, HMDSnapshotFile, IDSSession, NSObject;
@protocol OS_dispatch_queue, HMDCameraSnapshotIDSStreamReceiverDelegate;

@interface HMDCameraSnapshotIDSStreamReceiver : HMDCameraSnapshotIDSStream <IDSServiceDelegate, IDSSessionDelegate, HMFLogging>

@property (retain, nonatomic) IDSSession *idsSession;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (weak, nonatomic) id<HMDCameraSnapshotIDSStreamReceiverDelegate> delegate;
@property (readonly, nonatomic) HMDSnapshotFile *snapshotFile;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)logIdentifier;
- (void)service:(id)a0 account:(id)a1 incomingResourceAtURL:(id)a2 metadata:(id)a3 fromID:(id)a4 context:(id)a5;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithSessionID:(id)a0 workQueue:(id)a1 snapshotFile:(id)a2 delegate:(id)a3 queue:(id)a4;
- (void)_callFileReceived:(id)a0;

@end
