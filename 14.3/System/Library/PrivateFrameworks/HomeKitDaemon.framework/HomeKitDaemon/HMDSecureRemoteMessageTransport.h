@class HMDRemoteMessageNotifications, NSString, NSArray, HMDRemoteDeviceMonitor, NSMutableDictionary, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface HMDSecureRemoteMessageTransport : HMFMessageTransport <HMDSecureRemoteSessionDelegate, HMFLogging, HMFMessageTransportDelegate, HMFDumpState> {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (class, readonly) HMDSecureRemoteMessageTransport *defaultTransport;

@property (readonly, nonatomic) NSMutableSet *secureRemoteSessions;
@property (retain, nonatomic) HMDRemoteMessageNotifications *sessionNotifications;
@property (retain, nonatomic) NSMutableDictionary *currentHomeConfigurations;
@property (readonly, copy) NSArray *transports;
@property (readonly) HMDRemoteDeviceMonitor *deviceMonitor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)shortDescription;

- (id)descriptionWithPointer:(BOOL)a0;
- (void)sendMessage:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (void)reset;
- (void)dealloc;
- (id)shortDescription;
- (id)dumpState;
- (void)_handleNotificationMessage:(id)a0;
- (void)start;
- (void)messageTransport:(id)a0 didReceiveMessage:(id)a1;
- (void)electDeviceForUser:(id)a0 destination:(id)a1 deviceCapabilities:(id)a2 responseTimeout:(double)a3 responseQueue:(id)a4 responseHandler:(id /* block */)a5;
- (id)accountRegistry;
- (void)secureRemoteSession:(id)a0 receivedRequestToSendMessage:(id)a1;
- (void)secureRemoteSession:(id)a0 didCloseWithError:(id)a1;
- (void)pingDevice:(id)a0 completionHandler:(id /* block */)a1;
- (void)updateHome:(id)a0 configurationVersion:(long long)a1;
- (void)removeHome:(id)a0;
- (id)prepareAnswerForRequestedCapabilities:(id)a0;
- (id)initWithTransports:(id)a0;
- (void)_handleNotificationResponseForMessage:(id)a0 responsePayload:(id)a1 responseError:(id)a2 responseHandler:(id /* block */)a3;
- (id)_preferredTransportForMessage:(id)a0;
- (void)_electDeviceForAccountDestination:(id)a0 completionHandler:(id /* block */)a1;
- (void)_sendSecureMessage:(id)a0 completionHandler:(id /* block */)a1;
- (void)_handlePingMessage:(id)a0;
- (void)_handleSecureMessage:(id)a0 fromDevice:(id)a1 transport:(id)a2;
- (void)_handleElectDeviceForIDSSession:(id)a0;
- (void)_handleElectDeviceForUserResponse:(id)a0 error:(id)a1 responseQueue:(id)a2 completion:(id /* block */)a3;
- (BOOL)_haveAllCapabilities:(id)a0;
- (void)_pingDevice:(id)a0 completionHandler:(id /* block */)a1;
- (void)_sendPingToDevice:(id)a0 timeout:(double)a1 restriction:(unsigned long long)a2 responseHandler:(id /* block */)a3;
- (id)_secureRemoteSessionForDevice:(id)a0;
- (id)_openSecureSessionToDevice:(id)a0 completionHandler:(id /* block */)a1;
- (void)_updateDeviceInformationFromMessage:(id)a0;
- (BOOL)_handleReceivedMessage:(id)a0 transport:(id)a1;
- (void)openSecureSessionToDevice:(id)a0 completionHandler:(id /* block */)a1;

@end
