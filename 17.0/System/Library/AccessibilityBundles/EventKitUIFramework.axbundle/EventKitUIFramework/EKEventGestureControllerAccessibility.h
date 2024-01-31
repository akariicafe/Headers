@interface EKEventGestureControllerAccessibility : __EKEventGestureControllerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void)_commit;
- (void)_update;
- (id)_createTemporaryView:(id)a0 animated:(BOOL)a1;
- (void)_longPress:(id)a0;
- (void)_speakNotificationIfNecessary:(id)a0 shouldSpeakWithoutInterruption:(BOOL)a1 shouldSpeakOnlyIfNotSpeaking:(BOOL)a2;

@end
