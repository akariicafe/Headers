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

- (id)remoteObjectProxy;
- (void)serviceSuspended;
- (id)initWithConnection:(id)a0;
- (void)clearConnectionReference;
- (void)serviceResumed;
- (void).cxx_destruct;
- (id)init;
- (id)connection;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)a0;

@end
