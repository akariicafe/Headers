@class SBFRemoteBasebandLoggingManager, NSString, MCProfileConnection, CSStatusTextView;
@protocol CSStatusTextViewControllerDelegate;

@interface CSStatusTextViewController : CSCoverSheetViewControllerBase <SBFRemoteBasebandLoggingObserver> {
    CSStatusTextView *_view;
    MCProfileConnection *_profileConnection;
    SBFRemoteBasebandLoggingManager *_basebandLoggingManager;
}

@property (weak, nonatomic) id<CSStatusTextViewControllerDelegate> delegate;
@property (copy, nonatomic) NSString *overrideFooterText;

- (id)init;
- (void)_updateText;
- (void)_profileStateChangedNotification:(id)a0;
- (void).cxx_destruct;
- (id)_legalContact;
- (void)dealloc;
- (id)_legalString;
- (void)_updateTextForProvisionalEnrollment;
- (void)loadView;
- (void)remoteBasebandLogCollectionStateDidChange:(BOOL)a0;
- (void)didMoveToParentViewController:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)_updateTextForLegal;
- (BOOL)_isSecurityResearchDevice;
- (void)viewDidDisappear:(BOOL)a0;
- (void)_updateTextForSupervision;
- (void)_updateTextForProfiles;
- (void)_updateTextForDeviceInformation;
- (id)statusTextView;

@end
