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

- (void)_updateText;
- (void)remoteBasebandLogCollectionStateDidChange:(BOOL)a0;
- (void)didMoveToParentViewController:(id)a0;
- (void)_updateTextForDeviceInformation;
- (void)_updateTextForSupervision;
- (id)_legalString;
- (void)_profileStateChangedNotification:(id)a0;
- (void)dealloc;
- (id)_legalContact;
- (BOOL)_isSecurityResearchDevice;
- (id)statusTextView;
- (void)_updateTextForProfiles;
- (void)_updateTextForProvisionalEnrollment;
- (void)_updateTextForLegal;
- (id)init;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)loadView;
- (void)viewWillAppear:(BOOL)a0;

@end
