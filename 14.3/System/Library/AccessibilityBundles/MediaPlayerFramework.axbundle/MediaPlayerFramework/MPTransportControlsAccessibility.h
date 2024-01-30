@interface MPTransportControlsAccessibility : __MPTransportControlsAccessibility_super

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;

- (void)_playbackStateChangedNotification:(id)a0;
- (void)_reloadViewWithAnimation:(BOOL)a0;
- (void)_accessibilityLoadAccessibilityInformation;
- (BOOL)accessibilityViewIsModal;
- (void)_accessibilityApplyIDsToTransformButtons;

@end
