@interface CLSCurationUtilities : NSObject

+ (id)blockedCreatorBundleIDs;
+ (BOOL)isBlocklistedCreatorBundleID:(id)a0;
+ (BOOL)isRiskyFileFormatWithAsset:(id)a0;

@end
