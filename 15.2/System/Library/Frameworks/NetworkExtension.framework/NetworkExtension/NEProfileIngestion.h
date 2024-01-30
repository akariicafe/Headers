@class NSString, NEConfigurationManager, NEConfiguration, NSMutableArray;

@interface NEProfileIngestion : NSObject <NEProfileIngestionDelegate>

@property (readonly) NSString *clientName;
@property (readonly) NSString *payloadType;
@property (readonly) NEConfigurationManager *manager;
@property (retain) NSMutableArray *currentConfigurations;
@property (retain) NEConfiguration *ingestedConfiguration;

+ (id)getServiceIDForPayload:(id)a0;
+ (void)profileMigrationComplete;

- (id)findConfigurationByConfigurationID:(id)a0;
- (BOOL)loadConfigurationsWithRefreshOption:(BOOL)a0;
- (id)findConfigurationByName:(id)a0;
- (BOOL)saveConfiguration:(id)a0;
- (id)findConfigurationByPayloadUUID:(id)a0;
- (id)resolveConfigurationNameConflict:(id)a0;
- (BOOL)removeConfiguration:(id)a0;
- (BOOL)loadConfigurationsForceReloadFromDisk;
- (BOOL)enableAlwaysOnVpnInternal:(BOOL)a0;
- (BOOL)isAutoCreatedRule:(id)a0;
- (id)findMostSpecificAppRuleForBundleID:(id)a0 config:(id)a1;
- (BOOL)createConfigurationFromPayload:(id)a0 payloadType:(id)a1;
- (BOOL)saveIngestedConfiguration;
- (BOOL)removeIngestedConfiguration;
- (id)setAsideConfigurationName:(id)a0 unsetAside:(BOOL)a1;
- (BOOL)isInstalled:(id)a0;
- (BOOL)lockConfigurations;
- (void)unlockConfigurations;
- (void)enableDefaultService;
- (BOOL)enableAlwaysOnVpn;
- (BOOL)updateDefaultAfterAddingConfiguration;
- (BOOL)updateDefaultAfterDeletingConfiguration;
- (id)copyManagedConfigurationIDs;
- (BOOL)updateAppLayerVPNMappingRules:(id)a0;
- (BOOL)updateManagedAppRules:(id)a0;
- (BOOL)updateAccountIdentifiers:(id)a0;
- (id)getCertificatesForConfigurationWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)initWithName:(id)a0;
- (id)initWithNameAndType:(id)a0 payloadType:(id)a1;
- (void)dealloc;
- (BOOL)removeConfigurationWithIdentifier:(id)a0;

@end
