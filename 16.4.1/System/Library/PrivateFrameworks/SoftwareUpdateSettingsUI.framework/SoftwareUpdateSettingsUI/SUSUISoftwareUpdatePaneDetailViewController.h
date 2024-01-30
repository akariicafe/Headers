@class NSString;

@interface SUSUISoftwareUpdatePaneDetailViewController : SUSUISoftwareUpdatePane <DevicePINControllerDelegate, UITableViewDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)currentSpecifiers;
- (void)reloadSpecifiers:(id)a0;
- (id)init;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)didAcceptEnteredPIN:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)devicePINControllerDidDismissPINPane:(id)a0;
- (id)updateDescriptor;
- (id)suError;
- (id)_alternateUpdateButtonSpecifierForState:(int)a0;
- (id)_alternateUpdateGroupSpecifierForState:(int)a0;
- (id)_automaticUpdateButtonSpecifierForState:(int)a0;
- (id)_automaticUpdateGroupSpecifierForState:(int)a0;
- (id)_betaUpdatesButtonSpecifierForState:(int)a0;
- (id)alternateUpdateDescriptor;
- (id)analyticsDownloadAndInstallNowTappedString;
- (id)analyticsDownloadAndInstallTonightTappedString;
- (id)analyticsDownloadOnlyTappedString;
- (id)analyticsOpenStorageTappedString;
- (void)detailedReleaseNotesDonePressed:(id)a0;
- (id)installLaterTappedString;
- (id)installNowTappedString;
- (id)learnMoreTappedString;
- (void)presentConfimationSpecifier:(id)a0;
- (void)readyToDownload:(unsigned long long)a0;
- (void)showPINSheetForSpecifier:(id)a0;
- (void)titleCell:(id)a0 learnMoreButtonTapped:(id)a1;
- (BOOL)updateReadyToDownload;
- (void)upgradeToUserInitiated:(id)a0;

@end
