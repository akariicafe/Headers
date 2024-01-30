@class NSUserDefaults;

@interface FBKSharedConstants : NSObject

@property (class, readonly, nonatomic) BOOL isTeamsEnabled;
@property (class, readonly, nonatomic) NSUserDefaults *sharedUserDefaults;

+ (void)initialize;
+ (id)modelName;
+ (id)productVersion;
+ (short)environment;
+ (long long)platform;
+ (BOOL)isProductionEnvironment;
+ (void)recordCurrentLanguagePreference;
+ (id)swTrain;
+ (id)publicPortalURL;
+ (void)_deriveSystemVersion;
+ (id)_localizedAttachmentLegalTextKeyForDraftID:(id)a0;
+ (id)appleSeedURL;
+ (id)appleSeedURLFromDefaults:(id)a0 withEnvironment:(short)a1;
+ (BOOL)currentIDMSEnvironmentMatchesCurrentFBKEnvironment;
+ (long long)currentLegalVersion;
+ (id)darkModeCSS;
+ (void)deleteAttachmentLegalTextForDraftID:(id)a0;
+ (void)deleteStaleAttachmentLegalTextEntries;
+ (id)developerURL;
+ (BOOL)hasDifferentLanguageSinceLastLaunch;
+ (BOOL)isEnhancedLoggingEnabled;
+ (BOOL)isRunningInFBA;
+ (id)localizedAttachmentLegalTextForDraftID:(id)a0;
+ (void)overrideEnvironment:(short)a0 host:(id)a1;
+ (id)publicBetaURL;
+ (void)saveLocalizedAttachmentLegalText:(id)a0 draftID:(id)a1;
+ (id)seedPortalURL;
+ (id)swVers;
+ (BOOL)tracksFileUploadsLocally;
+ (BOOL)usesPersistentStore;
+ (BOOL)usesTemporaryDraftsDirectory;

@end
