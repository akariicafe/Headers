@class NSMutableSet, NSMutableDictionary;

@interface SBOrientationLockManager : NSObject {
    long long _userLockedOrientation;
    long long _previousLockedOrientation;
    struct __CFRunLoopObserver { } *_runLoopObserver;
    NSMutableSet *_lockOverrideReasons;
    NSMutableDictionary *_shimmedDeviceOrientationAssertions;
}

+ (id)sharedInstance;

- (void)unlock;
- (void)lock:(long long)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)_endShimmingForReason:(id)a0;
- (void)lock;
- (void)restoreStateFromPrefs;
- (id)succinctDescription;
- (id)description;
- (BOOL)lockOverrideEnabled;
- (void)_updateLockStateWithOrientation:(long long)a0 forceUpdateHID:(BOOL)a1 changes:(id /* block */)a2;
- (void)setLockOverrideEnabled:(BOOL)a0 forReason:(id)a1;
- (long long)deviceOrientationAsFarAsAppsAreConcerned;
- (void)enableLockOverrideForReason:(id)a0 forceOrientation:(long long)a1;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isUserLocked;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)_addLockOverrideReason:(id)a0 orientation:(long long)a1 force:(BOOL)a2;
- (id)succinctDescriptionBuilder;
- (long long)effectiveLockedOrientation;
- (void)updateLockOverrideForCurrentDeviceOrientation;
- (void)_setupRunLoopObserverIfNecessaryForOrientation:(long long)a0 andInitialLockState:(BOOL)a1;
- (void)_updateLockStateWithChanges:(id /* block */)a0;
- (void)dealloc;
- (void)enableLockOverrideForReason:(id)a0 suggestOrientation:(long long)a1;
- (BOOL)isEffectivelyLocked;
- (void)_removeLockOverrideReason:(id)a0;
- (void)_beginShimmingForReason:(id)a0;
- (void)_handler_runLoopObserverDispose;
- (long long)userLockOrientation;

@end
