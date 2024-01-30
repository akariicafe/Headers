@class NSString, PSSpecifier, SUSSoftwareUpdateTitleCell, NSError, SUSUISoftwareUpdateManager, UsageStorageController;

@interface SUSUISoftwareUpdateController : PSListController <DevicePINControllerDelegate, UITableViewDelegate, SUSUISoftwareUpdateManagerDelegate> {
    SUSUISoftwareUpdateManager *_manager;
    PSSpecifier *_titleGroup;
    SUSSoftwareUpdateTitleCell *_titleCell;
    PSSpecifier *_installButtonGroup;
    PSSpecifier *_installButtonSpecifier;
    PSSpecifier *_automaticUpdateGroup;
    PSSpecifier *_automaticUpdateSpecifier;
    BOOL _disableInstallButton;
    BOOL _showingTerms;
    NSString *_devicePasscode;
    UsageStorageController *_usageStorageController;
    BOOL _hideInsufficientStorageUI;
    BOOL _refreshOnNextAppearance;
}

@property (copy, nonatomic) id /* block */ devicePasscodeCompletion;
@property (retain, nonatomic) NSError *SUError;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (Class)tableViewClass;
- (void)updateState;
- (void).cxx_destruct;
- (void)dealloc;
- (void)refreshState;
- (void)viewWillDisappear:(BOOL)a0;
- (void)handleLongPress:(id)a0;
- (void)presentViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)loadView;
- (id)specifiers;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)willEnterForeground;
- (void)viewWillAppear:(BOOL)a0;
- (void)resumeDownload:(id)a0;
- (void)didAcceptEnteredPIN:(id)a0;
- (void)devicePINControllerDidDismissPINPane:(id)a0;
- (id)selectSpecifier:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)setSUError:(id)a0 disableButton:(BOOL)a1 reload:(BOOL)a2;
- (void)_populateAutomaticUpdateGroupSpecifier:(id)a0 withAutomaticUpdatesEnabled:(BOOL)a1 withUpdatesManager:(BOOL)a2;
- (void)showStorageHelpLinkIfNeededOnFooterForGroup:(id)a0 error:(id)a1;
- (id)specifiersForState:(int)a0;
- (void)manager:(id)a0 didTransitionToState:(int)a1 fromState:(int)a2 error:(id)a3;
- (void)downloadAndInstall:(id)a0;
- (void)install:(id)a0;
- (void)autoInstallCancelPrompt:(id)a0;
- (void)openStorage;
- (void)presentError:(id)a0;
- (void)_downloadAndInstall:(unsigned long long)a0;
- (void)setShowsTermsProgress:(BOOL)a0;
- (void)downloadOnly:(id)a0;
- (void)downloadAndInstallTonight;
- (void)autoInstallCancel:(id)a0;
- (void)detailedReleaseNotesDonePressed:(id)a0;
- (void)downloadInstallLongPressPrompt;
- (void)manager:(id)a0 downloadProgressChanged:(id)a1 displayStyle:(int)a2;
- (void)manager:(id)a0 promptForDevicePasscodeWithCompletion:(id /* block */)a1;
- (void)manager:(id)a0 scanFoundUpdate:(id)a1 error:(id)a2;
- (void)manager:(id)a0 download:(id)a1 failedWithError:(id)a2;
- (void)setAutomaticUpdatesFromUI:(id)a0 forSpecifier:(id)a1;
- (void)setAutomaticDownloadFromUI:(id)a0 forSpecifier:(id)a1;
- (id)automaticUpdateStatus;
- (id)automaticDownloadStatus;
- (BOOL)autoInstallArmed;

@end
