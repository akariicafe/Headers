@interface HealthExperienceUI.SummarySharingInvitationEnableUpdatesViewController : HealthExperienceUI.OnboardingViewControllerWithNextButton {
    void /* unknown type, empty encoding */ healthStore;
    void /* unknown type, empty encoding */ sharingEntryStore;
    void /* unknown type, empty encoding */ profileInformation;
    void /* unknown type, empty encoding */ notificationAuthorizationStatus;
    void /* unknown type, empty encoding */ healthAppNotificationManager;
    void /* unknown type, empty encoding */ notificationSettingsManager;
    void /* unknown type, empty encoding */ selectedContactPhotoPublisher;
    void /* unknown type, empty encoding */ notificationAuthorizationCancellable;
    void /* unknown type, empty encoding */ $__lazy_storage_$_disableUpdatesButton;
}

- (void).cxx_destruct;
- (void)disableButtonTapped:(id)a0;
- (void)fetchNotificationAuthorizationStatus;
- (void)nextButtonTapped:(id)a0;

@end
