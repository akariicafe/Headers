@interface AXUIAvatarUtilities : NSObject

+ (BOOL)avatarFrameworksArePresent;
+ (id)descriptionForMemoji:(id)a0;
+ (id)descriptionForAnimoji:(id)a0;
+ (id)customContentForMemoji:(id)a0;
+ (BOOL)_shouldSkipPresetCategory:(long long)a0;
+ (id)_axStringForPresetCategory:(long long)a0;
+ (void)performValidations;
+ (id)descriptionForAvatarWithRecord:(id)a0 includeVideoPrefix:(BOOL)a1;
+ (id)customContentForAvatarWithRecord:(id)a0;

@end
