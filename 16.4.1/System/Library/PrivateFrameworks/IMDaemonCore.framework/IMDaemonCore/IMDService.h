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
@property (readonly, nonatomic) unsigned int idSensitivity;
@property (readonly, nonatomic) BOOL handleIDInsensitivityIsCarrierBased;
@property (readonly, nonatomic) unsigned long long caseInsensitivityByHandleType;
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

- (id)_serviceDefaultsForDomain:(id)a0;
- (id)_oldServiceDomain;
- (void)saveSettings;
- (id)_serviceDomain;
- (void)delayedSaveSettings;
- (id)mainService;
- (void)accountRemoved:(id)a0;
- (void)systemDidEnterMemoryPressure;
- (void)disableAccount:(id)a0;
- (void)enableAccount:(id)a0;
- (id)_copyServicePropertiesFromIMServiceBundle:(id)a0;
- (void)_reallyUnloadServiceBundle;
- (void)accountAdded:(id)a0;
- (void)unloadServiceBundle;
- (BOOL)clearOneTimeImportAccounts;
- (id)oldInternalName;
- (id)createDiscontinuedAccount;
- (id)newAccountWithAccountDefaults:(id)a0 accountID:(id)a1;
- (id)_defaultDefaults;
- (void)purgeMemoryCaches;
- (void)loadServiceBundle;
- (void)synchronizeServiceDefaults;
- (void)systemDidStartBackup;
- (id)initWithBundle:(id)a0;
- (void)dealloc;
- (id)description;

@end
