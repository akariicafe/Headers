@class NSArray, NSString, _UIFocusEnvironmentContainerTuple, UIView;
@protocol UIFocusEnvironment, UIFocusItemContainer;

@interface _UIFocusRegionContainerProxy : NSObject <_UIFocusRegionContainer>

@property (retain, nonatomic) _UIFocusEnvironmentContainerTuple *environmentContainer;
@property (nonatomic) BOOL allowsLazyLoading;
@property (nonatomic) BOOL shouldCreateRegionForOwningItem;
@property (nonatomic) BOOL shouldCreateRegionForGuideBehavior;
@property (nonatomic) BOOL areChildrenFocused;
@property (readonly, nonatomic, getter=_isEligibleForFocusInteraction) BOOL eligibleForFocusInteraction;
@property (readonly, nonatomic, getter=_isEligibleForFocusOcclusion) BOOL eligibleForFocusOcclusion;
@property (readonly, nonatomic, getter=_preferredFocusMovementStyle) long long preferredFocusMovementStyle;
@property (readonly, copy, nonatomic, getter=_linearFocusMovementSequences) NSArray *linearFocusMovementSequences;
@property (readonly, copy, nonatomic) NSArray *preferredFocusEnvironments;
@property (readonly, weak, nonatomic) id<UIFocusEnvironment> parentFocusEnvironment;
@property (readonly, nonatomic) id<UIFocusItemContainer> focusItemContainer;
@property (readonly, weak, nonatomic) UIView *preferredFocusedView;
@property (readonly, copy, nonatomic) NSString *focusGroupIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_searchForFocusRegionsInContext:(id)a0;
- (BOOL)shouldUpdateFocusInContext:(id)a0;
- (id)_preferredFocusRegionCoordinateSpace;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (BOOL)isEqual:(id)a0;
- (void)setNeedsFocusUpdate;
- (void)updateFocusIfNeeded;
- (void).cxx_destruct;
- (id)_itemContainer;
- (id)_owningEnvironment;
- (id)initWithEnvironmentContainer:(id)a0;
- (id)initWithOwningEnvironment:(id)a0 itemContainer:(id)a1;

@end
