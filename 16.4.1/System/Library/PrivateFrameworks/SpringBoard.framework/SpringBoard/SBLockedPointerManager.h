@class SBWindowScene, NSString, NSMutableDictionary, PSPointerClientController, NSMutableSet, NSObject, UIApplicationSceneSettingsDiffInspector;
@protocol OS_dispatch_queue, BSInvalidatable;

@interface SBLockedPointerManager : NSObject <SBSceneManagerObserver, SBLayoutStateTransitionObserver, SBDeviceApplicationSceneHandleObserver, BSInvalidatable> {
    PSPointerClientController *_pointerClientController;
    UIApplicationSceneSettingsDiffInspector *_sceneSettingsInspector;
    NSObject<OS_dispatch_queue> *_stateSerialQueue;
    NSMutableDictionary *_queue_preferredLockStatusBySceneIdentifier;
    NSString *_queue_sceneIdentifierThatHasLockedPointer;
    NSMutableSet *_queue_sceneIdentifiersThatSuppressPreferredLockStatus;
    id<BSInvalidatable> _queue_backboardLockedPointerAssertion;
    id<BSInvalidatable> _queue_pointerHiddenAssertion;
    SBWindowScene *_windowScene;
    BOOL _queue_isInvalidated;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithWindowScene:(id)a0;
- (void)sceneHandle:(id)a0 didDestroyScene:(id)a1;
- (void)sceneManager:(id)a0 didAddExternalForegroundApplicationSceneHandle:(id)a1;
- (void)_setPointerLockStatus:(long long)a0 forSceneWithIdentifier:(id)a1;
- (void)sceneHandle:(id)a0 didUpdateSettingsWithDiff:(id)a1 previousSettings:(id)a2;
- (void)clientWithSceneIdentifier:(id)a0 suppressPreferredLockStatus:(BOOL)a1;
- (void)_queue_lockPointerForSceneIdentifier:(id)a0;
- (id)_possibleSceneHandleForLockingPointerFromLayoutState:(id)a0;
- (BOOL)_queue_prefersLockForSceneIdentifier:(id)a0;
- (void)sceneManager:(id)a0 didRemoveExternalForegroundApplicationSceneHandle:(id)a1;
- (void)_queue_updateLockForLayoutState:(id)a0;
- (void)clientWithSceneIdentifier:(id)a0 prefersPointerLockStatus:(long long)a1;
- (BOOL)_shouldAllowPointerLockedForScene:(id)a0;
- (void)_notInvalidated_updateLockForLayoutState:(id)a0;
- (void)invalidate;
- (void)layoutStateTransitionCoordinator:(id)a0 transitionDidEndWithTransitionContext:(id)a1;
- (void)_queue_unlockPointer;
- (void).cxx_destruct;
- (void)layoutStateTransitionCoordinator:(id)a0 transitionDidBeginWithTransitionContext:(id)a1;

@end
