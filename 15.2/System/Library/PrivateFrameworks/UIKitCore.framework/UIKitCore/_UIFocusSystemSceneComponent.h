@class _UIFocusTreeLock, _UIScreenFocusSystemManager, _UIFocusActiveSceneObserver, UIView, NSString, UIFocusSystem, _UIFocusGameControllerObserver, UIScene, UITraitCollection, _UIFocusScrollManager, NSArray, _UIFocusHardwareKeyboardObserver, NSMutableSet, _UIFocusMovementPerformer;
@protocol UIFocusEnvironment, _UIFocusRegionContainer, UIFocusItemContainer, _UIFocusBehavior, UICoordinateSpace;

@interface _UIFocusSystemSceneComponent : NSObject <_UIFocusEnvironmentInternal, _UISceneComponentProviding, _UIWindowSceneComponentProviding, _UIFocusEnvironmentPrivate, UIFocusItemContainer, _UIFocusRegionContainer> {
    NSMutableSet *_overrideFocusSystemEnablementIdentifiers;
    id<_UIFocusBehavior> _cachedFocusBehavior;
    BOOL _sceneIsValid;
}

@property (retain, nonatomic) UIFocusSystem *focusSystem;
@property (readonly, nonatomic) _UIFocusHardwareKeyboardObserver *hardwareKeyboardObserver;
@property (readonly, nonatomic) _UIFocusGameControllerObserver *gameControllerObserver;
@property (readonly, nonatomic) _UIFocusTreeLock *treeLock;
@property (readonly, nonatomic) _UIFocusMovementPerformer *movementPerformer;
@property (readonly, nonatomic) _UIFocusScrollManager *scrollManager;
@property (readonly, nonatomic) _UIScreenFocusSystemManager *screenManager;
@property (readonly, nonatomic) _UIFocusActiveSceneObserver *activeSceneObserver;
@property (readonly, nonatomic) id<_UIFocusBehavior> currentFocusBehavior;
@property (readonly, nonatomic) BOOL isOverrideFocusSystemEnabled;
@property (readonly, weak, nonatomic, getter=_focusMapContainer) id<_UIFocusRegionContainer> focusMapContainer;
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
@property (weak, nonatomic, getter=_scene, setter=_setScene:) UIScene *_scene;
@property (readonly, nonatomic) UITraitCollection *_traitOverrides;
@property (readonly, nonatomic) id<UICoordinateSpace> coordinateSpace;

+ (id)_screenForScene:(id)a0;
+ (id)sceneComponentForFocusSystem:(id)a0;
+ (id)sceneComponentForEnvironment:(id)a0;
+ (BOOL)needsFocusSystem;
+ (BOOL)__applicationIsSpringBoard;

- (void)_sceneWillInvalidate:(id)a0;
- (id)_regionForFocusedItem:(id)a0 inCoordinateSpace:(id)a1;
- (id)initWithScene:(id)a0;
- (void)_updateFocusSystemCapabilities;
- (BOOL)_focusSystemExplicitlyDisabledForBehavior:(id)a0;
- (void)_adjustFocusSystemAvailabilityUpdatingTraits:(BOOL)a0;
- (BOOL)_isEnvironmentLocked:(id)a0;
- (id)_windowScene;
- (BOOL)shouldUpdateFocusInContext:(id)a0;
- (id)_preferredFocusRegionCoordinateSpace;
- (void)setOverrideFocusSystemEnabled:(BOOL)a0 withIdentifier:(id)a1;
- (void)_searchForFocusRegionsInContext:(id)a0;
- (void)_adjustFocusSystemAvailability;
- (void)_lockEnvironment:(id)a0;
- (void)setNeedsFocusUpdate;
- (id)focusItemsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_unlockEnvironment:(id)a0;
- (id)_currentFocusBehaviorRespectingApplicationOverride:(BOOL)a0;
- (void).cxx_destruct;
- (void)_focusBehaviorDidChange:(id)a0;
- (void)_updateWantsTreeLocking;
- (void)_updateDeviceCapabilityObserver;
- (void)updateFocusIfNeeded;
- (void)_setNeedsNonDeferredFocusUpdate;
- (void)_focusSystemEnabledStateDidChange:(id)a0;
- (void)_setupFocusSystem;
- (void)_notifyDidPerformFocusSystemInitialSetup;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_clippingRectInCoordinateSpace:(id)a0;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (void)_updateFocusSystemState;
- (void)_tearDownFocusSystem;

@end
