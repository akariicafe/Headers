@class NSDictionary;

@interface SDSeedProgramManager : NSObject

@property (class, readonly, nonatomic) NSDictionary *currentEnrollmentMetadata;
@property (class, readonly, nonatomic) BOOL canFileFeedback;

+ (long long)currentSeedProgram;
+ (void)enrollInSeedProgramNamed:(id)a0 withAssetAudience:(id)a1 completion:(id /* block */)a2;
+ (long long)_seedProgramForString:(id)a0;
+ (long long)_currentSeedProgramFromDisk;
+ (BOOL)_currentCatalogIsSeed;
+ (BOOL)_currentAudienceIsSeed;
+ (BOOL)_canEnrollInBetaSoftware;
+ (id)stringForSeedProgram:(long long)a0;
+ (void)_setSeedProgramPref:(long long)a0;
+ (BOOL)_setCatalogForSeedProgram:(long long)a0;
+ (BOOL)_setAudienceForSeedProgram:(long long)a0;
+ (void)_setHelpFeedbackMenuEnabled:(BOOL)a0;
+ (void)_setSeedOptOutUIDisabled:(BOOL)a0;
+ (void)_createFeedbackAssistantSymlink;
+ (BOOL)enrollInSeedProgram:(long long)a0 deletingSystemURL:(BOOL)a1;
+ (void)_clearSeedCatalog;
+ (void)_clearAudience;
+ (id)_loadSeedCatalogsFromPlist;
+ (id)_loadSeedAudiencesFromPlist;
+ (BOOL)isEnrolledInSeedProgram;
+ (long long)currentSeedProgramForDiskAtPath:(id)a0;
+ (BOOL)enrollInSeedProgram:(long long)a0;
+ (BOOL)unenrollFromSeedProgram;
+ (BOOL)fixUpAssetAudience;

@end
