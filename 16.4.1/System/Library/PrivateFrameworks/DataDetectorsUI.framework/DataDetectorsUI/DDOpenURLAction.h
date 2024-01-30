@class LSAppLink;

@interface DDOpenURLAction : DDAction {
    LSAppLink *_appLink;
    BOOL _appLinkInitDone;
}

- (id)localizedName;
- (id)notificationURL;
- (id)iconName;
- (void).cxx_destruct;
- (id)appLink;
- (id)companionAction;
- (BOOL)shouldOpenInApp;
- (BOOL)canBePerformedByOpeningURL;
- (BOOL)canBePerformedWhenDeviceIsLocked;
- (id)compactTitle;
- (id)notificationIconBundleIdentifier;
- (void)performFromView:(id)a0;
- (id)quickActionTitle;
- (BOOL)shouldOpenInSafari;

@end
