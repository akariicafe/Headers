@interface ManagedSettings.OverrideSettingsExtensionContext : NSExtensionContext <ManagedSettings.OverrideSettingsExtensionHost, ManagedSettings.OverrideSettingsExtensionVendor> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_overrideSettingsHandler;
}

+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;

- (id)initWithInputItems:(id)a0 contextUUID:(id)a1;
- (id)initWithInputItems:(id)a0 listenerEndpoint:(id)a1 contextUUID:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (id)initWithInputItems:(id)a0;
- (void)askToOverrideUnremovabilityOfApplicationWithBundleIdentifier:(id)a0 teamIdentifier:(id)a1 replyHandler:(id /* block */)a2;

@end
