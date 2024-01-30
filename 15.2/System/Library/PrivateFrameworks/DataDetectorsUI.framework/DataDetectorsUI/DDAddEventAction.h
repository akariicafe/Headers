@class DDRemoteActionViewController;

@interface DDAddEventAction : DDAction

@property (retain, nonatomic) DDRemoteActionViewController *viewController;

+ (id)cachedEventForICSString:(id)a0;
+ (BOOL)actionAvailableForEvent:(id)a0;

- (id)localizedName;
- (id)notificationURL;
- (void).cxx_destruct;
- (void)invalidate;
- (id)notificationTitle;
- (int)interactionType;
- (id)iconName;
- (id)compactTitle;
- (void)prepareViewControllerForActionController:(id)a0;
- (id)variantIconName;
- (id)notificationIconBundleIdentifier;

@end
