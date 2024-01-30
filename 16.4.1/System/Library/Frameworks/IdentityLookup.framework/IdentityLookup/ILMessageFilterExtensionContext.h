@class NSString;

@interface ILMessageFilterExtensionContext : NSExtensionContext <ILMessageFilterExtensionVendorProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (oneway void)finish;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)extension;
- (void)deferQueryRequestToNetworkWithCompletion:(id /* block */)a0;
- (void)deferReportRequestToNetworkWithCompletion:(id /* block */)a0;
- (oneway void)handleCapabilitiesQueryRequest:(id)a0 reply:(id /* block */)a1;
- (oneway void)handleQueryRequest:(id)a0 reply:(id /* block */)a1;
- (oneway void)handleReportRequest:(id)a0 reply:(id /* block */)a1;

@end
