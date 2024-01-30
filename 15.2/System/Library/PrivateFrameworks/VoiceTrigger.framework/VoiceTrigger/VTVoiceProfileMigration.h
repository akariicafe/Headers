@interface VTVoiceProfileMigration : NSObject

+ (unsigned long long)getCurrentVoiceProfileVersionForLanguageCode:(id)a0;
+ (void)updateVoiceProfileVersionFileForLanguageCode:(id)a0;
+ (BOOL)checkIfMigrationNecessaryForCompatibilityVersion:(unsigned long long)a0 forLanguageCode:(id)a1;
+ (BOOL)migrateVoiceProfileToVersion:(unsigned long long)a0 forLanguageCode:(id)a1;

@end
