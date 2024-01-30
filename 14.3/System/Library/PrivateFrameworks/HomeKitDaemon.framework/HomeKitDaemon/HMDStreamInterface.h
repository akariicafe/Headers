@class HMDCameraNetworkConfig, NSString, NSObject, HMDCameraStreamSessionID;
@protocol OS_dispatch_queue, HMDCameraRemoteStreamProtocol, HMFLocking;

@interface HMDStreamInterface : HMFObject <HMFLogging> {
    id<HMFLocking> _lock;
}

@property (readonly, nonatomic) HMDCameraNetworkConfig *localNetworkConfig;
@property (readonly, nonatomic) HMDCameraStreamSessionID *sessionID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, nonatomic) id<HMDCameraRemoteStreamProtocol> sessionHandler;
@property (nonatomic) int localRTPSocket;
@property (nonatomic) unsigned long long streamInterfaceState;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)dealloc;
- (id)logIdentifier;
- (id)initWithSessionID:(id)a0 workQueue:(id)a1 delegateQueue:(id)a2 localNetworkConfig:(id)a3 sessionHandler:(id)a4;
- (int)openSocket;
- (BOOL)loadMiscFields:(id)a0;
- (id)extractNetworkConfig:(int)a0 peerNameExtractor:(void /* function */ *)a1;

@end
