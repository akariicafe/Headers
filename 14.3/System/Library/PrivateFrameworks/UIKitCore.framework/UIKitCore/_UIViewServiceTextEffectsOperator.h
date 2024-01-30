@class NSString, _UIAsyncInvocation, NSArray, _UIHostedWindow;

@interface _UIViewServiceTextEffectsOperator : NSObject <_UIHostedWindowDelegate, _UIViewServiceTextEffectsOperator_RemoteViewControllerInterface, _UIViewServiceDeputy, _UIViewServiceDeputyRotationDelegate> {
    int __automatic_invalidation_retainCount;
    BOOL __automatic_invalidation_invalidated;
    id _remoteViewControllerProxy;
    BOOL _wasInvalidated;
    _UIAsyncInvocation *_prepareForDisconnectionInvocation;
    _UIAsyncInvocation *_invalidationInvocation;
    _UIHostedWindow *_hostedWindow;
    struct CGPoint { double x; double y; } _windowOffset;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _safeAreaInsets;
    struct CGSize { double width; double height; } _sceneSize;
    BOOL _canRestoreInputViews;
    BOOL _isRestoringInputViews;
    BOOL _didResignForDisappear;
    BOOL _localVCDisablesAutomaticBehaviors;
    NSArray *_allowedNotifications;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)operatorWithRemoteViewControllerProxy:(id)a0 hostPID:(int)a1;
+ (id)XPCInterface;
+ (BOOL)_shouldAddServiceOperator;

- (void)__hostDidEnterBackground;
- (void)__prepareForDisconnectionWithCompletionHandler:(id /* block */)a0;
- (void)willRotateToInterfaceOrientation:(long long)a0 duration:(double)a1;
- (void)__hostViewWillDisappear:(BOOL)a0;
- (void)__hostWillEnterForeground;
- (void)_invalidateUnconditionallyThen:(id /* block */)a0;
- (void)__setWindowOffset:(struct CGPoint { double x0; double x1; })a0;
- (int)__automatic_invalidation_logic;
- (void)__hostViewWillAppear:(BOOL)a0;
- (id)_queue;
- (id)autorelease;
- (void).cxx_destruct;
- (void)_resetSceneSize;
- (oneway void)release;
- (BOOL)_isDeallocating;
- (void)hostedWindow:(id)a0 didSetFirstResponder:(id)a1;
- (void)makeHostWindowKey;
- (void)dealloc;
- (void)performOnRelevantWindows:(id /* block */)a0;
- (BOOL)_tryRetain;
- (void)__createHostedTextEffectsWithReplyHandler:(id /* block */)a0;
- (unsigned long long)retainCount;
- (void)hostedWindow:(id)a0 didSetResponderTargetForCalloutBar:(id)a1;
- (void)_viewServiceHostWillEnterForeground:(id)a0;
- (void)setHostedWindow:(id)a0 disableAutomaticBehaviors:(BOOL)a1;
- (void)_restoreInputViews;
- (void)__setNextAutomaticOrderOutDirection:(int)a0 duration:(double)a1;
- (void)__setHostAllowedNotifications:(id)a0;
- (void)finishRotationFromInterfaceOrientation:(long long)a0;
- (void)_reloadSafeInsets;
- (void)forceSyncToStatusBarOrientation;
- (void)__setSafeAreaInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (id)retain;
- (void)__setSceneSize:(struct CGSize { double x0; double x1; })a0;
- (void)_prepareForDisconnectionUnconditionallyThen:(id /* block */)a0;
- (void)rotateToInterfaceOrientation:(long long)a0 duration:(double)a1;
- (id)invalidate;

@end
