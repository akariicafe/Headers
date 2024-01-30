@class NSString;

@interface DDTextMessageAction : DDTelephoneNumberAction <MFMessageComposeViewControllerDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)localizedName;
- (id)subtitle;
- (id)notificationURL;
- (id)viewController;
- (id)notificationTitle;
- (int)interactionType;
- (void)messageComposeViewController:(id)a0 didFinishWithResult:(long long)a1;
- (id)iconName;
- (void)performFromView:(id)a0;
- (BOOL)canBePerformedByOpeningURL;
- (id)notificationIconBundleIdentifier;
- (BOOL)prefersOpenToCreate;

@end
