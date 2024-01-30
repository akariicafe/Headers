@class NSDictionary, AXAssetsService;

@interface TTSAXResourceMigrationUtilities : NSObject

@property (retain, nonatomic) AXAssetsService *assetsService;
@property (nonatomic) BOOL isMigrationComplete;
@property (retain, nonatomic) NSDictionary *obsoleteVoicesWithReplacements;

+ (id)sharedInstance;

- (id)convertIdentifierIfNeeded:(id)a0;
- (id)updatedIdentifierForLegacyIdentifier:(id)a0 withLanguageCode:(id)a1;
- (id)_readIsMigrationCompleteFromPreferences;
- (id)legacyIdentifierForUpdatedIdentifierDuringMigration:(id)a0;
- (void)restartMigrationIfNeeded;
- (void)resourceCompletedMigration:(id)a0;
- (id)_remapGenderedSiriVoiceIdentifiers:(id)a0;
- (id)_readVoiceIdentifiersToMigrateFromPreferences;
- (void)deleteCompactResourceIfNeededForIdentifier:(id)a0;
- (void)downloadCompactResourceIfNeededForIdentifier:(id)a0;
- (id)init;
- (BOOL)resourceNeedsMigration:(id)a0;
- (void)writeIsMigrationCompleteToPreferences:(id)a0;
- (void)writeVoiceIdentifiersToMigrateToPreferences:(id)a0;
- (void).cxx_destruct;

@end
