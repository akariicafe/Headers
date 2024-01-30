@class NSObject, IDSDevice, IDSDeviceConnection, HMFTimer, NSString, HMDCameraStreamSessionID, IDSService;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface HMDCameraIDSDeviceConnection : HMFObject <IDSServiceDelegate, HMDCameraRemoteStreamProtocol, HMFTimerDelegate, HMFLogging>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *highPriorityQueue;
@property (readonly, nonatomic) HMDCameraStreamSessionID *sessionID;
@property (readonly, nonatomic) IDSService *idsProxyStreamService;
@property (retain, nonatomic) IDSDevice *device;
@property (retain, nonatomic) IDSDeviceConnection *watchVideoConnection;
@property (retain, nonatomic) IDSDeviceConnection *watchAudioConnection;
@property (retain, nonatomic) IDSDeviceConnection *keepAliveConnection;
@property (retain, nonatomic) HMFTimer *keepAliveByteSendTimer;
@property (retain, nonatomic) HMFTimer *keepAliveByteReceiveTimeoutTimer;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *socketReceiveSource;
@property (nonatomic) unsigned char keepAliveCounter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)dealloc;
- (void)timerDidFire:(id)a0;
- (id)logIdentifier;
- (void)startKeepAlive;
- (id)initWithSessionID:(id)a0 workQueue:(id)a1;
- (void)_callSessionEnded:(id)a0;
- (void)_createStreamSocket:(id)a0;
- (void)_socketOpened:(id)a0;
- (void)_startKeepAliveByteSendTimer;
- (void)_startKeepAliveTimeoutTimer;
- (void)_setReceiveByteHandler;
- (void)_sendTimerFired;
- (void)_receiveByteCheckTimerFired;
- (void)callSessionEnded:(id)a0;

@end
