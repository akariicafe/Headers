@class CardDAVLocalDBHelper, NSString, DACoreDAVLogger, CoreDAVDiscoveryTaskGroup, DACoreDAVTaskManager;

@interface CardDAVAccount : DAAccount <CoreDAVAccountInfoProvider, CoreDAVOAuthInfoProvider, CoreDAVLogDelegate, CoreDAVDiscoveryTaskGroupDelegate>

@property (retain, nonatomic) CoreDAVDiscoveryTaskGroup *checkValidityTaskGroup;
@property (retain, nonatomic) DACoreDAVLogger *curLogger;
@property (readonly, nonatomic) int cardDAVAccountVersion;
@property (readonly, nonatomic) DACoreDAVTaskManager *taskManager;
@property (readonly, nonatomic) CardDAVLocalDBHelper *databaseHelper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)addressBookConstraintsPlistPath;

- (void).cxx_destruct;
- (void)promptUserForNewCoreDAVPasswordWithCompletionBlock:(id /* block */)a0;
- (unsigned long long)oauthVariant;
- (void)dealloc;
- (BOOL)enabledForDADataclass:(long long)a0;
- (id)initWithBackingAccountInfo:(id)a0;
- (void)removeFromCoreDAVLoggingDelegates;
- (void)addToCoreDAVLoggingDelegates;
- (id)onBehalfOfBundleIdentifier;
- (id)spinnerIdentifiers;
- (void)discoverInitialPropertiesWithConsumer:(id)a0;
- (id)serverRoot;
- (id)serverComplianceClasses;
- (BOOL)isEqualToAccount:(id)a0;
- (BOOL)handleTrustChallenge:(id)a0;
- (id)logHandle;
- (id)localizedIdenticalAccountFailureMessage;
- (id)localizedInvalidPasswordMessage;
- (id)userAgentHeader;
- (id)wellKnownPaths;
- (void)noteHomeSetOnDifferentHost:(id)a0;
- (void)discoveryTask:(id)a0 gotAccountInfo:(id)a1 error:(id)a2;
- (BOOL)shouldLogTransmittedData;
- (void)coreDAVLogTransmittedDataPartial:(id)a0;
- (void)coreDAVTransmittedDataFinished;
- (id)copyImageContentsAtURL:(id)a0 outError:(id *)a1;
- (void)_massageAddedOrModifiedVCard:(id)a0;
- (void)setServerComplianceClasses:(id)a0;

@end
