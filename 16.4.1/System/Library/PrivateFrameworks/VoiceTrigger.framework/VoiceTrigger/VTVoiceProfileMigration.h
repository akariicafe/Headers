@interface VTVoiceProfileMigration : NSObject

+ (BOOL)checkIfMigrationNecessaryForCompatibilityVersion:(unsigned long long)a0 forLanguageCode:(id)a1;
+ (unsigned long long)getCurrentVoiceProfileVersionForLanguageCode:(id)a0;
+ (BOOL)migrateVoiceProfileToVersion:(unsigned long long)a0 forLanguageCode:(id)a1;
+ (void)updateVoiceProfileVersionFileForLanguageCode:(id)a0;

@end
