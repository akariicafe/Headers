@class NSXPCConnection;

@interface AudioComponentMainRegConnection : NSObject <AudioComponentRegistrarProtocol> {
    void *mImpl;
    struct ConnectionInfo { NSXPCConnection *mConnection; int mExtUsePermission; BOOL mLinkedSDKRequiresEntitlement; } mConnInfo;
}

- (id)initWithRegistrar:(void *)a0 connection:(id)a1;
- (void)canRegisterComponent:(id)a0 reply:(id /* block */)a1;
- (void).cxx_destruct;
- (void)getComponentList:(id)a0 linkedSDKRequiresEntitlement:(BOOL)a1 includeExtensions:(BOOL)a2 reply:(id /* block */)a3;
- (id).cxx_construct;

@end
