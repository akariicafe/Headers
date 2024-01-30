@class UIView, _UIFocusMovementPerformer, _UIFocusActiveSceneObserver, _UIFocusScrollManager, NSArray, UIFocusSystem, NSString, _UIScreenFocusSystemManager, UIScene;
@protocol UIFocusEnvironment, UIFocusItemContainer, _UIFocusRegionContainer, UICoordinateSpace;

@interface _UIFocusSystemSceneComponent : NSObject <_UIFocusEnvironmentInternal, _UISceneComponentProviding, _UIFocusEnvironmentPrivate, UIFocusItemContainer, _UIFocusRegionContainer>

@property (retain, nonatomic) UIFocusSystem *focusSystem;
@property (readonly, nonatomic) _UIFocusMovementPerformer *movementPerformer;
@property (readonly, nonatomic) _UIFocusScrollManager *scrollManager;
@property (readonly, nonatomic) _UIScreenFocusSystemManager *screenManager;
@property (readonly, nonatomic) _UIFocusActiveSceneObserver *activeSceneObserver;
@property (readonly, weak, nonatomic, getter=_focusMapContainer) id<_UIFocusRegionContainer> focusMapContainer;
@property (nonatomic) BOOL areChildrenFocused;
@property (readonly, nonatomic, getter=_isEligibleForFocusInteraction) BOOL eligibleForFocusInteraction;
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
@property (weak, nonatomic, getter=_scene, setter=_setScene:) UIScene *_scene;
@property (readonly, nonatomic) id<UICoordinateSpace> coordinateSpace;

+ (id)sceneComponentForView:(id)a0;
+ (id)sceneComponentForFocusSystem:(id)a0;
+ (BOOL)__applicationIsSpringBoard;
+ (BOOL)needsFocusSystem;
+ (BOOL)_platformWantsFocusSystemForScene:(id)a0;
+ (BOOL)_platformAlwaysWantsFocusSystemForScene:(id)a0;
+ (BOOL)platformSupportsFocusSystem;
+ (id)_screenForScene:(id)a0;

- (id)_windowScene;
- (BOOL)shouldUpdateFocusInContext:(id)a0;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (void).cxx_destruct;
- (void)_searchForFocusRegionsInContext:(id)a0;
- (id)initWithScene:(id)a0;
- (void)_tearDownFocusSystem;
- (id)_preferredFocusRegionCoordinateSpace;
- (void)_adjustFocusForAccessibilityIfNeeded:(id)a0;
- (void)_sceneWillInvalidate:(id)a0;
- (void)updateFocusIfNeeded;
- (void)_setupFocusSystem;
- (void)_setNeedsNonDeferredFocusUpdate;
- (void)setNeedsFocusUpdate;
- (id)_regionForFocusedItem:(id)a0 inCoordinateSpace:(id)a1;
- (id)focusItemsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateFocusSystemState;

@end
