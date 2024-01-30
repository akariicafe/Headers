@interface DDDirectionsAction : DDAction

+ (BOOL)actionAvailableForContact:(id)a0;
+ (BOOL)actionAvailableForCachedEvent:(id)a0;

- (id)icon;
- (id)localizedName;
- (id)notificationTitle;
- (void)performFromView:(id)a0;
- (BOOL)canBePerformedByOpeningURL;
- (id)notificationIconBundleIdentifier;
- (id)notificationURL;

@end
