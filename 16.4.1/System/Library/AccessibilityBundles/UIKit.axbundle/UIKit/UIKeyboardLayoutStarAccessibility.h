@interface UIKeyboardLayoutStarAccessibility : __UIKeyboardLayoutStarAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (void)setActiveKey:(id)a0;
- (void)setKeyplaneName:(id)a0;
- (BOOL)canProduceString:(id)a0;
- (void)setLabel:(id)a0 forKey:(id)a1;
- (void)showPopupView:(long long)a0 withKey:(id)a1 popupInfo:(id)a2 force:(BOOL)a3;
- (void)touchDown:(id)a0 executionContext:(id)a1;
- (void)setState:(int)a0 forKey:(id)a1;
- (void)addContinuousPathPoint:(struct CGPoint { double x0; double x1; })a0 withTimestamp:(double)a1;
- (long long)accessibilityContainerType;
- (void)didMoveToWindow;
- (void)continueFromInternationalActionForTouchUp:(id)a0 withActions:(unsigned long long)a1 timestamp:(double)a2 interval:(double)a3 didLongPress:(BOOL)a4 prevActions:(unsigned long long)a5 executionContext:(id)a6;
- (void)setReturnKeyEnabled:(BOOL)a0 withDisplayName:(id)a1 withType:(int)a2;
- (BOOL)accessibilityElementsHidden;
- (void)showPopupVariantsForKey:(id)a0;
- (void)touchDragged:(id)a0 executionContext:(id)a1;
- (void)didBeginContinuousPath;
- (void)touchUp:(id)a0 executionContext:(id)a1;
- (void)dealloc;
- (id)_accessibilityUserTestingChildren;
- (unsigned long long)accessibilityTraits;
- (BOOL)isAccessibilityElement;
- (id)_accessibilityFocusContainers:(BOOL)a0;
- (id)accessibilityElementAtIndex:(long long)a0;
- (long long)accessibilityElementCount;
- (long long)accessibilityNavigationStyle;
- (BOOL)accessibilityPerformEscape;
- (long long)indexOfAccessibilityElement:(id)a0;
- (id)_accessibilitySupplementaryHeaderViews;
- (void)_accessibilityChangeToKeyplane:(id)a0;
- (id)_accessibiltyAvailableKeyplanes;
- (id)_accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)_accessibilityKeyboardKeyForString:(id)a0;
- (BOOL)_accessibilityKeyboardSupportsGestureMode;
- (void)_accessibilityLoadAccessibilityInformation;
- (id)_accessibilityScannerGroupElements;
- (id)_accessibilityKeyElementForKey:(id)a0;
- (BOOL)_accessibilityFingerIsDown;
- (id)_accessibilityKeys;
- (id)_accessibilitySortedUnstoredKeys;
- (id)_accessibilityVisibleKeysByRow;
- (void)_axHandleEmojiPopupLayoutChangeAfterAnnouncement;
- (id)atvGetKeyboardRowsByNumber;
- (id)atvGetOrderedRowsForRows:(id)a0 sortedRows:(id)a1 numRows:(long long)a2;
- (id)iOSGetKeyboardRowsByNumber;
- (id)iOSGetOrderedRowsForRows:(id)a0 sortedRows:(id)a1 numRows:(long long)a2;

@end
