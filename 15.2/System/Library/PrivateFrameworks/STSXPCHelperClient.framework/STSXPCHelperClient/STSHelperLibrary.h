@class NSXPCConnection, STSUnifiedAccessHandler, STSRemoteTransceiverProxyListener, NSObject;
@protocol STSHelperLibraryDelegateProtocol;

@interface STSHelperLibrary : NSObject <STSHelperCallbackProtocol>

@property (retain, nonatomic) NSXPCConnection *xpc;
@property (retain, nonatomic) STSRemoteTransceiverProxyListener *seProxyListener;
@property (retain, nonatomic) STSRemoteTransceiverProxyListener *nfcReaderListener;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) STSUnifiedAccessHandler *unifiedAccessHandler;
@property (weak, nonatomic) NSObject<STSHelperLibraryDelegateProtocol> *delegate;
@property (readonly, nonatomic) unsigned long long handoverConfig;

- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (void)invalidate;
- (id)asynchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (BOOL)setupConnectWithXPCService;
- (id)_stsHelperInterface;
- (id)_stsHelperCallbackInterface;
- (void)didInvalidateXPC:(BOOL)a0 connection:(id)a1;
- (void)restartNFCReaderDiscovery;
- (void)stopSEProxyListener;
- (id)startISO18013WithConnectionHandoverConfiguration:(unsigned long long)a0 type:(unsigned long long)a1 delegate:(id)a2;
- (id)connectToNotificationListener:(id)a0;
- (void)processUnifiedAccessStepupAPDU:(id)a0 callbackQueue:(id)a1 responseHandler:(id /* block */)a2;
- (void)processConnectionHandoverRequest:(id)a0 callbackQueue:(id)a1 responseHandler:(id /* block */)a2;
- (void)processConnectionHandoverRequestData:(id)a0 callbackQueue:(id)a1 responseHandler:(id /* block */)a2;
- (void)generateConnectionHandoverRequestWithQueue:(id)a0 responseHandler:(id /* block */)a1;
- (void)connectRemoteWithConnectionHandoverSelect:(id)a0 callbackQueue:(id)a1 responseHandler:(id /* block */)a2;
- (id)startSEProxyListener:(id)a0 parameters:(id)a1 workQueue:(id)a2;
- (id)signalUnifiedAccessStepUpWithEventDictionary:(id)a0;
- (id)startWifiPublisherWithServiceName:(id)a0 datapathPMK:(id)a1 datapathPMKID:(id)a2;
- (id)startWifiSubscriberWithServiceName:(id)a0 datapathPMK:(id)a1 datapathPMKID:(id)a2;
- (id)startBTReaderWithServiceUUID:(id)a0 peripheralAddress:(id)a1 centralRole:(BOOL)a2;
- (id)startBTDeviceWithServiceUUID:(id)a0 peripheralAddress:(id)a1 centralRole:(BOOL)a2;

@end
