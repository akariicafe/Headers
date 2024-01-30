@class NSString, PDXPCApplicationInfo, NSXPCConnection;

@interface PDXPCService : NSObject <PDXPCServiceExportedInterface> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSXPCConnection *_connection;
    NSString *_className;
    BOOL _callbacksSuspended;
}

@property (readonly, nonatomic) int remoteProcessIdentifier;
@property (readonly, nonatomic) NSString *remoteProcessApplicationIdentifier;
@property (readonly, nonatomic) PDXPCApplicationInfo *remoteProcessApplicationInfo;
@property (readonly, nonatomic) NSString *remoteProcessBundleIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)serviceSuspended;
- (void)clearConnectionReference;
- (id)remoteObjectProxy;
- (id)initWithConnection:(id)a0;
- (void)serviceResumed;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)connection;

@end
