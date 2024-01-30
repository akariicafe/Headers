@class NSString, DDRemoteActionViewController;

@interface DDCreateEventAction : DDAction <EKEventEditViewDelegate>

@property (retain, nonatomic) DDRemoteActionViewController *viewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)actionAvailableForEvent:(id)a0;

- (void).cxx_destruct;
- (id)icon;
- (id)localizedName;
- (int)interactionType;
- (id)notificationTitle;
- (void)eventEditViewController:(id)a0 didCompleteWithAction:(long long)a1;
- (void)invalidate;
- (void)prepareViewControllerForActionController:(id)a0;
- (id)notificationIconBundleIdentifier;
- (id)notificationURL;

@end
