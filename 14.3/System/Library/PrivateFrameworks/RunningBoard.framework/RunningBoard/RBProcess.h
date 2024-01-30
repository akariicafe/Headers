@class RBProcessState, RBSAuditToken, RBSProcessIdentity, NSString, RBSProcessExitStatus, RBSProcessHandle, RBSProcessExitContext, RBSProcessIdentifier, NSObject, RBSProcessInstance;
@protocol RBJetsamBandProviding, OS_dispatch_source, RBBundleProperties;

@interface RBProcess : NSObject <RBSProcessIdentifier> {
    int _pid;
    id<RBJetsamBandProviding> _jetsamProvider;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _dataLock;
    RBProcessState *_lock_appliedState;
    RBProcessState *_lock_state;
    int _appliedJetsamPriority;
    BOOL _usesSocketMonitoring;
    BOOL _systemPreventsIdleSleep;
    BOOL _diagnosticsStarted;
    BOOL _diagnosticsComplete;
    int _appNapEligible;
    int _isTestApp;
    unsigned char _manageFlags;
    NSObject<OS_dispatch_source> *_procSource;
    double _cachedProcessStartTime;
}

@property (readonly, copy, nonatomic) RBSProcessIdentifier *identifier;
@property (readonly, copy, nonatomic) RBSProcessHandle *handle;
@property (readonly, copy, nonatomic) RBSProcessIdentity *identity;
@property (readonly, copy, nonatomic) RBSProcessInstance *instance;
@property (copy, nonatomic) RBSAuditToken *auditToken;
@property (readonly, nonatomic) id<RBBundleProperties> bundleProperties;
@property (readonly, nonatomic) RBProcess *hostProcess;
@property (nonatomic, getter=isTerminating) BOOL terminating;
@property (readonly, nonatomic) NSString *shortDescription;
@property (copy, nonatomic) RBSProcessExitStatus *intendedExitStatus;
@property (retain, nonatomic) RBSProcessExitContext *lastExitContext;
@property (readonly, nonatomic, getter=isBeingPtraced) BOOL beingPtraced;
@property (readonly, nonatomic, getter=isLifecycleManaged) BOOL lifecycleManaged;
@property (readonly, nonatomic, getter=isReported) BOOL reported;
@property (readonly, nonatomic, getter=isPlatformBinary) BOOL platformBinary;
@property (readonly, nonatomic, getter=isSuspended) BOOL suspended;
@property (readonly, nonatomic, getter=isTestApp) BOOL testApp;
@property (readonly, nonatomic) int currentJetsamPriority;
@property (readonly, nonatomic) int requestedJetsamPriority;
@property (readonly, nonatomic, getter=isSystemShell) BOOL systemShell;
@property (readonly, nonatomic) NSString *underlyingAssertion;
@property (readonly, nonatomic) double processStartTime;
@property (readonly, nonatomic) NSString *homeDirectory;
@property (readonly, nonatomic) NSString *tmpDirectory;
@property (readonly, nonatomic, getter=isContainerized) BOOL containerized;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)testProcessWithPid:(int)a0;

- (int)rbs_pid;
- (id)processPredicate;
- (BOOL)matchesProcess:(id)a0;
- (void)collectDiagnostic:(unsigned long long)a0 description:(id)a1 code:(unsigned long long)a2 completion:(id /* block */)a3;
- (BOOL)terminateWithContext:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_systemPreventIdleSleepStateDidChange:(BOOL)a0;
- (BOOL)_sendSignal:(int)a0;
- (void)_applyState:(id)a0;
- (id)_initWithInstance:(id)a0 auditToken:(id)a1 bundleProperties:(id)a2 jetsamBandProvider:(id)a3 initialState:(id)a4 hostProcess:(id)a5 properties:(id)a6 systemPreventsIdleSleep:(BOOL)a7;
- (void)invokeHandlerOnProcessDeath:(id /* block */)a0 onQueue:(id)a1;
- (void)invalidate;

@end
