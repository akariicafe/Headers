@class NSString, NSArray, UIFocusEffect, UIView;
@protocol UIFocusEnvironment, UIFocusItemContainer, UICoordinateSpace;

@interface UIAccessibilityElement : UIResponder <UIFocusItem, UIFocusItemContainer, _UIFocusEnvironmentPrivate, _UIFocusRegionContainer, UIAccessibilityIdentification> {
    BOOL _areChildrenFocused;
}

@property (weak, nonatomic) id accessibilityContainer;
@property (nonatomic) BOOL isAccessibilityElement;
@property (retain, nonatomic) NSString *accessibilityLabel;
@property (retain, nonatomic) NSString *accessibilityHint;
@property (retain, nonatomic) NSString *accessibilityValue;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } accessibilityFrame;
@property (nonatomic) unsigned long long accessibilityTraits;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } accessibilityFrameInContainerSpace;
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
@property (copy, nonatomic) NSString *accessibilityIdentifier;

- (id)_regionForFocusedItem:(id)a0 inCoordinateSpace:(id)a1;
- (id)nextResponder;
- (BOOL)shouldUpdateFocusInContext:(id)a0;
- (id)_preferredFocusRegionCoordinateSpace;
- (void)_searchForFocusRegionsInContext:(id)a0;
- (void)setNeedsFocusUpdate;
- (id)focusItemsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateFocusLayerFrame;
- (void)_destroyFocusLayer;
- (id)_firstViewAncestor;
- (void)updateFocusIfNeeded;
- (id)initWithAccessibilityContainer:(id)a0;
- (void)dealloc;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;

@end
