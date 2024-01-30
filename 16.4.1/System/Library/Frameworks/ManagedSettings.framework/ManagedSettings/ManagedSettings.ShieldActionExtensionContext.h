@interface ManagedSettings.ShieldActionExtensionContext : NSExtensionContext <ManagedSettings.ShieldActionExtensionHost, ManagedSettings.ShieldActionExtensionVendor> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_shieldActionDelegate;
}

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (id)initWithInputItems:(id)a0 contextUUID:(id)a1;
- (id)initWithInputItems:(id)a0;
- (id)initWithInputItems:(id)a0 listenerEndpoint:(id)a1 contextUUID:(id)a2;
- (id)init;
- (void).cxx_destruct;
- (void)handleWithAction:(long long)a0 applicationTokenData:(id)a1 replyHandler:(id /* block */)a2;
- (void)handleWithAction:(long long)a0 categoryTokenData:(id)a1 replyHandler:(id /* block */)a2;
- (void)handleWithAction:(long long)a0 webDomainTokenData:(id)a1 replyHandler:(id /* block */)a2;

@end
