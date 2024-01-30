@class LSAppLink;

@interface DDOpenURLAction : DDAction {
    LSAppLink *_appLink;
    BOOL _appLinkInitDone;
}

- (id)localizedName;
- (id)appLink;
- (id)notificationURL;
- (void).cxx_destruct;
- (id)iconName;
- (id)compactTitle;
- (void)performFromView:(id)a0;
- (BOOL)canBePerformedWhenDeviceIsLocked;
- (BOOL)canBePerformedByOpeningURL;
- (id)companionAction;
- (id)notificationIconBundleIdentifier;
- (BOOL)shouldOpenInApp;
- (BOOL)shouldOpenInSafari;

@end
