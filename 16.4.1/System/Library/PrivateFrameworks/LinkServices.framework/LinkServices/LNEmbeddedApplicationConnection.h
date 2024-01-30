@class FBSOpenApplicationService, NSMapTable, PDCPreflightManager, NSOperationQueue, NSString, RBSProcessMonitor;

@interface LNEmbeddedApplicationConnection : LNApplicationConnection <NSXPCListenerDelegate, RBSAssertionObserving>

@property (class, readonly, nonatomic) NSOperationQueue *sharedOpenApplicationOperationQueue;

@property (readonly, nonatomic) RBSProcessMonitor *processMonitor;
@property (readonly, nonatomic) NSMapTable *assertionsMapTable;
@property (readonly, nonatomic) FBSOpenApplicationService *openApplicationService;
@property (readonly, nonatomic) PDCPreflightManager *preflightManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)optionsForAction:(id)a0 interactionMode:(long long)a1 source:(unsigned short)a2;

- (void)dealloc;
- (id)defaultOptions;
- (void)assertion:(id)a0 didInvalidateWithError:(id)a1;
- (void).cxx_destruct;
- (void)connectWithOptions:(id)a0;
- (void)_invalidateAllAssertions;
- (void)acquireAssertionsForConnectionOperation:(id)a0;
- (void)cancelTimeoutForOperationWithIdentifier:(id)a0;
- (void)connectionOperation:(id)a0 didFinishWithError:(id)a1;
- (void)connectionOperationWillStart:(id)a0;
- (void)enqueueOpenApplicationOperation:(id /* block */)a0;
- (void)extendTimeoutForOperationWithIdentifier:(id)a0;
- (id)initWithBundleIdentifier:(id)a0 appBundleIdentifier:(id)a1 error:(id *)a2;
- (void)invalidateAssertionsForConnectionOperation:(id)a0;
- (BOOL)isSupportedInCarPlay;
- (id)openApplicationServiceWithConnectionOptions:(id)a0 error:(id *)a1;
- (void)openApplicationWithOptions:(id)a0 connectionAction:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)refreshWithOptions:(id)a0;
- (void)resumeOpenApplicationOperationQueue;

@end
