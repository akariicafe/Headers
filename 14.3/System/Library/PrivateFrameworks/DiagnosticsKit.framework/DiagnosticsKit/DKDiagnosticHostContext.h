@class NSString, NSXPCConnection;
@protocol DKExtensionHostAdapterDelegate;

@interface DKDiagnosticHostContext : NSExtensionContext <DKDiagnosticHostRemoteContext, DKExtensionHostAdapter>

@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (nonatomic) BOOL isXPC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<DKExtensionHostAdapterDelegate> delegate;

+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;

- (void).cxx_destruct;
- (id)initWithConnection:(id)a0;
- (void)cancelWithCompletion:(id /* block */)a0;
- (void)startWithPayload:(id)a0 completion:(id /* block */)a1;
- (void)remoteHostEnableVolumeHUD:(BOOL)a0;
- (void)remoteHostSetScreenToBrightness:(float)a0 animate:(BOOL)a1;
- (void)remoteHostGetAsset:(id)a0 completion:(id /* block */)a1;
- (void)remoteHostCompleteWithResult:(id)a0 completion:(id /* block */)a1;
- (void)remoteHostShowUI:(id)a0 completion:(id /* block */)a1;
- (void)remoteHostRequestPluginReloadOnFinishWithCompletion:(id /* block */)a0;
- (id)_helperConnnection;

@end
