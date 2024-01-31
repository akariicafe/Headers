@interface BKUIPearlPillContainerViewAccessibility : __BKUIPearlPillContainerViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (void)didMoveToWindow;
- (id)accessibilityValue;
- (id)_accessibilityScrollStatus;
- (void)animateToState:(int)a0 completion:(id /* block */)a1;
- (BOOL)fillPillsAroundAngle:(double)a0;
- (void)_axProvideNudge;
- (void)_accessibilitySetPearlEnrollViewController:(id)a0;
- (id)_accessibilityUnfilledDirections;
- (id)_axAnglesToCheck;
- (long long)_axCurrentNudgeCount;
- (id)_axCurrentNudgeDirection;
- (id)_axDirectionForSection:(long long)a0;
- (id)_axImpactFeedbackGenerator;
- (id)_axLabelKeysForDirection;
- (id)_axLookKeysForDirection;
- (id)_axNudgeTimer;
- (id)_axPearlEnrollControllerShell;
- (void)_axResetTimer;
- (long long)_axSectionForAngle:(double)a0;
- (id)_axSpokenDirections;
- (void)_axStartTimer;
- (void)_axStopTimer;
- (id)_axUnfilledDirections;
- (void)_setAXCurrentNudgeCount:(long long)a0;
- (void)_setAXCurrentNudgeDirection:(id)a0;
- (void)_setAXImpactFeedbackGenerator:(id)a0;
- (void)_setAXNudgeTimer:(id)a0;
- (void)_setAXPearlEnrollControllerShell:(id)a0;
- (void)_setAXSpokenDirections:(id)a0;
- (void)_setAXUnfilledDirections:(id)a0;

@end
