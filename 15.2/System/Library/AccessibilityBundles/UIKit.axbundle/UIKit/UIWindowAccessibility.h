@class NSString;

@interface UIWindowAccessibility : __UIWindowAccessibility_super <AXRemoteElementChildrenDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (void)_orderFrontWithoutMakingKey;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (unsigned long long)accessibilityTraits;
- (id)_accessibilityUserTestingParent;
- (unsigned long long)_accessibilityAutomationType;
- (void)_setFirstResponder:(id)a0;
- (id)accessibilityContainer;
- (struct CGPoint { double x0; double x1; })warpPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)accessibilityElementsHidden;
- (id)_targetWindowForPathIndex:(long long)a0 atPoint:(struct CGPoint { double x0; double x1; })a1 forEvent:(id)a2 windowServerHitTestWindow:(id)a3;
- (void)dealloc;
- (id)initWithWindowScene:(id)a0;
- (void)_setBoundContext:(id)a0;
- (unsigned int)_accessibilityContextId;
- (id)_iosAccessibilityAttributeValue:(long long)a0;
- (id)_accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)_accessibilityIsGroupedParent;
- (BOOL)accessibilityIsWindow;
- (id)_accessibilityWindowSections;
- (int)_accessibilityRemotePid;
- (long long)_accessibilityInterfaceOrientationForScreenCoordinates;
- (BOOL)_accessibilityShouldIncludeKeyboardInRemoteSubstituteChildren;
- (void)_accessibilityLoadAccessibilityInformation;
- (id)accessibilityRemoteSubstituteChildren:(id)a0;
- (id)_accessibilityRemoteElement;
- (void)_accessibilitySetAllRemoteElements:(id)a0;
- (void)_axCheckForExistingRemoteElements;
- (void)_axRemoteElementRegistered:(id)a0;
- (void)_accessibilityRegisterRemoteElement:(BOOL)a0;
- (BOOL)_axShouldPostScreenChangeOnOrderFront:(BOOL)a0;
- (BOOL)_accessibilitySceneContainsOnlySecureWindows;

@end
