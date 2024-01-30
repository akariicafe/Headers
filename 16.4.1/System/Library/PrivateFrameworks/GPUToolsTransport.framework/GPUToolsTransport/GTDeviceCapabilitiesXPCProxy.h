@class GTServiceConnection, NSSet;

@interface GTDeviceCapabilitiesXPCProxy : NSObject <GTDeviceCapabilities> {
    GTServiceConnection *_connection;
    NSSet *_ignoreMethods;
}

- (BOOL)respondsToSelector:(SEL)a0;
- (void).cxx_destruct;
- (id)daemonDeviceCapabilities;
- (id)gpuToolsVersionQuery;
- (id)inferiorEnvironment:(id)a0;
- (id)initWithConnection:(id)a0 remoteProperties:(id)a1;

@end
