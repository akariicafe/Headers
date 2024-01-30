@class ICQUpgradeFlowManager, NSString, NSArray, PSSpecifier, ICQInternetPrivacyViewController, NSObject, AIDAAccountManager, ICQInternetPrivacyViewModel;
@protocol AAUISpecifierProviderDelegate;

@interface ICQInternetPrivacySpecifierProvider : NSObject <ICQUpgradeFlowManagerDelegate, AAUISpecifierProvider>

@property (retain, nonatomic) AIDAAccountManager *accountManager;
@property (retain, nonatomic) ICQInternetPrivacyViewController *internetPrivacyController;
@property (retain, nonatomic) ICQInternetPrivacyViewModel *viewModel;
@property (retain, nonatomic) NSString *statusString;
@property (retain, nonatomic) ICQUpgradeFlowManager *flowManager;
@property (nonatomic) unsigned long long internetPrivacyAvailability;
@property (retain, nonatomic) PSSpecifier *internetPrivacySpecifier;
@property (nonatomic) BOOL hasProfileRestriction;
@property (retain, nonatomic) NSObject *observationToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AAUISpecifierProviderDelegate> delegate;
@property (copy, nonatomic) NSArray *specifiers;

- (id)initWithAccountManager:(id)a0;
- (void)dealloc;
- (id)account;
- (BOOL)handleURL:(id)a0;
- (void).cxx_destruct;
- (void)_fetchStatus;
- (void)_controllerLoadAction;
- (void)upgradeFlowManagerDidCancel:(id)a0;
- (void)upgradeFlowManagerDidComplete:(id)a0;
- (void)reloadSpecifer:(id)a0;
- (void)_presentLearnMoreSubscriberPage;
- (void)reloadQuotaInfo;
- (void)_configureInternetPrivacySpecifier:(id)a0;
- (void)_fetchStatusWithCompletion:(id /* block */)a0;
- (BOOL)_handleLocalBackupControllerURL:(id)a0;
- (BOOL)_handleQuotaJourneyURL:(id)a0;
- (void)_internetPrivacySpecifierLoadJourney:(id)a0;
- (void)_internetPrivacySpecifierWasTapped:(id)a0;
- (void)_registerForNSPDarwinNotification;
- (void)_reloadSpecifiers;
- (void)_setupWithAltDSID:(id)a0;
- (BOOL)_shouldShowInternetPrivacySpecifier;
- (void)_unregisterForNSPDarwinNotification;
- (id)_valueForInternetPrivacySpecifier:(id)a0;
- (id)makeDefaultInternetPrivacySpecifier;

@end
