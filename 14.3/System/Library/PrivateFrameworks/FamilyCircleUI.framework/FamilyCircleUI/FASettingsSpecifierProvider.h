@class FACircleContext, AIDAAccountManager, FAFamilyNotificationObserver, NSDictionary, FAProfilePictureStore, FARequestConfigurator, NSMutableArray, AAGrandSlamSigner, NSString, FATableViewDecorator, FAFamilyCircle, AAFamilyEligibilityResponse, PSSpecifier, NSArray, PSListController, NSOperationQueue;
@protocol AAUISpecifierProviderDelegate;

@interface FASettingsSpecifierProvider : NSObject <FASetupDelegate, FAFamilySettingsViewControllerDelegate, RemoteUIControllerDelegate, AAUISpecifierProvider> {
    FATableViewDecorator *_remoteUIDecorator;
    FAFamilyNotificationObserver *_familyNotificationObserver;
    PSListController *_presenter;
    PSSpecifier *_familyCellSpecifier;
    PSSpecifier *_invitationsCellSpecifier;
    BOOL _isLoadingFamilyDetails;
    BOOL _didFailToGetFamilyDetails;
    NSMutableArray *_pendingFamilyDetailsCompletionBlocks;
    FAFamilyCircle *_familyCircle;
    AAFamilyEligibilityResponse *_familyEligibilityResponse;
    NSMutableArray *_pendingInvites;
    NSString *_familyStatusSummary;
    NSString *_invitationSummary;
    long long _familyEligibilityStatus;
    BOOL _isHandlingURLForInvite;
    NSOperationQueue *_networkActivityQueue;
    AIDAAccountManager *_accountManager;
    AAGrandSlamSigner *_grandSlamSigner;
    FARequestConfigurator *_requestConfigurator;
    FACircleContext *_context;
    BOOL _delayedEnterInitiateFlow;
    FAProfilePictureStore *_familyPictureStore;
    NSDictionary *_cachedResourceDictionary;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AAUISpecifierProviderDelegate> delegate;
@property (copy, nonatomic) NSArray *specifiers;

- (BOOL)handleURL:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)_grandSlamSigner;
- (void)remoteUIController:(id)a0 didRefreshObjectModel:(id)a1;
- (void)reloadSpecifiers;
- (id)initWithAccountManager:(id)a0;
- (void)remoteUIController:(id)a0 willPresentObjectModel:(id)a1 modally:(BOOL)a2;
- (id)_accountStore;
- (BOOL)_isEnabled;
- (id)_appleAccount;
- (BOOL)remoteUIController:(id)a0 shouldLoadRequest:(id)a1 redirectResponse:(id)a2;
- (void)familySetupViewController:(id)a0 didCompleteWithSuccess:(BOOL)a1;
- (void)_handleObjectModelChangeForController:(id)a0 objectModel:(id)a1 isModal:(BOOL)a2;
- (id)_requestConfigurator;
- (void)familySettingsViewControllerDidDeleteFamily:(id)a0;
- (void)familySettingsViewControllerDidUpdateFamily:(id)a0;
- (id)initWithAccountManager:(id)a0 presenter:(id)a1;
- (void)_loadFamilyDetailsWithCompletion:(id /* block */)a0;
- (id)_familySpecifier;
- (id)_invitationsCellSpecifier;
- (id)_valueForInvitiationsSpecifier:(id)a0;
- (void)_pendingInvitationsSpecifierWasTapped:(id)a0;
- (unsigned long long)_familyState;
- (id)_familyBaseSpecifierWithState:(unsigned long long)a0;
- (void)_viewFamilySpecifierWasTapped;
- (void)_setUpFamilySpecifierWasTapped:(id)a0;
- (id)_valueForFamilySpecifier:(id)a0;
- (void)_handleFamilyDetailsResponse:(id)a0 error:(id)a1 completion:(id /* block */)a2;
- (void)_loadFamilyEligibilityWithCompletion:(id /* block */)a0;
- (void)_showUnderageAlertWithEligibilityResponse:(id)a0;
- (void)_initiateFamily;
- (void)_clearFamilyState;
- (void)_reloadFamilySpecifiersAnimated:(BOOL)a0;
- (void)_initiateFamilyWithResources:(id)a0;
- (id)_configureContextWithType:(id)a0 resourceDictionary:(id)a1;
- (void)_reloadFamily;
- (void)_presentPendingInvitesRemoteUI;
- (void)_viewFamilyWithResourceDictionary:(id)a0;
- (void)_handleFamilyEligibilityResponse:(id)a0 completion:(id /* block */)a1;
- (void)_handleShowFamilyInviteActionURL:(id)a0;
- (void)_handleStartFamilySetupActionURL:(id)a0;
- (void)_handleShowFamilySettingsURL:(id)a0;
- (void)_handleShowChildTransferActionURL:(id)a0;
- (void)_handleShowInvitesActionURL:(id)a0;
- (id)_acuPresenter;
- (void)_handleShowInviteActionURL:(id)a0 isChildTransfer:(BOOL)a1;
- (void)_reloadFamilySpecifiers;

@end
