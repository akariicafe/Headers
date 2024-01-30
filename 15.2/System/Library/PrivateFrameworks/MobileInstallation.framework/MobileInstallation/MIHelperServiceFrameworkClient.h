@class NSXPCConnection;

@interface MIHelperServiceFrameworkClient : NSObject

@property (retain, nonatomic) NSXPCConnection *xpcConnection;

+ (id)sharedInstance;

- (void)_invalidateObject;
- (id)_sharedConnection;
- (void).cxx_destruct;
- (id)_remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)dealloc;
- (id)_synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (BOOL)purgeInstallCoordinationPromiseStagingDirectoryForUUID:(id)a0 keepStagingDirectory:(BOOL)a1 error:(id *)a2;
- (id)createWrappedAppForInstalledBundleIdentifier:(id)a0 inTargetDirectory:(id)a1 installationInfo:(id)a2 onBehalfOf:(struct { unsigned int x0[8]; })a3 error:(id *)a4;
- (id)updateWrappedAppAt:(id)a0 forInstalledBundleIdentifier:(id)a1 installationInfo:(id)a2 onBehalfOf:(struct { unsigned int x0[8]; })a3 error:(id *)a4;
- (BOOL)removeWrappedAppWithBundleID:(id)a0 atURL:(id)a1 error:(id *)a2;
- (id)installMacDeveloperAppAtURL:(id)a0 toURL:(id)a1 targetURLType:(unsigned long long)a2 error:(id *)a3;
- (BOOL)removeDeveloperAppAtURL:(id)a0 error:(id *)a1;

@end
