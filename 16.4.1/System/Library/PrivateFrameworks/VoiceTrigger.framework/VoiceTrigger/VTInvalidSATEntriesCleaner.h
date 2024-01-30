@interface VTInvalidSATEntriesCleaner : NSObject

+ (id)cleanupInvalidSATEntriesAtSATRoot:(id)a0 payloadUtteranceLifeTimeInDays:(long long)a1 dryRun:(BOOL)a2;
+ (id)cleanupOrphanedMetafilesAtURL:(id)a0 dryRun:(BOOL)a1;
+ (id)cleanupOrphanedMetafilesForLanguage:(id)a0 payloadUtteranceLifeTimeInDays:(long long)a1 dryRun:(BOOL)a2;
+ (id)cleanupPayloadUtterancesExceedingLifeTimeInDays:(long long)a0 forType:(unsigned long long)a1 forLanguageCode:(id)a2 dryRun:(BOOL)a3;

@end
