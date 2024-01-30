@class DDRemoteActionViewController;

@interface DDAddEventAction : DDAction

@property (retain, nonatomic) DDRemoteActionViewController *viewController;

+ (id)cachedEventForICSString:(id)a0;
+ (BOOL)actionAvailableForEvent:(id)a0;

- (void).cxx_destruct;
- (id)icon;
- (id)localizedName;
- (int)interactionType;
- (id)notificationTitle;
- (void)invalidate;
- (void)prepareViewControllerForActionController:(id)a0;
- (id)notificationIconBundleIdentifier;
- (id)notificationURL;

@end
