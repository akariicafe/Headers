@class NSDictionary;

@interface SDSeedProgramManager : NSObject

@property (class, readonly, nonatomic) NSDictionary *currentEnrollmentMetadata;
@property (class, readonly, nonatomic) BOOL canFileFeedback;

+ (BOOL)unenrollFromSeedProgram;
+ (BOOL)_setCatalogForSeedProgram:(long long)a0;
+ (void)_clearAudience;
+ (void)_setHelpFeedbackMenuEnabled:(BOOL)a0;
+ (id)_loadSeedAudiencesFromPlist;
+ (void)_createFeedbackAssistantSymlink;
+ (BOOL)fixUpAssetAudience;
+ (BOOL)_currentCatalogIsSeed;
+ (long long)currentSeedProgramForDiskAtPath:(id)a0;
+ (id)_loadSeedCatalogsFromPlist;
+ (id)stringForSeedProgram:(long long)a0;
+ (BOOL)_canEnrollInBetaSoftware;
+ (long long)_currentSeedProgramFromDisk;
+ (BOOL)enrollInSeedProgram:(long long)a0 deletingSystemURL:(BOOL)a1;
+ (BOOL)enrollInSeedProgram:(long long)a0;
+ (long long)currentSeedProgram;
+ (void)_setSeedProgramPref:(long long)a0;
+ (BOOL)isEnrolledInSeedProgram;
+ (long long)_seedProgramForString:(id)a0;
+ (void)_clearSeedCatalog;
+ (BOOL)_currentAudienceIsSeed;
+ (void)enrollInSeedProgramNamed:(id)a0 withAssetAudience:(id)a1 completion:(id /* block */)a2;
+ (BOOL)_setAudienceForSeedProgram:(long long)a0;
+ (void)_setSeedOptOutUIDisabled:(BOOL)a0;

@end
