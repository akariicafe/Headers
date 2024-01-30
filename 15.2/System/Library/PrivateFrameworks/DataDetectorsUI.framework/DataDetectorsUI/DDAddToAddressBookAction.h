@class DDRemoteActionViewController;

@interface DDAddToAddressBookAction : DDAddressAction

@property (retain, nonatomic) DDRemoteActionViewController *viewController;

+ (BOOL)actionAvailableForContact:(id)a0;

- (id)localizedName;
- (id)contact;
- (id)notificationURL;
- (void)invalidate;
- (id)notificationTitle;
- (int)interactionType;
- (id)compactTitle;
- (void)prepareViewControllerForActionController:(id)a0;
- (void)adaptForPresentationInPopover:(BOOL)a0;
- (id)notificationIconBundleIdentifier;

@end
