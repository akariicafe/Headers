@interface VTSpeakerIdUtilities : NSObject

+ (id)timeStampWithSaltGrain;
+ (id)getSATDirectoryForLanguageCode:(id)a0;
+ (id)stringForVTSpIdType:(unsigned long long)a0;
+ (id)getSATDirectoryForModelType:(unsigned long long)a0 forLanguageCode:(id)a1;
+ (id)getSATAudioDirectoryForType:(unsigned long long)a0 forLanguageCode:(id)a1;
+ (id)getSATModelDirectoryForType:(unsigned long long)a0 forLanguageCode:(id)a1;
+ (id)createSATDirectoriesForType:(unsigned long long)a0 forLanguageCode:(id)a1;
+ (id)_getAssetHashFromConfigPath:(id)a0;
+ (id)getSpeakerModelPathForType:(unsigned long long)a0 withLanguageCode:(id)a1 withConfigPath:(id)a2 createDirectory:(BOOL)a3;
+ (id)getProfileVersionFilePathForLanguageCode:(id)a0;
+ (id)getExplicitEnrollmentUtterancesForType:(unsigned long long)a0 forLanguageCode:(id)a1;
+ (id)getSortedImplicitEnrollmentUtterancesForType:(unsigned long long)a0 forLanguageCode:(id)a1;
+ (id)getImplicitEnrollmentUtterancesPriorTo:(id)a0 forType:(unsigned long long)a1 forLanguageCode:(id)a2;
+ (id)getSortedEnrollmentUtterancesForType:(unsigned long long)a0 forLanguageCode:(id)a1;
+ (BOOL)deleteExistingSATModelForLanguageCode:(id)a0;

@end
