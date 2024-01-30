@interface SDProfileUtilities : NSObject

+ (void)forceRemoveSeedingProfile;
+ (id)getAssetAudienceIDForInstalledProfile:(id *)a0;
+ (void)installProfileWithData:(id)a0 error:(id *)a1;
+ (BOOL)isProfileInstallationAllowed;
+ (BOOL)removeSeedingProfile;

@end
