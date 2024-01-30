@class NSMapTable, NSString, CRCarPlayAppPolicyEvaluator, CARObserverHashTable, RBSProcessMonitor;

@interface DBProcessMonitor : NSObject <BSInvalidatable>

@property (retain, nonatomic) CARObserverHashTable *observers;
@property (retain, nonatomic) RBSProcessMonitor *processMonitor;
@property (retain, nonatomic) CRCarPlayAppPolicyEvaluator *policyEvaluator;
@property (retain, nonatomic) NSMapTable *handleMapTable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addObserver:(id)a0;
- (id)init;
- (void)invalidate;
- (void).cxx_destruct;
- (void)_appStateUpdated:(id)a0 processHandle:(id)a1;
- (void)_handleDeathWithIdentifier:(id)a0 isCrash:(BOOL)a1 pid:(int)a2;
- (void)_startMonitoringProcess;

@end
