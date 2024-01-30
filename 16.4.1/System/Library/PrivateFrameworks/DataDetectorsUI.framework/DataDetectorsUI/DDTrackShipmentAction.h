@interface DDTrackShipmentAction : DDAction

- (id)localizedName;
- (id)notificationURL;
- (id)iconName;
- (id)notificationTitle;
- (BOOL)canBePerformedByOpeningURL;
- (id)notificationIconBundleIdentifier;
- (void)performFromView:(id)a0;
- (id)quickActionTitle;

@end
