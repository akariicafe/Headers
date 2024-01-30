@interface WBSFeatureAvailability : NSObject

+ (BOOL)_shouldShowChineseFeatures;
+ (BOOL)_shouldShowRussianFeatures;
+ (BOOL)isSearchProviderEnabled:(unsigned long long)a0;
+ (BOOL)supportsURLCredentialStorageAccessControlGroups;
+ (BOOL)wantsAggressiveKeychainCredentialCaching;

@end
