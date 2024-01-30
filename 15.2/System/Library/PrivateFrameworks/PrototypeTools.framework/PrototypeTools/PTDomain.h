@class PTSettings, NSString, PTDomainInfo, NSXPCConnection, NSMutableDictionary, PTTestRecipe;

@interface PTDomain : NSObject <PTDomainClient> {
    NSXPCConnection *_serverConnection;
    PTDomainInfo *_domainInfo;
    NSString *_domainID;
    PTSettings *_rootSettings;
    NSMutableDictionary *_testRecipesByIdentifier;
    PTTestRecipe *_activeTestRecipe;
    BOOL _registrationRequested;
    BOOL _registrationCompleted;
    BOOL _haveSentProxyDefinition;
    double _delayBeforeRegisteringAfterInterruption;
    BOOL _archiveIsApplied;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)rootSettingsClass;
+ (id)_sharedInstance;
+ (id)domainGroupName;
+ (id)rootSettings;
+ (id)domainName;
+ (void)registerTestRecipe:(id)a0;

- (void)_handleConnectionInvalidated;
- (void).cxx_destruct;
- (id)_init;
- (void)_createConnection;
- (void)dealloc;
- (id)_rootSettings;
- (id)_domainID;
- (void)_registerTestRecipe:(id)a0;
- (void)_updateServerConnectionStatusIfNecessary;
- (void)_disableObservationIfNecessary;
- (void)_sendProxyDefinitionIfNecessary;
- (void)_updateActiveTestRecipe;
- (void)_applyArchive:(id)a0;
- (void)_noteRegistrationCompleted;
- (void)_restoreDefaultSettings;
- (void)_applyArchiveValue:(id)a0 forKeyPath:(id)a1;
- (id)_domainInfo;
- (void)_registerWithServerIfNecessary;
- (void)_tearDownConnection;
- (void)_handleConnectionInterrupted;
- (void)updateSettingsFromArchive:(id)a0;
- (void)restoreDefaultSettings;
- (void)setArchiveValue:(id)a0 forKeyPath:(id)a1;
- (void)invokeOutletAtKeyPath:(id)a0;
- (void)sendActiveTestRecipeEvent:(long long)a0;

@end
