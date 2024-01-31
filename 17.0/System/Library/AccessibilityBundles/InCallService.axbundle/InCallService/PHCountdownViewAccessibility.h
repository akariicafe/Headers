@interface PHCountdownViewAccessibility : __PHCountdownViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void)pause;
- (void)dealloc;
- (void)stop;
- (void)startCountdown;
- (id)_axAnnouncementTimer;
- (void)_axSetAnnouncementTimer:(id)a0;

@end
