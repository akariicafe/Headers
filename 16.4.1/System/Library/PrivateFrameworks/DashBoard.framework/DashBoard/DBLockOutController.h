@class DBKeybagMonitor, DBEnvironmentConfiguration, DBLockOutWindow, DBSiriMonitor, NSString, DBDashboardStateProvider, DBDisclosureMonitor, DBThermalMonitor, DBLockOutViewController, DBBuddyMonitor;
@protocol DBLockoutControllerDelegate, BSInvalidatable;

@interface DBLockOutController : NSObject <DBBuddyMonitorObserver, DBDisclosureMonitorObserver, DBEnvironmentConfigurationObserving, DBKeybagMonitorObserver, DBLockOutViewControllerDelegate, DBSiriMonitorObserver, DBThermalMonitorObserver>

@property (retain, nonatomic) DBEnvironmentConfiguration *environmentConfiguration;
@property (retain, nonatomic) DBDashboardStateProvider *dashboardStateProvider;
@property (retain, nonatomic) DBLockOutWindow *lockOutWindow;
@property (retain, nonatomic) DBLockOutViewController *lockOutViewController;
@property (retain, nonatomic) DBBuddyMonitor *buddyMonitor;
@property (retain, nonatomic) DBDisclosureMonitor *disclosureMonitor;
@property (retain, nonatomic) DBKeybagMonitor *keybagMonitor;
@property (retain, nonatomic) DBSiriMonitor *siriMonitor;
@property (retain, nonatomic) DBThermalMonitor *thermalMonitor;
@property (nonatomic) long long lockOutMode;
@property (readonly, weak, nonatomic) id<DBLockoutControllerDelegate> delegate;
@property (retain, nonatomic) id<BSInvalidatable> lockOutLayoutElementAssertion;
@property (readonly, nonatomic, getter=isLockedOut) BOOL lockedOut;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invalidate;
- (void).cxx_destruct;
- (void)buddyMonitorDidChangeFinished:(id)a0;
- (void)disclosureMonitorDidChangeActive:(id)a0;
- (void)environmentConfigurationPairedVehiclesDidChange:(id)a0;
- (id)initWithWindowScene:(id)a0 environmentConfiguration:(id)a1 dashboardStateProvider:(id)a2 delegate:(id)a3;
- (void)keybagMonitorLockStateDidChange:(id)a0;
- (void)lockOutViewController:(id)a0 didTapButtonOfType:(unsigned long long)a1;
- (void)siriMonitorDidChangeEnabled:(id)a0;
- (void)thermalMonitorLevelDidChange:(id)a0;
- (void)updateLockOutModeAnimated:(BOOL)a0;
- (void)updateLockOutModeAnimated:(BOOL)a0 takeScreen:(BOOL)a1;

@end
