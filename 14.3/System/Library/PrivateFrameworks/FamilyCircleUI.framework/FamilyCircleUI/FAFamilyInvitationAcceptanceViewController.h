@class NSString, AAUIRemoteUIController, AAFamilyInvite, NSOperationQueue, AAGrandSlamSigner, ACAccount, NSMutableURLRequest, ACAccountStore;
@protocol FAInvitationAcceptanceDelegate;

@interface FAFamilyInvitationAcceptanceViewController : AAUIBleachedNavigationController <FAConfirmIdentityViewControllerDelegate, RemoteUIControllerDelegate> {
    ACAccount *_account;
    ACAccountStore *_accountStore;
    AAGrandSlamSigner *_grandSlamSigner;
    AAFamilyInvite *_invite;
    AAUIRemoteUIController *_remoteUIController;
    NSOperationQueue *_inviteOperationQueue;
    NSMutableURLRequest *_startRemoteUIRequest;
    NSMutableURLRequest *_currentRemoteUIRequest;
}

@property (weak, nonatomic) id<FAInvitationAcceptanceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_cancelButtonWasTapped:(id)a0;
- (void)remoteUIControllerDidDismiss:(id)a0;
- (void)remoteUIController:(id)a0 willLoadRequest:(id)a1;
- (void)remoteUIController:(id)a0 didReceiveHTTPResponse:(id)a1;
- (void)remoteUIController:(id)a0 willPresentObjectModel:(id)a1 modally:(BOOL)a2;
- (void)_sendUserToiTunesSettings;
- (void)confirmIdentityViewController:(id)a0 didCompleteWithSuccess:(BOOL)a1;
- (id)_createCancelButton;
- (void)_loadiTunesLinkingRemoteUI;
- (void)_showErrorAlert;
- (id)initWithInvite:(id)a0 appleAccount:(id)a1 grandSlamSigner:(id)a2;

@end
