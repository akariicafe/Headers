@class NSArray, NSString, UIFocusEffect, UIView;
@protocol UIFocusEnvironment, UIFocusItemContainer, UICoordinateSpace;

@interface CompactMonthWeekDayNumberAccessibility : __CompactMonthWeekDayNumberAccessibility_super <UIFocusItem, UIFocusItemContainer, _UIFocusEnvironmentPrivate, _UIFocusRegionContainer>

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

- (id)accessibilityLabel;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (void)setNeedsFocusUpdate;
- (unsigned long long)accessibilityTraits;
- (void)updateFocusIfNeeded;
- (id)focusItemsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)conformsToProtocol:(id)a0;
- (void)_searchForFocusRegionsInContext:(id)a0;
- (id)accessibilityHint;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (id)_preferredFocusRegionCoordinateSpace;
- (BOOL)isAccessibilityElement;
- (BOOL)shouldUpdateFocusInContext:(id)a0;
- (id)accessibilityUserInputLabels;
- (void)_destroyFocusLayer;
- (void)_updateFocusLayerFrame;
- (id)accessibilityValue;
- (BOOL)_accessibilityIsSpeakThisElement;
- (BOOL)_axAreChildrenFocused;
- (void)_axSetAreChildrenFocused:(BOOL)a0;
- (id)_axCalendarModel;
- (id)_axEventStore;
- (id)_axStringForNumberOfEvents:(unsigned long long)a0;

@end
