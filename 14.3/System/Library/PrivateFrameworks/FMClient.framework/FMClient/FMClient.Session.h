@interface FMClient.Session : NSObject <FMClient.ServerSessionProtocol, FMClient.ClientSessionProtocol> {
    void /* unknown type, empty encoding */ clientBundleId;
    void /* unknown type, empty encoding */ clientProcessName;
    void /* unknown type, empty encoding */ _activeConnection;
    void /* unknown type, empty encoding */ $__lazy_storage_$_serverProxy;
    void /* unknown type, empty encoding */ authenticationProvider;
}

- (void)discoverNearbyDevicesWithCompletion:(id /* block */)a0;
- (void)deviceSearch:(id)a0 completion:(id /* block */)a1;
- (void)clientConfigurationWithUpdateConfiguration:(id)a0 completion:(id /* block */)a1;
- (void)playSound:(id)a0 completion:(id /* block */)a1;
- (void)voiceAssistantSyncWithCompletion:(id /* block */)a0;
- (void)invalidateCacheWithType:(long long)a0 completion:(id /* block */)a1;
- (void)sessionInfoWithCompletion:(id /* block */)a0;
- (void)credentialNotAuthorizedWithCredential:(id)a0 error:(id)a1 completion:(id /* block */)a2;
- (void)credential:(id /* block */)a0;
- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (void)registerAuthenticationProvider:(id)a0;

@end
