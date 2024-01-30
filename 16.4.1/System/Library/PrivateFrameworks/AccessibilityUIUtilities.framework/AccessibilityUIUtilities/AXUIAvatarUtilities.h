@interface AXUIAvatarUtilities : NSObject

+ (id)_axStringForPresetCategory:(long long)a0;
+ (BOOL)_shouldSkipPresetCategory:(long long)a0;
+ (BOOL)avatarFrameworksArePresent;
+ (id)customContentForAvatarWithRecord:(id)a0;
+ (id)customContentForMemoji:(id)a0;
+ (id)descriptionForAnimoji:(id)a0;
+ (id)descriptionForAvatarWithRecord:(id)a0 includeVideoPrefix:(BOOL)a1;
+ (id)descriptionForMemoji:(id)a0;
+ (void)performValidations;

@end
