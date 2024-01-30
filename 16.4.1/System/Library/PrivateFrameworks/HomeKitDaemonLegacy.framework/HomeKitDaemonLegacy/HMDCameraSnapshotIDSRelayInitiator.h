@class NSObject, NSString, HMFActivity, NSMutableData, IDSSession, HMDDevice;
@protocol HMDCameraSnapshotIDSRelayInitiatorDelegate, OS_dispatch_source;

@interface HMDCameraSnapshotIDSRelayInitiator : HMDCameraSnapshotIDSRelay <IDSSessionDelegate> {
    HMFActivity *_activity;
}

@property (retain) IDSSession *idsSession;
@property (readonly, weak) id<HMDCameraSnapshotIDSRelayInitiatorDelegate> delegate;
@property BOOL idsSessionStarted;
@property (readonly) HMDDevice *device;
@property (retain) NSMutableData *data;
@property (retain) NSObject<OS_dispatch_source> *socketSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)dealloc;
- (void).cxx_destruct;
- (void)sessionStarted:(id)a0;
- (void)sendData:(id)a0;
- (void)session:(id)a0 receivedInvitationAcceptFromID:(id)a1;
- (void)session:(id)a0 receivedInvitationCancelFromID:(id)a1;
- (void)session:(id)a0 receivedInvitationDeclineFromID:(id)a1;
- (void)sessionEnded:(id)a0 withReason:(unsigned int)a1 error:(id)a2;
- (void)_callFileTransferFailed:(id)a0;
- (void)_sendData;
- (void)_startDataTransfer;
- (id)initWithSessionID:(id)a0 logIdentifier:(id)a1 workQueue:(id)a2 device:(id)a3 delegate:(id)a4;
- (void)sendIDSInvitation;

@end
