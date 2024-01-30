@class DDRemoteActionViewController;

@interface DDAddToAddressBookAction : DDAddressAction

@property (retain, nonatomic) DDRemoteActionViewController *viewController;

+ (BOOL)actionAvailableForContact:(id)a0;

- (id)contact;
- (id)localizedName;
- (int)interactionType;
- (id)notificationTitle;
- (void)invalidate;
- (void)prepareViewControllerForActionController:(id)a0;
- (void)adaptForPresentationInPopover:(BOOL)a0;
- (id)notificationIconBundleIdentifier;
- (id)notificationURL;

@end
