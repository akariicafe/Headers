@interface CIDVRGBCaptureSelfieVCAccessibility : __CIDVRGBCaptureSelfieVCAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void)viewWillAppear:(BOOL)a0;
- (void)_performSelfieCapture;
- (void)_presentCoachingForGesture:(long long)a0 completion:(id /* block */)a1;
- (void)_presentCoachingSuccess:(id /* block */)a0;
- (void)_presentSkipGestureAlert;
- (void)_restartSelfieCapture;
- (void)_setCoachingPromptText:(id)a0;
- (void)_setCoachingPromptTextForGesture:(long long)a0;
- (void)_showAXOptions;
- (void)captureSelfieDidObtainImageQualityError:(id)a0;
- (void)_axHandleAnnouncementMachine:(id)a0 polite:(BOOL)a1 moveToView:(BOOL)a2;
- (void)_axHandleCoachingAnnouncement;
- (void)_axHandleNonInterruptableCoachingAnnouncement;

@end
