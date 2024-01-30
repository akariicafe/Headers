@class NSString, RBSProcessIdentity, RBSAssertionIdentifier, RBConnectionListener, RBSProcessHandle, RBProcessMonitorObserver, RBProcess, RBSProcessIdentifier, NSObject, RBClientInheritanceManager, NSMutableSet;
@protocol RBDaemonContextProviding, RBEntitlementPossessing, RBProcessManaging, RBProcessMonitoring, RBAssertionManaging, RBEntitlementManaging, OS_xpc_object, RBStateCaptureManaging;

@interface RBConnectionClient : NSObject <RBClientInheritanceManagerDelegate, RBEntitlementPossessing, RBStateCapturing> {
    NSObject<OS_xpc_object> *_connection;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    id<RBAssertionManaging> _assertionManager;
    id<RBEntitlementManaging> _entitlementManager;
    id<RBProcessManaging> _processManager;
    id<RBProcessMonitoring> _processMonitor;
    id<RBStateCaptureManaging> _stateCaptureManager;
    id<RBDaemonContextProviding> _daemonContext;
    RBConnectionListener *_listener;
    RBProcess *_containingProcess;
    BOOL _ready;
    NSString *_shortDescription;
    RBProcess *_process;
    RBSProcessHandle *_processHandle;
    RBSProcessIdentity *_processIdentity;
    RBSProcessIdentifier *_processIdentifier;
    unsigned int _euid;
    RBClientInheritanceManager *_inheritanceManager;
    id<RBEntitlementPossessing> _entitlements;
    NSMutableSet *_assertionIdentifiers;
    NSMutableSet *_deathMonitors;
    RBProcessMonitorObserver *_stateObserver;
    RBSAssertionIdentifier *_expirationBoostAssertionIdentifier;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *stateCaptureTitle;

- (id)captureState;
- (BOOL)hasEntitlement:(id)a0;
- (BOOL)hasEntitlementDomain:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)inheritanceManager:(id)a0 didChangeInheritances:(id)a1 completion:(id /* block */)a2;

@end
