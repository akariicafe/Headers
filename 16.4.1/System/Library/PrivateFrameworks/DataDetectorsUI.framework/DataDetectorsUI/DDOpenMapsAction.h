@interface DDOpenMapsAction : DDAction

+ (BOOL)actionAvailableForCachedEvent:(id)a0;
+ (BOOL)actionAvailableForContact:(id)a0;

- (id)localizedName;
- (id)notificationURL;
- (id)iconName;
- (id)notificationTitle;
- (id)variantIconName;
- (BOOL)canBePerformedByOpeningURL;
- (id)compactTitle;
- (id)notificationIconBundleIdentifier;
- (void)performFromView:(id)a0;

@end
