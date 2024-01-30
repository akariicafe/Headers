@class NSURL, NSMutableDictionary, AIDAAccountManager, UINavigationController, FAProfilePictureStore, FARequestConfigurator, ACAccount, AAGrandSlamSigner, NSMutableURLRequest, AAUIServerUIHookHandler, NSString, FAFamilyMember, NSOperationQueue, FAFamilyCreditCard, AAUIRemoteUIController, ACAccountStore, FACircleRemoteUIDelegate;
@protocol FAFamilySettingsViewControllerHelperDelegate;

@interface FAFamilySettingsViewControllerHelper : NSObject <RemoteUIControllerDelegate> {
    AAUIServerUIHookHandler *_serverUIHookHandler;
    AAGrandSlamSigner *_appleIDGrandSlamSigner;
    AAGrandSlamSigner *_iCloudGrandSlamSigner;
    FAFamilyMember *_memberBeingViewed;
    NSMutableDictionary *_objectModelDecorators;
    NSMutableURLRequest *_currentRemoteUIRequest;
    FARequestConfigurator *_requestConfigurator;
    AAUIRemoteUIController *_iCloudRemoteUIController;
    AAUIRemoteUIController *_appleIDRemoteUIController;
    AAUIRemoteUIController *_familyV2RemoteUIController;
    FACircleRemoteUIDelegate *_familyRemoteUIDelegate;
    FAFamilyCreditCard *_paymentMethod;
    BOOL _fetchingPaymentMethodImage;
    ACAccountStore *_accountStore;
    ACAccount *_appleAccount;
    ACAccount *_grandSlamAccount;
    ACAccount *_itunesAccount;
    BOOL _fetchingPaymentInfo;
    NSOperationQueue *_networkingQueue;
    FAProfilePictureStore *_familyPictureStore;
    AIDAAccountManager *_accountManager;
}

@property (weak, nonatomic) id<FAFamilySettingsViewControllerHelperDelegate> delegate;
@property (weak, nonatomic) UINavigationController *navigationController;
@property (retain, nonatomic) NSURL *urlBeingLoaded;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_handleObjectModelChangeForController:(id)a0 objectModel:(id)a1 isModal:(BOOL)a2;
- (id)_requestConfigurator;
- (void)dealloc;
- (void)remoteUIController:(id)a0 didRefreshObjectModel:(id)a1;
- (void)remoteUIController:(id)a0 willPresentObjectModel:(id)a1 modally:(BOOL)a2;
- (void).cxx_destruct;
- (id)remoteUIController:(id)a0 createPageWithName:(id)a1 attributes:(id)a2;
- (void)remoteUIController:(id)a0 didReceiveHTTPResponse:(id)a1;
- (void)remoteUIController:(id)a0 didReceiveObjectModel:(id)a1 actionSignal:(unsigned long long *)a2;
- (void)remoteUIController:(id)a0 didRemoveObjectModel:(id)a1;
- (void)remoteUIController:(id)a0 willLoadRequest:(id)a1;
- (void)remoteUIController:(id)a0 willPresentModalNavigationController:(id)a1;
- (void)remoteUIControllerDidDismiss:(id)a0;
- (id)_appleIDGrandSlamSigner;
- (void)_fetchFamilyPaymentInfoWithCompletion:(id /* block */)a0;
- (id)_itunesAccount;
- (void)_setFresnoRemoteUIDelgate:(id)a0;
- (id)initWithAppleAccount:(id)a0 grandSlamSigner:(id)a1 familyPictureStore:(id)a2 accountManager:(id)a3;
- (void)loadMemberDetailsForFamilyMember:(id)a0 completion:(id /* block */)a1;
- (BOOL)loadRemoteUIWithRequest:(id)a0 type:(long long)a1 completion:(id /* block */)a2;
- (BOOL)loadRemoteUIWithRequest:(id)a0 url:(id)a1 type:(long long)a2 completion:(id /* block */)a3;

@end
