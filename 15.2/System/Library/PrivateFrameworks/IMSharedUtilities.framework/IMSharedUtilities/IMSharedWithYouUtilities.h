@interface IMSharedWithYouUtilities : NSObject

+ (id)defaultAppBundleIDs;
+ (BOOL)isSharedWithYouEnabled;
+ (void)updateSharedWithYouEnabledForApp:(id)a0 to:(BOOL)a1;
+ (void)updateSharedWithYouEnabledTo:(BOOL)a0;

@end
