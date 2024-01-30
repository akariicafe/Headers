@class NSString, HKSPObserverSet, HKSPDiagnostics, HDSPEnvironment;

@interface HDSPDiagnostics : NSObject <HDSPNotificationObserver, HDSPEnvironmentAware>

@property (readonly, nonatomic) HKSPObserverSet *providers;
@property (readonly, nonatomic) HKSPDiagnostics *diagnostics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) HDSPEnvironment *environment;

- (void)addProvider:(id)a0;
- (id)notificationListener:(id)a0 didReceiveNotificationWithName:(id)a1;
- (void)environmentDidBecomeReady:(id)a0;
- (void).cxx_destruct;
- (id)initWithEnvironment:(id)a0;
- (void)_logDiagnostics:(id)a0;
- (void)removeProvider:(id)a0;
- (void)environmentWillBecomeReady:(id)a0;

@end
