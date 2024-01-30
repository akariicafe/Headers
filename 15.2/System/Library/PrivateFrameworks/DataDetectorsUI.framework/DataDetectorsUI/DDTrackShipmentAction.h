@interface DDTrackShipmentAction : DDAction

- (id)localizedName;
- (id)notificationURL;
- (id)notificationTitle;
- (id)iconName;
- (void)performFromView:(id)a0;
- (BOOL)canBePerformedByOpeningURL;
- (id)notificationIconBundleIdentifier;

@end
