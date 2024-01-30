@interface WBSFeatureAvailability : NSObject

@property (class, readonly, nonatomic) BOOL isCustomizationSyncEnabled;
@property (class, readonly, nonatomic) BOOL isTabGroupSyncEnabled;
@property (class, readonly, nonatomic) BOOL isTabDatabaseEnabled;
@property (class, readonly, nonatomic) BOOL isLiveTextEnabled;

+ (BOOL)_shouldShowChineseFeatures;
+ (BOOL)_shouldShowRussianFeatures;
+ (BOOL)isSearchProviderEnabled:(unsigned long long)a0;
+ (BOOL)supportsURLCredentialStorageAccessControlGroups;
+ (BOOL)wantsAggressiveKeychainCredentialCaching;

@end
