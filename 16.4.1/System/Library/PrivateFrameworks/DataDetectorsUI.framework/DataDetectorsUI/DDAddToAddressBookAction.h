@class DDRemoteActionViewController;

@interface DDAddToAddressBookAction : DDAddressAction

@property (retain, nonatomic) DDRemoteActionViewController *viewController;

+ (BOOL)isAvailable;
+ (BOOL)actionAvailableForContact:(id)a0;

- (id)contact;
- (int)interactionType;
- (id)localizedName;
- (id)notificationURL;
- (void)invalidate;
- (id)notificationTitle;
- (void)adaptForPresentationInPopover:(BOOL)a0;
- (id)compactTitle;
- (id)notificationIconBundleIdentifier;
- (void)prepareViewControllerForActionController:(id)a0;

@end
