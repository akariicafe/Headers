@class NSString;

@interface DDTextMessageAction : DDTelephoneNumberAction <MFMessageComposeViewControllerDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)icon;
- (void)messageComposeViewController:(id)a0 didFinishWithResult:(long long)a1;
- (id)localizedName;
- (id)viewController;
- (int)interactionType;
- (id)notificationTitle;
- (void)performFromView:(id)a0;
- (BOOL)canBePerformedByOpeningURL;
- (id)notificationIconBundleIdentifier;
- (id)notificationURL;
- (BOOL)prefersOpenToCreate;

@end
