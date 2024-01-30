@class NSObject, NSUUID, NSString, HMFActivity, IDSSession, NSMutableData, HMDCameraIDSSessionInviterDeviceVerifier;
@protocol OS_dispatch_source, HMDCameraSnapshotIDSRelayReceiverDelegate;

@interface HMDCameraSnapshotIDSRelayReceiver : HMDCameraSnapshotIDSRelay <IDSServiceDelegate, IDSSessionDelegate, HMFLogging> {
    HMFActivity *_activity;
}

@property (retain) IDSSession *idsSession;
@property (readonly, weak) id<HMDCameraSnapshotIDSRelayReceiverDelegate> delegate;
@property (readonly) HMDCameraIDSSessionInviterDeviceVerifier *sessionInviterDeviceVerifier;
@property (readonly) NSUUID *machOUUID;
@property (retain) NSMutableData *relayData;
@property unsigned long long bytesToReceive;
@property unsigned long long bytesSoFar;
@property (retain) NSObject<OS_dispatch_source> *socketSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)dealloc;
- (void)service:(id)a0 account:(id)a1 inviteReceivedForSession:(id)a2 fromID:(id)a3 withContext:(id)a4;
- (id)logIdentifier;
- (void)sessionStarted:(id)a0;
- (void)sessionEnded:(id)a0 withReason:(unsigned int)a1 error:(id)a2;
- (id)initWithSessionID:(id)a0 logIdentifier:(id)a1 machOUUID:(id)a2 workQueue:(id)a3 sessionInviterDeviceVerifier:(id)a4 delegate:(id)a5;
- (void)_handleDataFromSocket:(id)a0;
- (void)_didReceiveData:(id)a0 error:(id)a1;
- (void)_startDataReceive;

@end
