@class SBFRemoteBasebandLoggingManager, NSString, SBLockScreenDefaults, MCProfileConnection, CSStatusTextView;
@protocol CSStatusTextViewControllerDelegate;

@interface CSStatusTextViewController : CSCoverSheetViewControllerBase <SBFRemoteBasebandLoggingObserver> {
    CSStatusTextView *_view;
    MCProfileConnection *_profileConnection;
    SBFRemoteBasebandLoggingManager *_basebandLoggingManager;
    SBLockScreenDefaults *_lockScreenDefaults;
}

@property (weak, nonatomic) id<CSStatusTextViewControllerDelegate> delegate;
@property (copy, nonatomic) NSString *overrideFooterText;

- (void)remoteBasebandLogCollectionStateDidChange:(BOOL)a0;
- (void)_updateText;
- (void)_profileStateChangedNotification:(id)a0;
- (void)didMoveToParentViewController:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (id)_legalContact;
- (id)statusTextView;
- (void)loadView;
- (void)viewDidDisappear:(BOOL)a0;
- (void)_updateTextForSupervision;
- (void).cxx_destruct;
- (void)_updateTextForProvisionalEnrollment;
- (void)_updateTextForProfiles;
- (id)init;
- (BOOL)_isSecurityResearchDevice;
- (void)_updateTextForDeviceInformation;
- (void)_updateTextForLegal;
- (void)dealloc;
- (id)_legalString;

@end
