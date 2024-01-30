@class TSAApplicationPropertiesProvider, NSArray, TSADocumentRoot;
@protocol TSADownloadDelegate;

@interface TSABaseApplicationDelegate : TSWPApplicationDelegate

@property (class, readonly, nonatomic) TSABaseApplicationDelegate *sharedDelegate;
@property (class, readonly, nonatomic) TSAApplicationPropertiesProvider *tsa_sharedPropertiesProvider;

@property (weak, nonatomic) TSADocumentRoot *documentRoot;
@property (readonly, nonatomic) double mimimumAspectRatioForPreviewImage;
@property (readonly, nonatomic) double maximumAspectRatioForPreviewImage;
@property (retain, nonatomic) id<TSADownloadDelegate> downloadDelegate;
@property (readonly, nonatomic) NSArray *iWorkAuthorPrivateIDs;
@property (readonly, nonatomic) BOOL hasIWorkAuthorName;

+ (void)resetSharedConfigurations;

- (void)ubiquitousKeyValueStoreDidChange:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)registerDefaults;
- (void)persistenceError:(id)a0;
- (id)existingNestedDocumentPathForPath:(id)a0;
- (void)registerSOSClassTypeMappings;
- (void)registerDrawableInfoClassMapping;
- (id)documentPreferenceKeyPrefix;
- (void)setIWorkAuthorName:(id)a0;
- (void)setIWorkAuthorColorIndex:(unsigned long long)a0;
- (id)iWorkAuthorName;
- (id)iCloudPreferencesForKvsDocumentKey:(id)a0;
- (unsigned long long)iWorkAuthorColorIndex;
- (id)iCloudPreferenceKeys;
- (BOOL)isValidIWorkAuthorColorIndex:(unsigned long long)a0;
- (BOOL)isICloudDocumentPreference:(id)a0 validForKey:(id)a1;
- (id)iCloudDocumentPreferenceKeyForKvsDocumentKey:(id)a0 isMatchingKey:(BOOL *)a1;
- (id)validICloudPreferencesForPreferences:(id)a0 invalidKeys:(id *)a1;
- (BOOL)openURL:(id)a0 displayAlertOnError:(BOOL)a1;
- (void)registerICloudPreferences;
- (void)clearICloudDocumentPreferences;
- (void)clearIWorkAuthorName;
- (void)clearIWorkAuthorColorIndex;
- (id)collaboratorNameForDocumentInfo:(id)a0 firstName:(id *)a1 lastName:(id *)a2;
- (unsigned long long)collaboratorColorIndexForKvsDocumentKey:(id)a0;
- (void)setICloudPreferences:(id)a0 forKvsDocumentKey:(id)a1;
- (void)setApplicationBadgeCount:(unsigned long long)a0 forCategory:(id)a1;
- (BOOL)hasApplicationBadgeCount;
- (void)clearIWorkAuthorPrivateID;
- (id)iWorkAuthorPrivateID;
- (void)setIWorkAuthorPrivateID:(id)a0;

@end
