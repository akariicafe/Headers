@class NSString, NSSet, AXDispatchTimer;

@interface AXFrontBoardProcessWatcher : NSObject <FBProcessManagerObserver, FBProcessObserver> {
    id _observerToken;
    AXDispatchTimer *_appTransitionTimer;
    NSSet *_cachedFocusedAppPIDs;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)accessibilitySpokenNameForProcess:(id)a0;
+ (id)processForBundleIdentifier:(id)a0;
+ (void)validateFocusedAppsWithEvent:(long long)a0;

- (void)processDidExit:(id)a0;
- (void)processManager:(id)a0 didAddProcess:(id)a1;
- (void)process:(id)a0 stateDidChangeFromState:(id)a1 toState:(id)a2;
- (void)processManager:(id)a0 didRemoveProcess:(id)a1;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)_processDescriptionForPID:(int)a0;
- (BOOL)_processStateChangeIsTaskStateChangeFrom:(id)a0 to:(id)a1;
- (BOOL)_processStateChangeIsVisibilityStateChangeFrom:(id)a0 to:(id)a1;
- (void)_validateFocusedApps:(long long)a0;

@end
