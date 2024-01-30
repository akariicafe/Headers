@class NSString;

@interface DDSendMailAction : DDAction <MFMailComposeViewControllerDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)matchingScheme;

- (int)interactionType;
- (id)localizedName;
- (id)notificationURL;
- (id)iconName;
- (id)notificationTitle;
- (BOOL)canBePerformedByOpeningURL;
- (id)compactTitle;
- (id)notificationIconBundleIdentifier;
- (void)performFromView:(id)a0;

@end
