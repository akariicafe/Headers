@class NSString, NSMutableDictionary, PSPointerClientController, NSObject, UIApplicationSceneSettingsDiffInspector;
@protocol OS_dispatch_queue, BSInvalidatable;

@interface SBLockedPointerManager : NSObject <SBMainDisplaySceneManagerObserver, SBLayoutStateTransitionObserver, SBDeviceApplicationSceneHandleObserver> {
    PSPointerClientController *_pointerClientController;
    UIApplicationSceneSettingsDiffInspector *_sceneSettingsInspector;
    NSObject<OS_dispatch_queue> *_stateSerialQueue;
    NSMutableDictionary *_queue_preferredLockStatusBySceneIdentifier;
    NSString *_queue_sceneIdentifierThatHasLockedPointer;
    id<BSInvalidatable> _queue_backboardLockedPointerAssertion;
    id<BSInvalidatable> _queue_pointerHiddenAssertion;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)_queue_prefersLockForSceneIdentifier:(id)a0;
- (void)sceneManager:(id)a0 didAddExternalForegroundApplicationSceneHandle:(id)a1;
- (void)sceneManager:(id)a0 didRemoveExternalForegroundApplicationSceneHandle:(id)a1;
- (void)_queue_unlockPointer;
- (id)initWithSceneManager:(id)a0;
- (void)sceneHandle:(id)a0 didUpdateSettingsWithDiff:(id)a1 previousSettings:(id)a2;
- (void)layoutStateTransitionCoordinator:(id)a0 transitionDidEndWithTransitionContext:(id)a1;
- (void)_queue_lockPointerForSceneIdentifier:(id)a0;
- (void)layoutStateTransitionCoordinator:(id)a0 transitionDidBeginWithTransitionContext:(id)a1;
- (void).cxx_destruct;
- (void)_queue_updateLockForLayoutState:(id)a0;
- (id)_possibleSceneHandleForLockingPointerFromLayoutState:(id)a0;
- (void)clientWithSceneIdentifier:(id)a0 prefersPointerLockStatus:(long long)a1;
- (void)_setPointerLockStatus:(long long)a0 forSceneWithIdentifier:(id)a1;
- (void)_updateLockForLayoutState:(id)a0;
- (BOOL)_shouldAllowPointerLockedForScene:(id)a0;

@end
