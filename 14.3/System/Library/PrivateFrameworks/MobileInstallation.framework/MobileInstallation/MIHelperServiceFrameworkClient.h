@class NSXPCConnection;

@interface MIHelperServiceFrameworkClient : NSObject

@property (retain, nonatomic) NSXPCConnection *xpcConnection;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_invalidateObject;
- (BOOL)removeWrappedAppWithBundleID:(id)a0 atURL:(id)a1 error:(id *)a2;
- (void)dealloc;
- (BOOL)purgeInstallCoordinationPromiseStagingDirectoryForUUID:(id)a0 keepStagingDirectory:(BOOL)a1 error:(id *)a2;
- (id)createWrappedAppForInstalledBundleIdentifier:(id)a0 inTargetDirectory:(id)a1 installationInfo:(id)a2 onBehalfOf:(struct { unsigned int x0[8]; })a3 error:(id *)a4;
- (id)updateWrappedAppAt:(id)a0 forInstalledBundleIdentifier:(id)a1 installationInfo:(id)a2 onBehalfOf:(struct { unsigned int x0[8]; })a3 error:(id *)a4;
- (id)_synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)_remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)_sharedConnection;

@end
