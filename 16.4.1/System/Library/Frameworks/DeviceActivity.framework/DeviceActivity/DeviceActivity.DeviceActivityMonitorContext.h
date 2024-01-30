@interface DeviceActivity.DeviceActivityMonitorContext : NSExtensionContext <USDeviceActivityMonitorExtension, DeviceActivity.DeviceActivityMonitorHost> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_monitor;
}

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (id)initWithInputItems:(id)a0 contextUUID:(id)a1;
- (id)initWithInputItems:(id)a0;
- (id)initWithInputItems:(id)a0 listenerEndpoint:(id)a1 contextUUID:(id)a2;
- (id)init;
- (void).cxx_destruct;
- (void)eventDidReachThreshold:(id)a0 activity:(id)a1 replyHandler:(id /* block */)a2;
- (void)eventWillReachThresholdWarning:(id)a0 activity:(id)a1 replyHandler:(id /* block */)a2;
- (void)intervalDidEndForActivity:(id)a0 replyHandler:(id /* block */)a1;
- (void)intervalDidStartForActivity:(id)a0 replyHandler:(id /* block */)a1;
- (void)intervalWillEndWarningForActivity:(id)a0 replyHandler:(id /* block */)a1;
- (void)intervalWillStartWarningForActivity:(id)a0 replyHandler:(id /* block */)a1;

@end
