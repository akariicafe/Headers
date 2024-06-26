@class ACAccountStore, ACAccount, NSMutableURLRequest, FAProfilePictureStore, UILabel, FAFamilyMember, NSString, FAFamilyCreditCard, UITableViewCell, UIActivityIndicatorView, NSArray, NSMutableDictionary, PSSpecifier, FASharedSubscriptionSpecifierProvider, FACircleRemoteUIDelegate, AAUIServerUIHookHandler, NSOperationQueue, FARequestConfigurator, AAGrandSlamSigner, UINavigationController, NSURL, FAFamilyCircle, FAFamilyNotificationObserver, AAUIRemoteUIController;
@protocol FAFamilySettingsViewControllerDelegate;

@interface FAFamilySettingsViewController : ACUIViewController <UINavigationControllerDelegate, RemoteUIControllerDelegate, FASharedSubscriptionSpecifierProviderDelegeate> {
    AAGrandSlamSigner *_iCloudGrandSlamSigner;
    AAGrandSlamSigner *_appleIDGrandSlamSigner;
    ACAccount *_appleAccount;
    ACAccount *_grandSlamAccount;
    ACAccount *_itunesAccount;
    ACAccountStore *_accountStore;
    FAFamilyCircle *_familyCircle;
    NSOperationQueue *_networkingQueue;
    PSSpecifier *_addFamilyMemberCell;
    FAProfilePictureStore *_familyPictureStore;
    AAUIRemoteUIController *_iCloudRemoteUIController;
    AAUIRemoteUIController *_appleIDRemoteUIController;
    AAUIRemoteUIController *_familyV2RemoteUIController;
    FACircleRemoteUIDelegate *_familyRemoteUIDelegate;
    UITableViewCell *_activeCell;
    NSURL *_activeURL;
    FAFamilyMember *_memberBeingViewed;
    NSMutableDictionary *_objectModelDecorators;
    UINavigationController *_childAccountCreationNavController;
    FAFamilyNotificationObserver *_notificationObserver;
    BOOL _fetchingPaymentInfo;
    FAFamilyCreditCard *_paymentMethod;
    NSArray *_paymentInfoSpecifiers;
    BOOL _fetchingPaymentMethodImage;
    NSMutableURLRequest *_currentRemoteUIRequest;
    FARequestConfigurator *_requestConfigurator;
    AAUIServerUIHookHandler *_serverUIHookHandler;
    FACircleRemoteUIDelegate *_faCircleRemoteUIDelegate;
    FASharedSubscriptionSpecifierProvider *_sharedSubscriptionSpecifierProvider;
    UIActivityIndicatorView *_activityIndicatorView;
    UILabel *_navigationBarTitleLabel;
    double _familyHeaderTitleOffset;
    BOOL _isNavigationTitleViewDisplayed;
}

@property (weak, nonatomic) id<FAFamilySettingsViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (void)dealloc;
- (void)remoteUIControllerDidDismiss:(id)a0;
- (void)remoteUIController:(id)a0 willLoadRequest:(id)a1;
- (void)remoteUIController:(id)a0 didReceiveHTTPResponse:(id)a1;
- (void)remoteUIController:(id)a0 didRefreshObjectModel:(id)a1;
- (void)remoteUIController:(id)a0 didRemoveObjectModel:(id)a1;
- (id)remoteUIController:(id)a0 createPageWithName:(id)a1 attributes:(id)a2;
- (void)remoteUIController:(id)a0 willPresentObjectModel:(id)a1 modally:(BOOL)a2;
- (id)specifiers;
- (void)remoteUIController:(id)a0 didDismissModalNavigationWithObjectModels:(id)a1;
- (void)handleURL:(id)a0 withCompletion:(id /* block */)a1;
- (void)remoteUIController:(id)a0 willPresentModalNavigationController:(id)a1;
- (void)traitCollectionDidChange:(id)a0;
- (void)remoteUIController:(id)a0 didReceiveObjectModel:(id)a1 actionSignal:(unsigned long long *)a2;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)reloadSpecifiersForProvider:(id)a0 oldSpecifiers:(id)a1 animated:(BOOL)a2;
- (void)_handleObjectModelChangeForController:(id)a0 objectModel:(id)a1 isModal:(BOOL)a2;
- (id)_requestConfigurator;
- (void)_setupFamilyHeaderView;
- (id)_sharedSubscriptionSpecifierProvider;
- (void)_fetchUpdatedFamilyDetailsWithCompletion:(id /* block */)a0;
- (void)_profilePictureStoreDidReload;
- (void)_handleFamilySubscriptionChanged;
- (void)_setupNavigationBarTitleView;
- (void)_layoutTableHeaderView;
- (id)_createSpecifierForFamilyMemberCell:(id)a0;
- (id)_createSpecifierForPendingMember:(id)a0;
- (void)_addFamilyMemberButtonWasTapped:(id)a0;
- (id)_sharedSubscriptionSpecifiers;
- (void)_handleServiceSpecifierURL:(id)a0 withCompletion:(id /* block */)a1;
- (id)_createSpecifiersForPaymentInfo;
- (void)_familyMemberCellWasTapped:(id)a0;
- (void)_pendingFamilyMemberCellWasTapped:(id)a0;
- (void)_reloadPaymentInfoSpecifiersAnimated:(BOOL)a0;
- (BOOL)_hasActiveCell;
- (void)_loadRemoteUIWithRequest:(id)a0 url:(id)a1 specifier:(id)a2 type:(long long)a3;
- (void)_loadRemoteUIWithRequest:(id)a0 specifier:(id)a1 type:(long long)a2;
- (void)_startSpinnerInCellLoadingRemoteUI:(id)a0;
- (void)_setFresnoRemoteUIDelgate:(id)a0;
- (void)_stopSpinnerInCellLoadingRemoteUI;
- (void)_addMemberWithEventType:(id)a0;
- (void)_addChildAccount;
- (void)_performEventWithContext:(id)a0 specifier:(id)a1 completion:(id /* block */)a2;
- (void)showActivityIndicatorInNavigationBar;
- (void)hideActivityIndicatorInNavigationBar;
- (id)_appleIDGrandSlamSigner;
- (id)_itunesAccount;
- (void)_showConnectivityAlert;
- (void)_handleFamilyStatusChange:(id)a0;
- (void)_updateMemberDetailsPageWithLinkedAppleID:(id)a0;
- (void)_handleFamilyDeletion;
- (void)_handleMemberDeletion:(id)a0;
- (void)_handleMemberUpdate:(id)a0;
- (void)_fireFamilyUpdateNotification;
- (void)_fetchFamilyPaymentInfoWithCompletion:(id /* block */)a0;
- (void)didSelectSpecifier:(id)a0;
- (id)initWithAppleAccount:(id)a0 grandSlamSigner:(id)a1 familyCircle:(id)a2 familyPictureStore:(id)a3;
- (id)_imageFromBundle:(id)a0;
- (id)_createSpecifierForFamilyMemberGroup;
- (void)_learnMoreLinkButtonWasTapped:(id)a0;
- (void)_paymentMethodCellWasTapped:(id)a0;

@end
