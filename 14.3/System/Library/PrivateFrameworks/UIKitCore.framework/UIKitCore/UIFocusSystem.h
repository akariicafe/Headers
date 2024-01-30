@class _UIFocusUpdateRequest, UIResponder, UIView, _UIFocusCastingController, NSString, UIFocusAnimationCoordinator, UIFocusMovementAction, _UIFocusAnimationCoordinatorManager, NSArray, _UIFocusSoundGenerator, _UIFocusGroupHistory, _UIFocusItemFrameReporter;
@protocol UIFocusEnvironment, _UIFocusRegionContainer, _UIFocusSystemDelegate, UIFocusItemContainer, UIFocusItem, _UIFocusHapticFeedbackGenerator;

@interface UIFocusSystem : NSObject <_UIFocusEnvironmentInternal, _UIFocusCastingControllerDelegate, _UIFocusEnvironmentPrivate> {
    _UIFocusUpdateRequest *_pendingFocusUpdateRequest;
    struct { unsigned char shouldIgnoreFocusUpdateIfNeeded : 1; unsigned char isPendingFocusRestoration : 1; unsigned char delegateRespondsToPreferredFocusEnvironments : 1; unsigned char delegateRespondsToPrefersDeferralForFocusUpdateInContext : 1; unsigned char delegateRespondsToShouldRestoreFocusInContext : 1; unsigned char delegateRespondsToDidFinishUpdatingFocusInContext : 1; unsigned char delegateRespondsToFocusMapContainer : 1; unsigned char delegateRespondsToFocusItemContainer : 1; } _flags;
}

@property (class, readonly, copy, nonatomic, getter=_allFocusSystems) NSArray *allFocusSystems;

@property (retain, nonatomic, getter=_focusAnimationCoordinatorManager, setter=_setFocusAnimationCoordinatorManager:) _UIFocusAnimationCoordinatorManager *focusAnimationCoordinatorManager;
@property (nonatomic) BOOL waitingForFocusMovementAction;
@property (retain, nonatomic) UIFocusMovementAction *pendingFocusMovementAction;
@property (weak, nonatomic, getter=_delegate, setter=_setDelegate:) id<_UIFocusSystemDelegate> delegate;
@property (readonly, weak, nonatomic, getter=_focusedView) UIView *focusedView;
@property (readonly, nonatomic, getter=_currentFocusAnimationCoordinator) UIFocusAnimationCoordinator *currentFocusAnimationCoordinator;
@property (readonly, weak, nonatomic, getter=_previousFocusedItem) id<UIFocusItem> previousFocusedItem;
@property (readonly, weak, nonatomic, getter=_hostFocusSystem) UIFocusSystem *hostFocusSystem;
@property (readonly, weak, nonatomic, getter=_preferredFirstResponderFocusSystem) UIFocusSystem *preferredFirstResponderFocusSystem;
@property (readonly, weak, nonatomic, getter=_preferredFirstResponder) UIResponder *preferredFirstResponder;
@property (retain, nonatomic, getter=_focusSoundGenerator, setter=_setFocusSoundGenerator:) _UIFocusSoundGenerator *focusSoundGenerator;
@property (retain, nonatomic, getter=_focusItemFrameReporter, setter=_setFocusItemFrameReporter:) _UIFocusItemFrameReporter *focusItemFrameReporter;
@property (retain, nonatomic, getter=_focusCastingController, setter=_setFocusCastingController:) _UIFocusCastingController *focusCastingController;
@property (retain, nonatomic, getter=_focusHapticFeedbackGenerator, setter=_setFocusHapticFeedbackGenerator:) id<_UIFocusHapticFeedbackGenerator> focusHapticFeedbackGenerator;
@property (readonly, nonatomic, getter=_focusGroupHistory) _UIFocusGroupHistory *focusGroupHistory;
@property (nonatomic, getter=_isEnabled, setter=_setEnabled:) BOOL enabled;
@property (readonly, weak, nonatomic) id<UIFocusItem> focusedItem;
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

+ (BOOL)environment:(id)a0 containsEnvironment:(id)a1;
+ (id)focusSystemForEnvironment:(id)a0;
+ (void)registerURL:(id)a0 forSoundIdentifier:(id)a1;

- (BOOL)shouldUpdateFocusInContext:(id)a0;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (void)_sendNotificationsForFocusUpdateInContext:(id)a0 withAnimationCoordinator:(id)a1 usingBlock:(id /* block */)a2;
- (id)_contextForUpdateToEnvironment:(id)a0 withAnimationCoordinator:(id)a1 allowsFocusRestoration:(BOOL)a2;
- (void)_sendWillUpdateFocusNotificationsInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (void)_sendDidUpdateFocusNotificationsInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (id)init;
- (BOOL)_isEnvironmentEligibleForFocusUpdate:(id)a0 shouldResetFocus:(BOOL *)a1 debugReport:(id)a2;
- (void).cxx_destruct;
- (id)_simulatedProgrammaticFocusUpdateToEnvironment:(id)a0;
- (BOOL)_updateFocusImmediatelyWithContext:(id)a0;
- (void)requestFocusUpdateToEnvironment:(id)a0;
- (void)_requestFocusUpdate:(id)a0;
- (BOOL)_uiktest_updateFocusToItem:(id)a0;
- (id)_init;
- (void)updateFocusIfNeeded;
- (void)setNeedsFocusUpdate;
- (id)_initWithFocusEnabled:(BOOL)a0;
- (id)_contextForUpdateToEnvironment:(id)a0 withAnimationCoordinator:(id)a1;
- (BOOL)_shouldRestoreFocusInContext:(id)a0;
- (BOOL)_prefersDeferralForFocusUpdateInContext:(id)a0;
- (BOOL)_updateFocusWithContext:(id)a0 report:(id)a1;
- (void)_setNeedsFocusRestoration;
- (BOOL)_requiresFocusedItemToHaveContainingView;
- (id)_validatedPendingFocusUpdateRequest;
- (void)_handleFocusMovementAction:(id)a0;
- (void)_didFinishUpdatingFocusInContext:(id)a0;
- (void)_performWithoutFocusUpdates:(id /* block */)a0;
- (BOOL)_postsFocusUpdateNotifications;
- (id)_preferredFirstResponderFocusSystemForFocusedItem:(id)a0;
- (id)focusedWindowForFocusCastingController:(id)a0;
- (void)_enableWithoutFocusRestoration;
- (void)_focusEnvironmentWillDisappear:(id)a0;
- (void)_cancelPendingFocusRestoration;
- (void)_uiktest_setPreviousFocusedItem:(id)a0;
- (BOOL)_debug_isEnvironmentEligibleForFocusUpdate:(id)a0 debugReport:(id)a1;
- (void)_uiktest_disableFocusDeferral;
- (void)_setEnabled:(BOOL)a0 withAnimationCoordinator:(id)a1;
- (BOOL)_updateFocusImmediatelyToEnvironment:(id)a0;

@end
