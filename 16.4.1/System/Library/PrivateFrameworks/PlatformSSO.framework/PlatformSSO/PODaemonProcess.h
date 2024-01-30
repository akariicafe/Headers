@class NSString, POKeyWrap, NSXPCConnection;

@interface PODaemonProcess : NSObject <PODaemonProtocol> {
    NSXPCConnection *_xpcConnection;
}

@property (retain) POKeyWrap *keyWrap;
@property BOOL dataVaultInitialized;
@property (copy) id /* block */ invalidationHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)connectionInvalidated;
- (id)initWithXPCConnection:(id)a0;
- (id)_defaultConfigurationPath;
- (BOOL)_initDataVaultIfNeededWithError:(id *)a0;
- (void).cxx_destruct;
- (void)deviceConfigurationForExtension:(id)a0 completion:(id /* block */)a1;
- (void)disablePlatformSSORuleForScreensaver:(id /* block */)a0;
- (void)enablePlatformSSORuleForScreensaver:(id /* block */)a0;
- (void)loginConfigurationForExtension:(id)a0 completion:(id /* block */)a1;
- (void)removeDeviceConfigurationForExtension:(id)a0 completion:(id /* block */)a1;
- (void)removeLoginConfigurationForExtension:(id)a0 completion:(id /* block */)a1;
- (void)removeUserConfigurationForIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)resetStoredConfigurationWithCompletion:(id /* block */)a0;
- (void)saveDeviceConfiguration:(id)a0 forExtension:(id)a1 completion:(id /* block */)a2;
- (void)saveLoginConfiguration:(id)a0 forExtension:(id)a1 completion:(id /* block */)a2;
- (void)saveUserConfiguration:(id)a0 forIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)userConfigurationForIdentifier:(id)a0 passwordContext:(id)a1 completion:(id /* block */)a2;

@end
