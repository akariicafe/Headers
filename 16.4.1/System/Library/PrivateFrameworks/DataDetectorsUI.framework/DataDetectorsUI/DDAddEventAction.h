@class DDRemoteActionViewController;

@interface DDAddEventAction : DDAction

@property (retain, nonatomic) DDRemoteActionViewController *viewController;

+ (BOOL)isAvailable;
+ (BOOL)actionAvailableForEvent:(id)a0;
+ (id)cachedEventForICSString:(id)a0;

- (int)interactionType;
- (id)localizedName;
- (id)notificationURL;
- (void)invalidate;
- (id)iconName;
- (void).cxx_destruct;
- (id)notificationTitle;
- (id)variantIconName;
- (id)compactTitle;
- (id)notificationIconBundleIdentifier;
- (void)prepareViewControllerForActionController:(id)a0;
- (id)quickActionTitle;

@end
