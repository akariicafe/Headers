@class NSMutableSet, NSMutableDictionary;

@interface SBOrientationLockManager : NSObject {
    long long _userLockedOrientation;
    long long _previousLockedOrientation;
    struct __CFRunLoopObserver { } *_runLoopObserver;
    NSMutableSet *_lockOverrideReasons;
    NSMutableDictionary *_shimmedDeviceOrientationAssertions;
}

+ (id)sharedInstance;

- (void)_updateLockStateWithChanges:(id /* block */)a0;
- (void)unlock;
- (void)lock;
- (id)init;
- (void).cxx_destruct;
- (void)enableLockOverrideForReason:(id)a0 suggestOrientation:(long long)a1;
- (void)enableLockOverrideForReason:(id)a0 forceOrientation:(long long)a1;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)dealloc;
- (void)_addLockOverrideReason:(id)a0 orientation:(long long)a1 force:(BOOL)a2;
- (void)setLockOverrideEnabled:(BOOL)a0 forReason:(id)a1;
- (void)_removeLockOverrideReason:(id)a0;
- (id)succinctDescription;
- (long long)userLockOrientation;
- (void)restoreStateFromPrefs;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (BOOL)isUserLocked;
- (void)updateLockOverrideForCurrentDeviceOrientation;
- (void)_setupRunLoopObserverIfNecessaryForOrientation:(long long)a0 andInitialLockState:(BOOL)a1;
- (id)description;
- (long long)deviceOrientationAsFarAsAppsAreConcerned;
- (id)succinctDescriptionBuilder;
- (BOOL)lockOverrideEnabled;
- (void)_updateLockStateWithOrientation:(long long)a0 forceUpdateHID:(BOOL)a1 changes:(id /* block */)a2;
- (void)_handler_runLoopObserverDispose;
- (void)_beginShimmingForReason:(id)a0;
- (long long)effectiveLockedOrientation;
- (void)_endShimmingForReason:(id)a0;
- (BOOL)isEffectivelyLocked;
- (void)lock:(long long)a0;

@end
