@class NSDictionary, NSBundle, NSString;

@interface IMDService : NSObject <IMSystemMonitorListener> {
    Class _sessionClass;
    NSString *_internalName;
    NSDictionary *_accountDefaults;
    NSDictionary *_serviceDefaults;
    NSDictionary *_cachedServiceDefaults;
    NSDictionary *_cachedSetupServiceDefaults;
    BOOL _blockPrefWriting;
}

@property (retain, nonatomic) NSDictionary *serviceProperties;
@property (readonly, nonatomic) Class sessionClass;
@property (readonly, nonatomic) Class accountClass;
@property (readonly, retain, nonatomic) NSBundle *bundle;
@property (readonly, retain, nonatomic) NSString *internalName;
@property (readonly, retain, nonatomic) NSString *serviceDomain;
@property (readonly, nonatomic) BOOL isIDSBased;
@property (readonly, nonatomic) BOOL isLegacy;
@property (readonly, nonatomic, getter=isDiscontinued) BOOL discontinued;
@property (readonly, retain, nonatomic) NSDictionary *serviceDefaults;
@property (readonly, retain, nonatomic) NSDictionary *serviceDefaultsForSetup;
@property (readonly, retain, nonatomic) NSDictionary *defaultAccountSettings;
@property (readonly, nonatomic) BOOL serviceRequiresSingleAccount;
@property (readonly, nonatomic) BOOL shouldCreateActiveAccounts;
@property (readonly, nonatomic) BOOL serviceWantsNullHostReachability;
@property (readonly, nonatomic) BOOL serviceIgnoresNetworkConnectivity;
@property (readonly, nonatomic) BOOL shouldForceAccountsActive;
@property (readonly, nonatomic) BOOL shouldForceAccountsConnected;
@property (readonly, nonatomic) BOOL serviceNeedsLogin;
@property (readonly, nonatomic) BOOL serviceNeedsPassword;
@property (readonly, nonatomic) BOOL serviceShouldBeAlwaysLoggedIn;
@property (readonly, nonatomic) BOOL serviceRequiresHost;
@property (readonly, nonatomic) BOOL serviceSupportsRegistration;
@property (readonly, nonatomic) BOOL serviceSupportsAuthorization;
@property (readonly, nonatomic) BOOL serviceChatsIgnoreLoginStatus;
@property (readonly, nonatomic) BOOL serviceSupportsPresence;
@property (readonly, nonatomic) BOOL serviceSupportsOneSessionForAllAccounts;
@property (readonly, nonatomic) BOOL supportsDatabase;
@property (readonly, nonatomic) BOOL disallowDeactivation;
@property (readonly, nonatomic) long long serviceProtocolVersion;

- (void)accountAdded:(id)a0;
- (id)initWithBundle:(id)a0;
- (void)accountRemoved:(id)a0;
- (id)_serviceDomain;
- (id)newAccountWithAccountDefaults:(id)a0 accountID:(id)a1;
- (void)_reallyUnloadServiceBundle;
- (void)saveSettings;
- (BOOL)clearOneTimeImportAccounts;
- (id)_serviceDefaultsForDomain:(id)a0;
- (void)systemDidStartBackup;
- (void)purgeMemoryCaches;
- (void)synchronizeServiceDefaults;
- (id)description;
- (void)systemDidEnterMemoryPressure;
- (id)_oldServiceDomain;
- (id)mainService;
- (id)createDiscontinuedAccount;
- (void)unloadServiceBundle;
- (void)loadServiceBundle;
- (void)disableAccount:(id)a0;
- (id)_copyServicePropertiesFromIMServiceBundle:(id)a0;
- (id)oldInternalName;
- (id)_defaultDefaults;
- (void)delayedSaveSettings;
- (void)dealloc;
- (void)enableAccount:(id)a0;

@end
