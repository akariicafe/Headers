@interface VTUIEnrollTrainingViewControllerAccessibility : __VTUIEnrollTrainingViewControllerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void)dealloc;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)_continueToTrainingFromIntro;
- (void)_setLanguageOptionsAndContinue;
- (void)_setupEnrollTrainingView;
- (void)_showEducationView;
- (void)_showEnrollmentSuccessView;
- (void)_showIntroView;
- (void)_showSiriDataSharingOptIn;
- (void)_showStatusMessage:(id)a0 afterDelay:(double)a1 completion:(id /* block */)a2;
- (void)_showTrainingInstruction:(long long)a0 afterDelay:(double)a1 isRetry:(BOOL)a2 animate:(BOOL)a3;
- (void)_showVoiceSelectionViewForRecognitionLanguage:(id)a0;
- (void)_startEnrollment;
- (id /* block */)_axShowTrainingInstructionBlock;
- (id)AXSuspendAudioTimer;
- (void)_accessibilitySetAccessibilityElementsIfNeeded;
- (void)_accessibilitySuperShowTrainingInstruction:(long long)a0 afterDelay:(double)a1 isRetry:(BOOL)a2 animate:(BOOL)a3;
- (void)_axAnnounceInstructionWithNumber:(long long)a0;
- (void)_axAnnounceString:(id)a0;
- (void)_axHandleAnnouncementDidFinishNotification:(id)a0;
- (void)_axHandleElementFocusedNotification:(id)a0;
- (void)_axHandleSuspendAudioTimerFired:(id)a0;
- (void)_axHandleVoiceOverStatusChangedNotification:(id)a0;
- (void)_axSetShowTrainingInstructionBlock:(id /* block */)a0;
- (void)_axSuspendAudio:(BOOL)a0;
- (void)setAXSuspendAudioTimer:(id)a0;

@end
