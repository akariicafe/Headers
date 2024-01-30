@class NSString, NSMutableDictionary, NSMapTable, NSMutableSet;

@interface SBPIPControllerCoordinator : NSObject <SBIdleTimerProviding, SBApplicationHosting> {
    NSMutableDictionary *_controllersByType;
    NSMapTable *_controllerInterruptionAssertionsByCoordinatorAssertion;
    NSMapTable *_interruptionContextByCoordinatorAssertion;
    NSMapTable *_controllerStashAssertionsByCoordinatorAssertion;
    NSMapTable *_stashContextByCoordinatorAssertion;
    NSMutableSet *_pictureInPictureWindowsHiddenReasons;
    NSMutableDictionary *_sourceToEdgeInsets;
    NSMutableDictionary *_contentTypeToStashedPadding;
}

@property (readonly, nonatomic) BOOL hasIdleTimerBehaviors;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)registerController:(id)a0 forType:(long long)a1;
- (BOOL)isPresentingPictureInPictureRequiringMedusaKeyboard;
- (void)applyPictureInPictureInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0 forSource:(long long)a1;
- (id)acquireStashAssertionForReason:(long long)a0 identifier:(id)a1;
- (id)acquireInterruptionAssertionForReason:(long long)a0 identifier:(id)a1;
- (void)handleDestructionRequestForSceneHandles:(id)a0;
- (id)coordinatorRequestedIdleTimerBehavior:(id)a0;
- (long long)tetheringModeForScenePersistenceIdentifier:(id)a0 pipContentType:(long long)a1;
- (BOOL)isAnyPictureInPictureWindowVisible;
- (BOOL)canHostAnApp;
- (id)hostedAppSceneHandle;
- (void)updatePictureInPictureWindowLevels;
- (BOOL)isHostingAnApp;
- (void)hostedAppWillRotateToInterfaceOrientation:(long long)a0;
- (void)conformsToSBApplicationHosting;
- (BOOL)isPointWithinAnyPictureInPictureContent:(struct CGPoint { double x0; double x1; })a0;
- (id)hostedAppSceneHandles;
- (void).cxx_destruct;
- (id)init;
- (id)controllerForType:(long long)a0;
- (void)dealloc;
- (BOOL)shouldStartPictureInPictureForApplicationWithProcessIdentifierEnteringBackground:(int)a0 scenePersistenceIdentifier:(id)a1 pipContentType:(long long)a2;
- (void)applyStashedPictureInPicturePadding:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0 forPIPSource:(long long)a1;
- (void)_enumerateControllersByDescendingPriority:(id /* block */)a0;
- (void)setPictureInPictureWindowsHidden:(BOOL)a0 withReason:(id)a1;

@end
