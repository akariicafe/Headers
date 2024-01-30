@class NSString, SUSUISoftwareUpdatePane, UsageStorageController, NSError, SUSUISoftwareUpdateManager;

@interface SUSUISoftwareUpdateController : PSListController <DevicePINControllerDelegate, UITableViewDelegate, SUSUISoftwareUpdateManagerDelegate, SUSUISoftwareUpdatePaneDelegate> {
    SUSUISoftwareUpdateManager *_manager;
    SUSUISoftwareUpdatePane *_primaryUpdatePane;
    SUSUISoftwareUpdatePane *_alternateUpdatePane;
    SUSUISoftwareUpdatePane *_activeDownloadPane;
    NSString *_devicePasscode;
    UsageStorageController *_usageStorageController;
}

@property (copy, nonatomic) id /* block */ devicePasscodeCompletion;
@property (copy, nonatomic) id /* block */ legacyDevicePasscodeCompletion;
@property (retain, nonatomic) NSError *SUError;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)refreshState;
- (id)selectSpecifier:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)softwareUpdatePane:(id)a0 showPINSheet:(id)a1;
- (void)didAcceptEnteredPIN:(id)a0;
- (void)manager:(id)a0 promptForDevicePasscodeWithDescriptorCompletion:(id /* block */)a1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)updateState;
- (void)upgradeDownloadToUserInitiated:(id)a0 setPaneToPrimary:(BOOL)a1;
- (void)nonPromotedSoftwareUpdatePaneDidDisappear:(id)a0;
- (void)manager:(id)a0 scanFoundUpdates:(id)a1 error:(id)a2;
- (void)willEnterForeground;
- (void)softwareUpdatePane:(id)a0 specifiersChanged:(id)a1;
- (void)viewWillDisappear:(BOOL)a0;
- (void)setAutomaticUpdatesFromUI:(id)a0 forSpecifier:(id)a1;
- (void)alternateSoftwareUpdatePaneDidDisappear:(id)a0;
- (void)_downloadAndInstall:(id)a0 installationType:(unsigned long long)a1 setPaneToPrimary:(BOOL)a2;
- (void)softwareUpdatePaneReadyToUpgradeToUserInitiatedDownloadAndReplacePreferredPaneWithPane:(id)a0;
- (void)setAutomaticDownloadFromUI:(id)a0 forSpecifier:(id)a1;
- (void)softwareUpdatePaneUpgradeToUserInitiatedDownload:(id)a0;
- (void)alternateSoftwareUpdatePaneDidAppear:(id)a0;
- (void)autoInstallCancel:(id)a0;
- (void)manager:(id)a0 promptForDevicePasscodeWithCompletion:(id /* block */)a1;
- (void)softwareUpdatePane:(id)a0 readyToDownload:(unsigned long long)a1;
- (void)loadView;
- (void)manager:(id)a0 downloadProgressChanged:(id)a1 displayStyle:(int)a2;
- (Class)tableViewClass;
- (void)movePaneToPrimary:(id)a0;
- (void)manager:(id)a0 downloadDidStart:(id)a1;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (void)manager:(id)a0 autoUpdateScheduledStatusChanged:(BOOL)a1;
- (void)viewDidDisappear:(BOOL)a0;
- (id)automaticUpdateStatus;
- (BOOL)autoInstallArmed;
- (void).cxx_destruct;
- (id)init;
- (id)automaticDownloadStatus;
- (void)softwareUpdatePane:(id)a0 readyToDownloadAndReplacePreferredPaneWithPane:(unsigned long long)a1;
- (void)presentViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)detailedReleaseNotesDonePressed:(id)a0;
- (void)devicePINControllerDidDismissPINPane:(id)a0 forUpdate:(id)a1;
- (void)softwareUpdatePane:(id)a0 devicePINControllerDidDismissPINPane:(id)a1;
- (void)devicePINControllerDidDismissPINPane:(id)a0;
- (void)_downloadAndInstall:(id)a0 installationType:(unsigned long long)a1;
- (void)downloadOnly;
- (void)install:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)manager:(id)a0 didTransitionToState:(int)a1 fromState:(int)a2;
- (void)manager:(id)a0 download:(id)a1 failedWithError:(id)a2;
- (void)softwareUpdatePane:(id)a0 presentConfirmationSpecifier:(id)a1;
- (void)downloadAndInstallTonight;
- (void)downloadAndInstall;
- (void)softwareUpdatePane:(id)a0 learnMoreButtonTapped:(id)a1;
- (void)updateTableFromState:(int)a0;
- (void)softwareUpdatePaneReadyToInstall:(id)a0;

@end
