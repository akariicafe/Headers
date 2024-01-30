@class LSAppLink;

@interface DDOpenURLAction : DDAction {
    LSAppLink *_appLink;
    BOOL _appLinkInitDone;
}

- (id)appLink;
- (void).cxx_destruct;
- (id)icon;
- (id)localizedName;
- (void)performFromView:(id)a0;
- (BOOL)canBePerformedByOpeningURL;
- (id)companionAction;
- (id)notificationIconBundleIdentifier;
- (id)notificationURL;
- (BOOL)shouldOpenInApp;
- (BOOL)shouldOpenInSafari;

@end
