@class BLSHDiagnosticsServer, BLSHWatchdogTester, BLSHCriticalAssertTester, BLSHBacklightStateMachine, BLSHXPCBacklightProxyHostServer, BLSHBacklightTransitionStateMachine;

@interface BLSHBacklightService : NSObject {
    BLSHBacklightStateMachine *_stateMachine;
    BLSHBacklightTransitionStateMachine *_transitionStateMachine;
    BLSHXPCBacklightProxyHostServer *_backlightXPCServer;
    BLSHDiagnosticsServer *_diagnosticsServer;
    BLSHWatchdogTester *_watchdogTester;
    BLSHCriticalAssertTester *_criticalAssertTester;
}

+ (id)serviceForService:(id)a0 withPlatformProvider:(id)a1 osInterfaceProvider:(id)a2 inactiveBudgetPolicy:(id)a3;

- (void).cxx_destruct;
- (id)initForService:(id)a0 withPlatformProvider:(id)a1 osInterfaceProvider:(id)a2 inactiveBudgetPolicy:(id)a3;

@end
