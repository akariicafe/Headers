@interface ManagedSettings.ShieldActionExtensionContext : NSExtensionContext <ManagedSettings.ShieldActionExtensionHost, ManagedSettings.ShieldActionExtensionVendor> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_shieldActionDelegate;
}

+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;

- (id)initWithInputItems:(id)a0 contextUUID:(id)a1;
- (id)initWithInputItems:(id)a0 listenerEndpoint:(id)a1 contextUUID:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (id)initWithInputItems:(id)a0;
- (void)handleWithAction:(long long)a0 applicationTokenData:(id)a1 replyHandler:(id /* block */)a2;
- (void)handleWithAction:(long long)a0 categoryTokenData:(id)a1 replyHandler:(id /* block */)a2;
- (void)handleWithAction:(long long)a0 webDomainTokenData:(id)a1 replyHandler:(id /* block */)a2;

@end
