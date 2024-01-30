@class NSXPCListener, NSString, PKPaymentWebServiceRemoteProxyTargetDevice, PKPaymentWebServiceLocalProxyTargetDevice, PKPaymentWebService;

@interface PKPaymentWebServiceProxyTargetDeviceDebugHelper : NSObject <NSXPCListenerDelegate> {
    PKPaymentWebService *_webService;
    NSXPCListener *_remoteListener;
    PKPaymentWebServiceLocalProxyTargetDevice *_localTarget;
    PKPaymentWebServiceRemoteProxyTargetDevice *_remoteTarget;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)webServiceWithProxiedTargetDevice:(id)a0;

- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)initWithWebService:(id)a0;
- (id)localProxyTargetDevice;

@end
