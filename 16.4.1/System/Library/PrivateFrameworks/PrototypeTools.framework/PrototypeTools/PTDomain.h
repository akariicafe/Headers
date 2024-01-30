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
+ (id)domainName;
+ (id)rootSettings;
+ (id)domainGroupName;
+ (id)_sharedInstance;
+ (void)registerTestRecipe:(id)a0;

- (id)_init;
- (void)dealloc;
- (void)_handleConnectionInvalidated;
- (void)_handleConnectionInterrupted;
- (void).cxx_destruct;
- (void)_createConnection;
- (id)_domainID;
- (id)_rootSettings;
- (void)_sendProxyDefinitionIfNecessary;
- (void)_applyArchive:(id)a0;
- (void)_applyArchiveValue:(id)a0 forKeyPath:(id)a1;
- (void)_disableObservationIfNecessary;
- (id)_domainInfo;
- (void)_noteRegistrationCompleted;
- (void)_registerTestRecipe:(id)a0;
- (void)_registerWithServerIfNecessary;
- (void)_restoreDefaultSettings;
- (void)_tearDownConnection;
- (void)_updateActiveTestRecipe;
- (void)_updateServerConnectionStatusIfNecessary;
- (void)invokeOutletAtKeyPath:(id)a0;
- (void)restoreDefaultSettings;
- (void)sendActiveTestRecipeEvent:(long long)a0;
- (void)setArchiveValue:(id)a0 forKeyPath:(id)a1;
- (void)updateSettingsFromArchive:(id)a0;

@end
