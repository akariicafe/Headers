@class NSString, _EXExtensionProcessHandle;

@interface _EXExtensionProcess : NSObject <_EXExtensionProcessObserver>

@property (retain) _EXExtensionProcessHandle *internalExtensionProcess;
@property (copy) id /* block */ invalidationHandler;
@property struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } invalidationHandlerLock;
@property (readonly) struct { unsigned int x0[8]; } auditToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)extensionProcessWithConfiguration:(id)a0 error:(id *)a1;
+ (id)_extensionProcessBackgroundQueue;
+ (void)extensionProcessWithConfiguration:(id)a0 completionHandler:(id /* block */)a1;

- (id)makeXPCConnectionWithError:(id *)a0;
- (id)initWithInternalExtensionProcess:(id)a0 invalidationHandler:(id /* block */)a1;
- (int)pid;
- (void)processDidInvalidate:(id)a0;
- (void)invalidate;
- (id)newXPCConnectionWithError:(id *)a0;
- (void).cxx_destruct;

@end
