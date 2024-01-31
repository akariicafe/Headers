@interface ARQuickLookOverlayControllerAccessibility : __ARQuickLookOverlayControllerAccessibility_super

@property (readonly, nonatomic) BOOL axShouldDisableAutoHidingControls;

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void)_accessibilityLoadAccessibilityInformation;
- (void)enableWorldModeControl:(BOOL)a0;
- (void)startAutoHideControlsTimer;
- (void)updateStatusPill;
- (void)_axSpeakUpdateToStatusPill;
- (void)axUpdateAutoHideControlsTimer;

@end
