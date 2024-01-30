@class NSMutableSet, NSMutableDictionary;

@interface SBOrientationLockManager : NSObject {
    long long _userLockedOrientation;
    long long _previousLockedOrientation;
    struct __CFRunLoopObserver { } *_runLoopObserver;
    NSMutableSet *_lockOverrideReasons;
    NSMutableDictionary *_shimmedDeviceOrientationAssertions;
}

+ (id)sharedInstance;

- (BOOL)isEffectivelyLocked;
- (void)setLockOverrideEnabled:(BOOL)a0 forReason:(id)a1;
- (void)lock:(long long)a0;
- (void)_updateLockStateWithChanges:(id /* block */)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (long long)effectiveLockedOrientation;
- (void)lock;
- (id)succinctDescriptionBuilder;
- (void)enableLockOverrideForReason:(id)a0 suggestOrientation:(long long)a1;
- (void)_handler_runLoopObserverDispose;
- (void)unlock;
- (void)updateLockOverrideForCurrentDeviceOrientation;
- (void)_removeLockOverrideReason:(id)a0;
- (long long)userLockOrientation;
- (long long)deviceOrientationAsFarAsAppsAreConcerned;
- (BOOL)isUserLocked;
- (void)dealloc;
- (void)restoreStateFromPrefs;
- (void)_setupRunLoopObserverIfNecessaryForOrientation:(long long)a0 andInitialLockState:(BOOL)a1;
- (BOOL)lockOverrideEnabled;
- (id)succinctDescription;
- (id)init;
- (void)_beginShimmingForReason:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)_endShimmingForReason:(id)a0;
- (id)description;
- (void)enableLockOverrideForReason:(id)a0 forceOrientation:(long long)a1;
- (void)_updateLockStateWithOrientation:(long long)a0 forceUpdateHID:(BOOL)a1 changes:(id /* block */)a2;
- (void).cxx_destruct;
- (void)_addLockOverrideReason:(id)a0 orientation:(long long)a1 force:(BOOL)a2;

@end
