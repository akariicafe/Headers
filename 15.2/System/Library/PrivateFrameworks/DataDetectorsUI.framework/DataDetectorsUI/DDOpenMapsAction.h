@interface DDOpenMapsAction : DDAction

+ (BOOL)actionAvailableForContact:(id)a0;
+ (BOOL)actionAvailableForCachedEvent:(id)a0;

- (id)localizedName;
- (id)notificationURL;
- (id)notificationTitle;
- (id)iconName;
- (id)compactTitle;
- (void)performFromView:(id)a0;
- (BOOL)canBePerformedByOpeningURL;
- (id)variantIconName;
- (id)notificationIconBundleIdentifier;

@end
