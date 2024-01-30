@class NSXPCConnection;

@interface AudioComponentPrefRegConnection : NSObject <AudioComponentPreferenceProtocol> {
    void *mImpl;
    struct ConnectionInfo { NSXPCConnection *mConnection; int mExtUsePermission; BOOL mLinkedSDKRequiresEntitlement; } mConnInfo;
}

- (id)initWithRegistrar:(void *)a0 connection:(id)a1;
- (void).cxx_destruct;
- (void)setExtensionComponentList:(id)a0 linkedSDKRequiresEntitlement:(BOOL)a1 components:(id)a2 reply:(id /* block */)a3;
- (void)getExtensionComponentList:(id)a0 linkedSDKRequiresEntitlement:(BOOL)a1 reply:(id /* block */)a2;
- (void)getComponentUserTags:(id)a0 reply:(id /* block */)a1;
- (void)setComponentUserTags:(id)a0 tags:(id)a1;
- (void)getExtensionIcon:(id)a0 reply:(id /* block */)a1;
- (void)getInterAppIcon:(id)a0 reply:(id /* block */)a1;
- (BOOL)isGenericAppIcon:(id)a0 size:(struct CGSize { double x0; double x1; })a1 scale:(double)a2;
- (id).cxx_construct;

@end
