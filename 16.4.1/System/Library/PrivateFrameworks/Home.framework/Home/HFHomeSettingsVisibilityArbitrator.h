@class NSString;

@interface HFHomeSettingsVisibilityArbitrator : NSObject <HFHomeManagerObserver, LSApplicationWorkspaceObserverProtocol>

@property (nonatomic) unsigned long long visibilityState;
@property (nonatomic) BOOL homesConfigured;
@property (nonatomic) unsigned long long homeAppInstallState;
@property (nonatomic) int homeKitPreferencesChangeNotifyToken;
@property (copy, nonatomic) id /* block */ visibilityStateChangeHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)homeManagerConfigurationWithExpandedOptions:(BOOL)a0;

- (void)homeManager:(id)a0 didUpdateThisDeviceIsResidentCapable:(BOOL)a1;
- (void)applicationsDidInstall:(id)a0;
- (void)reloadVisibilityState;
- (void)dealloc;
- (void)_startListeningForManagedConfigurationChanges;
- (void)_reloadVisibilityStateIncludingInstallState:(BOOL)a0;
- (id)init;
- (void)_queryHomeAppInstallStateWithCompletion:(id /* block */)a0;
- (void)applicationsDidUninstall:(id)a0;
- (void).cxx_destruct;

@end
