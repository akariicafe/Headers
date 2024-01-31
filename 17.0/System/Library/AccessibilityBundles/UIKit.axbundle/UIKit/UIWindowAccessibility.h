@class NSString;

@interface UIWindowAccessibility : __UIWindowAccessibility_super <AXRemoteElementChildrenDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)initWithWindowScene:(id)a0;
- (void)dealloc;
- (unsigned long long)accessibilityTraits;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setFirstResponder:(id)a0;
- (BOOL)accessibilityElementsHidden;
- (void)_orderFrontWithoutMakingKey;
- (void)_setBoundContext:(id)a0;
- (id)_targetWindowForPathIndex:(long long)a0 atPoint:(struct CGPoint { double x0; double x1; })a1 scenePointZ:(double)a2 forEvent:(id)a3 windowServerHitTestWindow:(id)a4;
- (id)accessibilityContainer;
- (void)makeKeyAndVisible;
- (struct CGPoint { double x0; double x1; })warpPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)_accessibilityUserTestingParent;
- (unsigned long long)_accessibilityAutomationType;
- (unsigned int)_accessibilityContextId;
- (id)_accessibilityFirstElement;
- (id)_accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (long long)_accessibilityInterfaceOrientationForScreenCoordinates;
- (BOOL)_accessibilityIsGroupedParent;
- (BOOL)_accessibilityIsInJindo;
- (BOOL)_accessibilityIsUserInteractionEnabled;
- (void)_accessibilityLoadAccessibilityInformation;
- (int)_accessibilityRemotePid;
- (BOOL)_accessibilityShouldIncludeKeyboardInRemoteSubstituteChildren;
- (id)_accessibilityWindowSections;
- (BOOL)accessibilityIsWindow;
- (id)accessibilityRemoteSubstituteChildren:(id)a0;
- (BOOL)_accessibilityIsSecure;
- (void)_accessibilityRegisterRemoteElement:(BOOL)a0;
- (id)_accessibilityRemoteElement;
- (BOOL)_accessibilitySceneContainsOnlySecureWindows;
- (void)_accessibilitySetAllRemoteElements:(id)a0;
- (void)_axCheckForExistingRemoteElements;
- (void)_axRemoteElementRegistered:(id)a0;
- (BOOL)_axShouldPostScreenChangeOnOrderFront:(BOOL)a0;

@end
