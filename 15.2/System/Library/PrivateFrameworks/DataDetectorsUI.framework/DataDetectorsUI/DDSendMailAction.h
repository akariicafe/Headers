@class NSString;

@interface DDSendMailAction : DDAction <MFMailComposeViewControllerDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)localizedName;
- (id)notificationURL;
- (id)notificationTitle;
- (int)interactionType;
- (id)iconName;
- (id)compactTitle;
- (id)initWithURL:(id)a0 result:(struct __DDResult { } *)a1 context:(id)a2;
- (void)performFromView:(id)a0;
- (BOOL)canBePerformedByOpeningURL;
- (id)notificationIconBundleIdentifier;

@end
