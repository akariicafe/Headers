@class NSString, NSXPCConnection;

@interface DKDiagnosticContext : NSExtensionContext <DKDiagnosticRemoteContext, DKResponder>

@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (nonatomic) BOOL isXPC;
@property (retain, nonatomic) id xpcPrincipalObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;

- (id)initWithConnection:(id)a0;
- (void).cxx_destruct;
- (void)completeWithDiagnosticResult:(id)a0 completion:(id /* block */)a1;
- (void)cancelRemoteDiagnosticWithCompletion:(id /* block */)a0;
- (void)startRemoteDiagnosticWithDiagnosticParameters:(id)a0 completion:(id /* block */)a1;
- (id)_getRemoteProxyAndSetUpHandlers;
- (id)_helperPrincipalObject;
- (id)_helperConnnection;
- (void)getAsset:(id)a0 completion:(id /* block */)a1;
- (void)uploadAssets:(id)a0 completion:(id /* block */)a1;
- (void)showUI:(id)a0 completion:(id /* block */)a1;
- (void)unpairSessionAccessoryOnTestCompletion;
- (void)setScreenToBrightness:(float)a0 animate:(BOOL)a1;
- (void)enableVolumeHUD:(BOOL)a0;
- (void)requestPluginReloadOnFinishWithCompletion:(id /* block */)a0;

@end
