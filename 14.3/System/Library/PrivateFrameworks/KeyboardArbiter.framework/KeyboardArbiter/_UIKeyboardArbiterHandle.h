@class NSXPCConnection, NSString, _UIKeyboardArbiter, BKSProcessAssertion, FBSSceneIdentityToken, NSArray, BSServiceConnectionEndpointInjector, NSMutableSet, FBSCAContextSceneLayer;

@interface _UIKeyboardArbiterHandle : NSObject <_UIKeyboardArbitration> {
    BOOL _invalidated;
    _UIKeyboardArbiter *_owner;
    NSMutableSet *_hostedPids;
    BOOL _checkingShowability;
    int _childrenSuppressionCount;
    BOOL _keyboardOnScreen;
    BKSProcessAssertion *_remoteKeepAliveAssertion;
    unsigned long long _remoteKeepAliveAssertionCount;
    unsigned long long _remoteKeepAliveTimerCount;
    NSArray *_cachedContext;
    BSServiceConnectionEndpointInjector *_endpointGrantInjector;
}

@property (readonly) int processIdentifier;
@property (readonly, retain) NSString *bundleIdentifier;
@property (readonly) NSXPCConnection *connection;
@property BOOL running;
@property (readonly, retain) FBSCAContextSceneLayer *sceneLayer;
@property (readonly, retain) FBSSceneIdentityToken *remoteSceneIdentity;
@property (readonly) BOOL active;
@property (readonly) unsigned long long wantedState;
@property (readonly) double level;
@property (readonly) double iavHeight;
@property (readonly) BOOL isKeyboardOnScreen;
@property int prevActiveIdentifier;
@property (readonly) BOOL wantsFence;
@property (readonly) BOOL deactivating;
@property (readonly) BOOL hasHostedPids;
@property int suppressionCount;

+ (id)handlerWithArbiter:(id)a0 forConnection:(id)a1;

- (BOOL)isHandlerShowableWithHandler:(id)a0;
- (void)setWantsFencing:(BOOL)a0;
- (void)releaseProcessAssertion;
- (void)applicationShouldFocusWithBundle:(id)a0 onCompletion:(id /* block */)a1;
- (void)retrieveDebugInformation:(id /* block */)a0;
- (void).cxx_destruct;
- (void)uncacheWindowContext;
- (void)cacheWindowContext;
- (void)dealloc;
- (void)takeProcessAssertionOnRemoteWithQueue:(id)a0;
- (void)startArbitrationWithExpectedState:(id)a0 hostingPIDs:(id)a1 usingFence:(BOOL)a2 withSuppression:(int)a3 onConnected:(id /* block */)a4;
- (void)notifyIAVHeight:(double)a0;
- (void)addHostedPids:(id)a0;
- (BOOL)isHostingPID:(int)a0;
- (void)focusApplicationWithProcessIdentifier:(int)a0 sceneIdentity:(id)a1 onCompletion:(id /* block */)a2;
- (void)signalKeyboardChanged:(id)a0 onCompletion:(id /* block */)a1;
- (void)setWindowHostingPID:(int)a0 active:(BOOL)a1;
- (id)description;
- (void)didDetachLayer;
- (void)didAttachLayer;
- (void)retrieveMoreDebugInformationWithCompletion:(id /* block */)a0;
- (void)setKeyboardTotalDisable:(BOOL)a0 withFence:(id)a1 completionHandler:(id /* block */)a2;
- (void)setSceneIdentity:(id)a0;
- (void)transition:(id)a0 eventStage:(unsigned long long)a1 withInfo:(id)a2;
- (void)setDeactivating:(BOOL)a0;
- (void)updateSuspensionCountForPids:(id)a0;
- (void)_deactivateScene;
- (void)signalKeyboardChangeComplete;
- (void)checkActivation:(unsigned long long)a0;
- (void)_reevaluateRemoteSceneIdentity:(id)a0;
- (void)signalEventSourceChanged:(long long)a0 completionHandler:(id /* block */)a1;
- (void)setWindowContextID:(unsigned int)a0 sceneIdentity:(id)a1 windowState:(unsigned long long)a2 withLevel:(double)a3;
- (void)notifyHostedPIDsOfSuppression:(BOOL)a0;
- (void)invalidate;

@end
