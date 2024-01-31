@interface NCNotificationViewControllerAccessibility : __NCNotificationViewControllerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void)dismissViewControllerWithTransition:(int)a0 completion:(id /* block */)a1;
- (void)viewDidAppear:(BOOL)a0;
- (BOOL)_accessibilityShouldPostScreenChangedOnPresentation;
- (BOOL)_accessibilityAppearanceAnnouncementHandledByEnclosingEntity;
- (id)_axLongLookView;
- (void)_axAnnounceNotification;
- (void)_axHandleAnnouncementFinished;
- (BOOL)_axHasFinishedAnnouncement;
- (BOOL)_axHasSentAnnouncement;
- (void)_axNotifyDidEndUserInteraction;
- (void)_axNotifyWillBeginUserInteraction:(BOOL)a0;
- (void)_axSetHasFinishedAnnouncement:(BOOL)a0;
- (void)_axSetHasSentAnnouncement:(BOOL)a0;
- (void)_logNotificationMessage:(id)a0;

@end
