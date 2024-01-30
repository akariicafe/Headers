@class HMDAccountRegistry, NSArray, NSString, NSMutableArray, NSObject, HMDDevice;
@protocol HMDSecureRemoteSessionDataSource, OS_dispatch_queue, HMFMessageTransportDelegate;

@interface HMDSecureRemoteSession : HMFMessageTransport <HMDSecureRemoteStreamDelegate, HMFLogging, HMFTimerDelegate, HMDRemoteDeviceMonitorDeviceRegistrationClient, HMDSecureRemoteSession> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableArray *_pendingMessages;
    NSMutableArray *_clientStreams;
    NSMutableArray *_serverStreams;
}

@property (readonly, nonatomic) id<HMDSecureRemoteSessionDataSource> dataSource;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly, nonatomic) HMDAccountRegistry *accountRegistry;
@property (nonatomic) unsigned long long maximumRemoteStreams;
@property (readonly, copy, nonatomic) NSArray *pendingMessages;
@property (readonly, copy, nonatomic) NSArray *clientStreams;
@property (readonly, copy, nonatomic) NSArray *serverStreams;
@property (nonatomic) long long state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) HMDDevice *device;
@property (weak) id<HMFMessageTransportDelegate> delegate;

+ (id)logCategory;
+ (BOOL)isSecureRemoteSessionMessage:(id)a0;

- (void)openWithCompletionHandler:(id /* block */)a0;
- (void)timerDidFire:(id)a0;
- (id)logIdentifier;
- (id)dumpState;
- (void)dealloc;
- (void)messageTransport:(id)a0 didReceiveMessage:(id)a1;
- (void)close;
- (void)_closeWithError:(id)a0;
- (id)init;
- (void)sendMessage:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (id)initWithDevice:(id)a0 accountRegistry:(id)a1;
- (id)_clientStreamForMessage:(id)a0;
- (id)_clientStreamWithIdentiifer:(id)a0;
- (void)_closeClientStream:(id)a0 error:(id)a1;
- (void)_closeServerStream:(id)a0 error:(id)a1;
- (id)_dequeMessage;
- (void)_handleSecureClientMessage:(id)a0 fromDevice:(id)a1 transport:(id)a2;
- (void)_handleSecureServerMessage:(id)a0 fromDevice:(id)a1 transport:(id)a2;
- (void)_handleStreamInvalidationMessage:(id)a0;
- (void)_openClientStreamWithCompletionHandler:(id /* block */)a0;
- (void)_openServerStreamWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)_queueMessage:(id)a0;
- (id)_serverStreamWithIdentifier:(id)a0;
- (void)receivedSecureMessage:(id)a0 fromDevice:(id)a1 fromTransport:(id)a2;
- (void)secureRemoteStream:(id)a0 didCloseWithError:(id)a1;
- (void)secureRemoteStream:(id)a0 receivedRequestToSendMessage:(id)a1;
- (void)secureRemoteStreamIsIdle:(id)a0;
- (id)initWithDevice:(id)a0 accountRegistry:(id)a1 dataSource:(id)a2;

@end
