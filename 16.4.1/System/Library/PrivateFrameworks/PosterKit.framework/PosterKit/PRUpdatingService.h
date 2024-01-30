@class NSError, NSString, RBSProcessIdentity, NSXPCInterface, BSAuditToken, _EXExtensionProcess, RBSTarget, NSXPCConnection, _EXExtensionIdentity, _EXHostConfiguration, NSHashTable;

@interface PRUpdatingService : NSObject <PRUpdatingService_toExtension, BSInvalidatable> {
    _EXExtensionIdentity *_extension;
    _EXHostConfiguration *_hostConfig;
    _EXExtensionProcess *_process;
    RBSTarget *_target;
    NSXPCConnection *_connection;
    BSAuditToken *_auditToken;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _lock_invalidated;
    NSError *_lock_invalidationError;
    NSHashTable *_observers;
}

@property (class, readonly, nonatomic) NSXPCInterface *interfaceToExtension;

@property (readonly, nonatomic) RBSTarget *target;
@property (readonly, nonatomic) RBSProcessIdentity *processIdentity;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) BSAuditToken *auditToken;
@property (readonly, nonatomic) BOOL isValid;
@property (readonly, nonatomic) NSError *invalidationError;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)updatingServiceWithExtension:(id)a0 error:(out id *)a1;

- (void)_enumerateObserversRespondingToSelector:(SEL)a0 usingBlock:(id /* block */)a1;
- (BOOL)_lock_setupConnection:(out id *)a0 errorHandler:(id /* block */)a1;
- (void)invalidateWithError:(id)a0;
- (void)_lock_invalidate;
- (void)addObserver:(id)a0;
- (void)dealloc;
- (void)removeObserver:(id)a0;
- (void)updateConfiguration:(id)a0 sessionInfo:(id)a1 completion:(id /* block */)a2;
- (void)invalidate;
- (id)_initWithExtension:(id)a0;
- (void).cxx_destruct;
- (void)updateDescriptors:(id)a0 sessionInfo:(id)a1 completion:(id /* block */)a2;

@end
