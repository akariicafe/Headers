@class NSString, HMFNetServiceBrowser, NSArray, NSMutableDictionary, NSDictionary, HMDHTTPServerMessageTransport, HMFVersion, NSObject, HMDHTTPDevice, NSMutableSet, NSMutableArray;
@protocol OS_dispatch_queue, HMFLocking;

@interface HMDHTTPMessageTransport : HMDRemoteMessageTransport <HMDHTTPServerMessageTransportDelegate, HMFNetServiceBrowserDelegate, HMDHTTPClientMessageTransportDelegate> {
    id<HMFLocking> _lock;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_residentDevices;
    NSMutableSet *_transientDevices;
    NSMutableDictionary *_txtRecord;
    NSMutableArray *_clientTransports;
}

@property (class, readonly, copy) HMFVersion *protocolVersion;

@property (readonly, nonatomic) HMDHTTPServerMessageTransport *serverTransport;
@property (readonly, nonatomic) HMFNetServiceBrowser *clientBrowser;
@property (readonly, nonatomic) NSArray *clientTransports;
@property (readonly, nonatomic) HMDHTTPDevice *currentDevice;
@property (getter=isServerEnabled) BOOL serverEnabled;
@property (readonly, copy, nonatomic) NSDictionary *TXTRecord;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)shortDescription;
+ (unsigned long long)restriction;
+ (BOOL)shouldHostMessageServer;
+ (BOOL)protocolVersionSupportsExtendedMessages:(id)a0;

- (id)descriptionWithPointer:(BOOL)a0;
- (void)sendMessage:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (int)transportType;
- (id)shortDescription;
- (long long)qualityOfService;
- (void)setCurrentDevice:(id)a0;
- (void)_stopServer;
- (id)logIdentifier;
- (BOOL)canSendMessage:(id)a0;
- (id)initWithAccountRegistry:(id)a0 clientBrowser:(id)a1;
- (id)initWithAccountRegistry:(id)a0;
- (id)clientTransportForDevice:(id)a0;
- (id)_serviceForDevice:(id)a0;
- (BOOL)isDeviceConnected:(id)a0;
- (void)_sendMessage:(id)a0 destination:(id)a1 timeout:(double)a2 responseHandler:(id /* block */)a3;
- (void)_connectToDevice:(id)a0 completionHandler:(id /* block */)a1;
- (id)deviceForHTTPDevice:(id)a0;
- (void)handleServerEnabled:(BOOL)a0;
- (void)_startServerWithDevice:(id)a0;
- (void)setTXTRecordValue:(id)a0 forKey:(id)a1;
- (void)removeTXTRecordValueForKey:(id)a0;
- (void)removeAllClientTransports;
- (void)setServerTransport:(id)a0;
- (void)addClientTransport:(id)a0;
- (void)startObservingIsPublishingForService:(id)a0;
- (void)_handleReceivedRequestMessage:(id)a0 fromDevice:(id)a1 completionHandler:(id /* block */)a2;
- (id)clientTransportForService:(id)a0;
- (void)removeClientTransport:(id)a0;
- (void)server:(id)a0 didStopWithError:(id)a1;
- (void)server:(id)a0 didAddDevice:(id)a1;
- (void)server:(id)a0 didRemoveDevice:(id)a1;
- (void)server:(id)a0 didReceiveMessage:(id)a1 fromDevice:(id)a2 completionHandler:(id /* block */)a3;
- (void)netServiceBrowser:(id)a0 didAddService:(id)a1;
- (void)netServiceBrowser:(id)a0 didStopBrowsingWithError:(id)a1;
- (void)netServiceBrowser:(id)a0 didRemoveService:(id)a1;
- (void)client:(id)a0 didStopWithError:(id)a1;
- (void)client:(id)a0 didReceiveMessage:(id)a1 completionHandler:(id /* block */)a2;
- (void)configureWithDevice:(id)a0;

@end
