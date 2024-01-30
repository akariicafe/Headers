@class NSUUID, NSString, AAUIOBWelcomeController, AAUIContactsProvider, AALocalContactInfo, NSDictionary, AAUIGrandSlamRemoteUIPresenter, AAUIContactSetupNavigationController, AACustodianController, AIDAAccountManager, AAUIInviteMessageFlowController;
@protocol AAUICustodianSetupFlowControllerDelegate;

@interface AAUICustodianSetupFlowController : NSObject <AAUIAccountContactSelectorDelegate, AAUIChooseContactControllerDelegate, AAUIGrandSlamRemoteUIPresenterDelegate, AAUIInviteMessageFlowControllerDelegate> {
    AIDAAccountManager *_accountManager;
    AAUIContactsProvider *_contactsProvider;
    AACustodianController *_custodianController;
    AAUIOBWelcomeController *_firstTimeSetupVC;
    NSDictionary *_authResults;
    AALocalContactInfo *_invitedContact;
    NSUUID *_custodianshipID;
    AAUIGrandSlamRemoteUIPresenter *_remoteUIPresenter;
    AAUIInviteMessageFlowController *_inviteFlowController;
}

@property (retain, nonatomic) AAUIContactSetupNavigationController *navigationController;
@property (weak, nonatomic) id<AAUICustodianSetupFlowControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAccountManager:(id)a0;
- (void)start;
- (void).cxx_destruct;
- (void)_dismiss;
- (void)_showActivityIndicator;
- (void)_hideActivityIndicator;
- (void)chooseContactController:(id)a0 didSelectContact:(id)a1;
- (void)remoteUIRequestComplete:(id)a0 error:(id)a1;
- (void)remoteUIDidDismiss:(id)a0;
- (void)_fetchSuggestedContacts;
- (void)_validateAccountWithCompletion:(id /* block */)a0;
- (void)_verifyCDPWithCompletion:(id /* block */)a0;
- (void)_showAlertWithTitle:(id)a0 message:(id)a1;
- (void)_startInviteMessageFlow;
- (void)accountContactSelector:(id)a0 didSelectContact:(id)a1;
- (void)accountContactSelectorShowOtherContacts:(id)a0;
- (void)inviteMessageFlowDidFinish:(id)a0;
- (void)inviteMessageFlowWasCancelled:(id)a0;
- (id)initWithAccountManager:(id)a0 navigationController:(id)a1;
- (void)_showFirstTimeSetup;
- (void)_verifyAndInviteContact:(id)a0;
- (void)_showChooseContact;
- (void)_beginAddRecoveryContactFlow;
- (void)_showDeviceUpgradeUI;
- (void)_showSuggestedContactSelector:(id)a0;
- (void)_showChooseContactWithCancel;
- (void)_inviteContact:(id)a0;
- (void)_displayAlertForNotReachableContact:(id)a0;
- (void)_dismissCFUIfNeeded;
- (void)_cancelCustodianInvite;

@end
