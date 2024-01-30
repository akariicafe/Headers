@class NSString;

@interface SUSUISoftwareUpdatePaneDetailViewController : SUSUISoftwareUpdatePane <DevicePINControllerDelegate, UITableViewDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didAcceptEnteredPIN:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)reloadSpecifiers:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (id)init;
- (void)detailedReleaseNotesDonePressed:(id)a0;
- (void)devicePINControllerDidDismissPINPane:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (id)currentSpecifiers;
- (id)updateDescriptor;
- (void)titleCell:(id)a0 learnMoreButtonTapped:(id)a1;
- (id)analyticsDownloadOnlyTappedString;
- (id)analyticsDownloadAndInstallTonightTappedString;
- (id)analyticsDownloadAndInstallNowTappedString;
- (id)analyticsOpenStorageTappedString;
- (id)learnMoreTappedString;
- (id)installNowTappedString;
- (id)installLaterTappedString;
- (void)readyToDownload:(unsigned long long)a0;
- (id)suError;
- (BOOL)updateReadyToDownload;
- (id)alternateUpdateDescriptor;
- (id)_alternateUpdateGroupSpecifierForState:(int)a0;
- (id)_alternateUpdateButtonSpecifierForState:(int)a0;
- (id)_automaticUpdateGroupSpecifierForState:(int)a0;
- (id)_automaticUpdateButtonSpecifierForState:(int)a0;
- (void)presentConfimationSpecifier:(id)a0;
- (void)showPINSheetForSpecifier:(id)a0;
- (void)upgradeToUserInitiated:(id)a0;

@end
