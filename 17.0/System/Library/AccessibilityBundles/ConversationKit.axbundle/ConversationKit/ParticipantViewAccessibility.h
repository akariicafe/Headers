@interface ParticipantViewAccessibility : __ParticipantViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityCustomActions;
- (id)_accessibilityUserTestingChildren;
- (BOOL)isAccessibilityElement;
- (BOOL)accessibilityElementsHidden;
- (id)accessibilityValue;
- (BOOL)_accessibilityIsLocalParticipantExpanded;
- (BOOL)_accessibilityIsLocalParticipantFullScreen;
- (id)_accessibilityMonogramView;
- (id)_accessibilityMultiwayViewController;
- (id)_accessibilityVideoOverlayView;
- (id)_accessibilityVideoView;
- (id)_axConstraintsController;
- (BOOL)_axHandleKickMemberAction;
- (BOOL)_axHandleSingleTap;
- (BOOL)_axHandleTakeLivePhotoAction;

@end
