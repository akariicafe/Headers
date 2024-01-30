@class NSString, IDSSession, HMDCameraStreamSessionID, NSObject;
@protocol OS_dispatch_queue, HMDIDSService;

@interface HMDCameraIDSSessionHandler : HMFObject <HMDIDSServiceDelegate, HMFLogging, HMDCameraRemoteStreamProtocol>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) HMDCameraStreamSessionID *sessionID;
@property (readonly, nonatomic) id<HMDIDSService> idsStreamService;
@property (retain, nonatomic) IDSSession *idsSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)logIdentifier;
- (void)dealloc;
- (void).cxx_destruct;
- (void)startKeepAlive;
- (id)initWithSessionID:(id)a0 workQueue:(id)a1;

@end
