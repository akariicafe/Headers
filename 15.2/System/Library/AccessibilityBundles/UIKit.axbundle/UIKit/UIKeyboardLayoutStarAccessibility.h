@interface UIKeyboardLayoutStarAccessibility : __UIKeyboardLayoutStarAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (void)showPopupView:(long long)a0 withKey:(id)a1 popupInfo:(id)a2 force:(BOOL)a3;
- (void)touchDragged:(id)a0 executionContext:(id)a1;
- (void)setState:(int)a0 forKey:(id)a1;
- (void)didBeginContinuousPath;
- (void)setKeyplaneName:(id)a0;
- (unsigned long long)accessibilityTraits;
- (id)_accessibilityUserTestingChildren;
- (void)continueFromInternationalActionForTouchUp:(id)a0 withActions:(unsigned long long)a1 timestamp:(double)a2 interval:(double)a3 didLongPress:(BOOL)a4 prevActions:(unsigned long long)a5 executionContext:(id)a6;
- (id)_accessibilityFocusContainers:(BOOL)a0;
- (BOOL)canProduceString:(id)a0;
- (void)setLabel:(id)a0 forKey:(id)a1;
- (BOOL)accessibilityPerformEscape;
- (long long)accessibilityElementCount;
- (void)touchDown:(id)a0 executionContext:(id)a1;
- (BOOL)isAccessibilityElement;
- (void)addContinuousPathPoint:(struct CGPoint { double x0; double x1; })a0 withTimestamp:(double)a1;
- (long long)accessibilityNavigationStyle;
- (BOOL)accessibilityElementsHidden;
- (id)accessibilityElementAtIndex:(long long)a0;
- (long long)indexOfAccessibilityElement:(id)a0;
- (void)setActiveKey:(id)a0;
- (void)dealloc;
- (void)touchUp:(id)a0 executionContext:(id)a1;
- (void)didMoveToWindow;
- (long long)accessibilityContainerType;
- (void)showPopupVariantsForKey:(id)a0;
- (void)setReturnKeyEnabled:(BOOL)a0 withDisplayName:(id)a1 withType:(int)a2;
- (id)_accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)_accessibilityScannerGroupElements;
- (id)_accessibilitySupplementaryHeaderViews;
- (id)_accessibilityKeyboardKeyForString:(id)a0;
- (BOOL)_accessibilityKeyboardSupportsGestureMode;
- (id)_accessibiltyAvailableKeyplanes;
- (void)_accessibilityChangeToKeyplane:(id)a0;
- (void)_accessibilityLoadAccessibilityInformation;
- (id)_accessibilityKeyElementForKey:(id)a0;
- (id)_accessibilityVisibleKeysByRow;
- (void)_axHandleEmojiPopupLayoutChangeAfterAnnouncement;
- (id)_accessibilitySortedUnstoredKeys;
- (id)_accessibilityKeys;
- (id)iOSGetKeyboardRowsByNumber;
- (id)iOSGetOrderedRowsForRows:(id)a0 sortedRows:(id)a1 numRows:(long long)a2;
- (BOOL)_accessibilityFingerIsDown;
- (id)atvGetKeyboardRowsByNumber;
- (id)atvGetOrderedRowsForRows:(id)a0 sortedRows:(id)a1 numRows:(long long)a2;

@end
