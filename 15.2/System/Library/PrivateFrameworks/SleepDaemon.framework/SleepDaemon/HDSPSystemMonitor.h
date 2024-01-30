@class HDSPDeviceUnlockMonitor, HDSPDevicePowerMonitor, HDSPApplicationWorkspaceMonitor, HDSPWatchOnWristMonitor, NSString, HDSPEnvironment;
@protocol HDSPSystemReadyProvider, HDSPSystemReadyDelegate;

@interface HDSPSystemMonitor : NSObject <HDSPSystemReadyDelegate, HDSPDiagnosticsProvider, HDSPEnvironmentAware>

@property (readonly, nonatomic) id<HDSPSystemReadyProvider> systemReadyProvider;
@property (readonly, nonatomic) BOOL systemReady;
@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } systemMonitorLock;
@property (weak, nonatomic) id<HDSPSystemReadyDelegate> delegate;
@property (readonly, nonatomic) HDSPDeviceUnlockMonitor *deviceUnlockMonitor;
@property (readonly, nonatomic) HDSPDevicePowerMonitor *devicePowerMonitor;
@property (readonly, nonatomic) HDSPApplicationWorkspaceMonitor *applicationWorkspaceMonitor;
@property (readonly, nonatomic) HDSPWatchOnWristMonitor *watchOnWristMonitor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) HDSPEnvironment *environment;

+ (id)_platformSpecificReadyProviderForEnvironment:(id)a0;

- (id)diagnosticDescription;
- (id)diagnosticInfo;
- (void)environmentDidBecomeReady:(id)a0;
- (void)systemDidBecomeReady;
- (void)environmentWillBecomeReady:(id)a0;
- (id)initWithEnvironment:(id)a0 watchOnWristMonitor:(id)a1 devicePowerMonitor:(id)a2 deviceUnlockMonitor:(id)a3 systemReadyProvider:(id)a4 applicationWorkspaceMonitor:(id)a5;
- (BOOL)isSystemReady;
- (void).cxx_destruct;
- (id)initWithEnvironment:(id)a0;
- (id)initWithEnvironment:(id)a0 watchOnWristMonitor:(id)a1 devicePowerMonitor:(id)a2 deviceUnlockMonitor:(id)a3;
- (void)_withLock:(id /* block */)a0;

@end
