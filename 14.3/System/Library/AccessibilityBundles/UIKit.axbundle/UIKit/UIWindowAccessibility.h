@class NSString;

@interface UIWindowAccessibility : __UIWindowAccessibility_super <AXRemoteElementChildrenDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;

- (unsigned long long)_accessibilityAutomationType;
- (BOOL)accessibilityElementsHidden;
- (struct CGPoint { double x0; double x1; })warpPoint:(struct CGPoint { double x0; double x1; })a0;
- (long long)_accessibilityInterfaceOrientationForScreenCoordinates;
- (BOOL)_accessibilityShouldIncludeKeyboardInRemoteSubstituteChildren;
- (void)dealloc;
- (unsigned long long)accessibilityTraits;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)_setFirstResponder:(id)a0;
- (id)_targetWindowForPathIndex:(long long)a0 atPoint:(struct CGPoint { double x0; double x1; })a1 forEvent:(id)a2 windowServerHitTestWindow:(id)a3;
- (id)initWithWindowScene:(id)a0;
- (id)_iosAccessibilityAttributeValue:(long long)a0;
- (unsigned int)_accessibilityContextId;
- (id)_accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)_accessibilityIsGroupedParent;
- (BOOL)accessibilityIsWindow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)accessibilityContainer;
- (id)_accessibilityUserTestingParent;
- (void)_orderFrontWithoutMakingKey;
- (void)_setBoundContext:(id)a0;
- (id)_accessibilityWindowSections;
- (int)_accessibilityRemotePid;
- (id)accessibilityRemoteSubstituteChildren:(id)a0;
- (id)_accessibilityMLRemoteElement;
- (void)_axListenForRemoteElement;
- (BOOL)_accessibilityShouldUseRemoteElement;
- (id)_accessibilityAllRemoteElements;
- (id)_accessibilityRemoteElement;
- (void)_axUpdateForRemoteElement:(id)a0;
- (void)_accessibilitySetAllRemoteElements:(id)a0;
- (void)_axCheckForExistingRemoteElements;
- (void)_axRemoteElementRegistered:(id)a0;
- (void)_accessibilityRegisterRemoteElement:(BOOL)a0;
- (id)_accessibilityFirstResponderCoalesceTimer;
- (void)_accessibilitySetFirstResponderCoalesceTimer:(id)a0;
- (id)_accessibilityGetRemoteElement;
- (void)_accessibilitySetRemoteElement:(id)a0;
- (id)_accessibilityIOSMacRotors;
- (void)_accessibilitySetIOSMacRotors:(id)a0;

@end
