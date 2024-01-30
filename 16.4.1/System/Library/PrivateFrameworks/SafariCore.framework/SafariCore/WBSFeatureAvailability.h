@interface WBSFeatureAvailability : NSObject

@property (class, readonly, nonatomic) BOOL isInternalInstall;
@property (class, readonly, nonatomic) BOOL isCustomizationSyncEnabled;
@property (class, readonly, nonatomic) BOOL isPerSiteSettingSyncEnabled;
@property (class, readonly, nonatomic) BOOL isStartPageSettingSyncEnabled;
@property (class, readonly, nonatomic) BOOL isResponsiveCompletionListEnabled;
@property (class, readonly, nonatomic) BOOL isMoreSearchProviderSuggestionsEnabled;
@property (class, readonly, nonatomic) BOOL isStreamlinedCompletionListEnabled;
@property (class, readonly, nonatomic) BOOL isReflectUserIntentInSearchEnabled;
@property (class, readonly, nonatomic) BOOL isDuckDuckGoDefaultSearchEngine;

+ (BOOL)_shouldShowRussianFeatures;
+ (BOOL)wantsAggressiveKeychainCredentialCaching;
+ (BOOL)isSearchProviderEnabled:(unsigned long long)a0;
+ (BOOL)supportsURLCredentialStorageAccessControlGroups;
+ (BOOL)_shouldShowChineseFeatures;

@end
