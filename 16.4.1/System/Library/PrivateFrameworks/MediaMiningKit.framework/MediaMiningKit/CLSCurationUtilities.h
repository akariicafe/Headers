@interface CLSCurationUtilities : NSObject

+ (BOOL)isBlocklistedImportedByBundleIdentifier:(id)a0;
+ (id)blockedImportedByBundleIdentifiers;
+ (id)importedByBundleIdentifiersForBlockedForMemories;
+ (BOOL)isBlockedForMemoriesWithImportedByBundleIdentifier:(id)a0;
+ (BOOL)isRiskyFileFormatWithAsset:(id)a0;

@end
