@class WFNetworkScanRecord, WFNetworkSettingsConfig, WFMutableNetworkProfile, WFNetworkSettingsViewController, NSString, NSOperationQueue, WFAppearanceProxy, WFDetailsContext, WFIPMonitor;

@interface WFSettingsController : NSObject <WFNetworkSettingsViewControllerDataCoordinator>

@property (retain, nonatomic) WFMutableNetworkProfile *profile;
@property (retain, nonatomic) WFNetworkSettingsConfig *config;
@property (retain, nonatomic) WFNetworkSettingsViewController *settingsViewController;
@property (nonatomic) BOOL monitorIPChanges;
@property (retain, nonatomic) WFIPMonitor *ipMonitor;
@property (retain, nonatomic) NSOperationQueue *queue;
@property (nonatomic) BOOL cloudSyncRunning;
@property (retain, nonatomic) WFDetailsContext *detailsContext;
@property (retain, nonatomic) WFNetworkScanRecord *network;
@property (nonatomic, getter=isCurrentNetwork) BOOL currentNetwork;
@property (retain, nonatomic) NSString *hardwareMACAddress;
@property (retain, nonatomic) WFAppearanceProxy *appearanceProxy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (void)_ipStateDidChange:(id)a0;
- (id)initWithDetailsContext:(id)a0 appearanceProxy:(id)a1;
- (id)initWithDetailsContext:(id)a0;
- (id)_baseConfigForNetwork:(id)a0 current:(BOOL)a1;
- (void)_refreshSettingsConfig:(id)a0;
- (void)_currentNetworkDidChange:(id)a0;
- (void)_startMontoringIPChanges;
- (void)_stopMonitoringIPChanges;
- (id)_profileForNetwork:(id)a0;
- (void)networkSettingsViewController:(id)a0 saveConfig:(id)a1 errorHandler:(id /* block */)a2;
- (void)_applySetupAppearances;

@end
