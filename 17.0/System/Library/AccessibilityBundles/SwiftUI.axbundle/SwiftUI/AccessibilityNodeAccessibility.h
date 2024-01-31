@class NSArray, NSString, UIFocusEffect, UIView;
@protocol UIFocusEnvironment, UIFocusItemContainer, UICoordinateSpace;

@interface AccessibilityNodeAccessibility : __AccessibilityNodeAccessibility_super <UIFocusItem, UIFocusItemContainer, _UIFocusEnvironmentPrivate, _UIFocusRegionContainer>

@property (readonly, nonatomic) BOOL canBecomeFocused;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (readonly, copy, nonatomic) UIFocusEffect *focusEffect;
@property (readonly, nonatomic) long long focusGroupPriority;
@property (readonly, nonatomic) BOOL isTransparentFocusItem;
@property (readonly, copy, nonatomic) NSArray *preferredFocusEnvironments;
@property (readonly, weak, nonatomic) id<UIFocusEnvironment> parentFocusEnvironment;
@property (readonly, nonatomic) id<UIFocusItemContainer> focusItemContainer;
@property (readonly, weak, nonatomic) UIView *preferredFocusedView;
@property (readonly, copy, nonatomic) NSString *focusGroupIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<UICoordinateSpace> coordinateSpace;
@property (nonatomic) BOOL areChildrenFocused;
@property (readonly, nonatomic, getter=_isEligibleForFocusInteraction) BOOL eligibleForFocusInteraction;
@property (readonly, nonatomic, getter=_isEligibleForFocusOcclusion) BOOL eligibleForFocusOcclusion;
@property (readonly, nonatomic, getter=_preferredFocusMovementStyle) long long preferredFocusMovementStyle;
@property (readonly, copy, nonatomic, getter=_linearFocusMovementSequences) NSArray *linearFocusMovementSequences;

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;
+ (BOOL)_isSerializableAccessibilityElement;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (void)setNeedsFocusUpdate;
- (void)dealloc;
- (void)updateFocusIfNeeded;
- (id)focusItemsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)conformsToProtocol:(id)a0;
- (void)_searchForFocusRegionsInContext:(id)a0;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (id)_preferredFocusRegionCoordinateSpace;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (BOOL)shouldUpdateFocusInContext:(id)a0;
- (id)_accessibilityWindow;
- (void)_destroyFocusLayer;
- (void)_updateFocusLayerFrame;
- (long long)accessibilityElementCount;
- (id)accessibilityPath;
- (BOOL)_accessibilityAutomationHitTestReverseOrder;
- (BOOL)accessibilityShouldEnumerateContainerElementsArrayDirectly;
- (BOOL)_accessibilityFKAShouldIncludeViewsAsElements;
- (BOOL)_accessibilityHasOrderedChildren;
- (BOOL)_accessibilityIsMacVisualAppearance;
- (id)_accessibilityMediaAnalysisElement;
- (BOOL)_accessibilityPrefersNonAttributedAttributeWithOverrideSelector:(SEL)a0 nonAttributedSelector:(SEL)a1 attributedSelector:(SEL)a2;
- (void)_accessibilityUpdateContainerElementReferencesIfNeededForNewElements:(id)a0;
- (BOOL)_accessibilityUserTestingIsElementClassAcceptable;
- (BOOL)_axAreChildrenFocused;
- (void)_axSetAreChildrenFocused:(BOOL)a0;
- (BOOL)_accessibilityIsSingleLeafItemInCell;
- (id)_accessibilityVisualExpansionProxy;

@end
