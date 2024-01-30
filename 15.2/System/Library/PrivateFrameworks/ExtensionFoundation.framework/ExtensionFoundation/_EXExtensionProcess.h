@class NSHashTable, RBSProcessIdentity, NSArray, NSXPCListenerEndpoint, _EXInternalHostConnection, _EXExtensionRep, BKSProcessAssertion, _EXExtensionProcessMannger;

@interface _EXExtensionProcess : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSArray *sandboxExtensions;
@property struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } xpcConnectionLock;
@property (retain) NSHashTable *xpcConnections;
@property (weak) _EXExtensionProcessMannger *manager;
@property struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } observersLock;
@property (retain) NSHashTable *observers;
@property (weak) _EXInternalHostConnection *internalConnection;
@property (readonly) _EXExtensionRep *extension;
@property (readonly) struct { unsigned int val[8]; } auditToken;
@property (readonly) NSXPCListenerEndpoint *serviceListenerEndpoint;
@property (readonly) int pid;
@property (readonly) BKSProcessAssertion *assertion;
@property (readonly) RBSProcessIdentity *processIdentity;
@property (readonly, getter=isValid) BOOL valid;

- (id)makeXPCConnectionWithError:(id *)a0;
- (id)configuration;
- (void)encodeWithCoder:(id)a0;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)invalidate;
- (void)dealloc;
- (id)initWithExtension:(id)a0 auditToken:(struct { unsigned int x0[8]; })a1 processIdentity:(id)a2 sandboxExtensions:(id)a3;
- (id)aquireAsertionWithError:(id *)a0;
- (void)_handleAssertionInvalidation;
- (id)makeXPCConnection;
- (id)initWithExtension:(id)a0 auditToken:(struct { unsigned int x0[8]; })a1;

@end
