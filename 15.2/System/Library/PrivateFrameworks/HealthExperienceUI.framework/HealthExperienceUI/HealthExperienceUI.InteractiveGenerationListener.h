@interface HealthExperienceUI.InteractiveGenerationListener : NSObject {
    void /* unknown type, empty encoding */ $__lazy_storage_$_queue;
    void /* unknown type, empty encoding */ healthAppLaunchNotifier;
}

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)didBecomeActiveWithNote:(id)a0;
- (void)willResignActiveWithNote:(id)a0;
- (void)generationRequestNotificationWithNote:(id)a0;
- (void)cancelInteractiveGenerationRequestNotificationWithNote:(id)a0;
- (void)majorInteractionNotificationReceivedWithNote:(id)a0;

@end
