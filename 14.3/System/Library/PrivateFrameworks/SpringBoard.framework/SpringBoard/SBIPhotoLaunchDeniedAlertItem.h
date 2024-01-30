@interface SBIPhotoLaunchDeniedAlertItem : SBAlertItem

@property (nonatomic) BOOL offersMigration;

- (void)configure:(BOOL)a0 requirePasscodeForActions:(BOOL)a1;
- (BOOL)dismissOnLock;
- (BOOL)ignoreIfAlreadyDisplaying;

@end
