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
@property (readonly) BOOL multipleScenes;
@property int suppressionCount;
@property (nonatomic, getter=isAcquiringFocus) BOOL acquiringFocus;
@property (nonatomic) BOOL requestedCorrectionOfClientSceneIdentityWhileAcquiringFocus;

+ (id)handlerWithArbiter:(id)a0 forConnection:(id)a1;

- (void)setDeactivating:(BOOL)a0;
- (void)retrieveDebugInformation:(id /* block */)a0;
- (void)_reevaluateRemoteSceneIdentity:(id)a0;
- (void)takeProcessAssertionOnRemoteWithQueue:(id)a0;
- (void)startArbitrationWithExpectedState:(id)a0 sceneIdentity:(id)a1 hostingPIDs:(id)a2 usingFence:(BOOL)a3 withSuppression:(int)a4 onConnected:(id /* block */)a5;
- (void)focusApplicationWithProcessIdentifier:(int)a0 sceneIdentity:(id)a1 stealingKeyboard:(BOOL)a2 onCompletion:(id /* block */)a3;
- (BOOL)_isKeyboardOnScreen:(id)a0;
- (void)releaseProcessAssertion;
- (void)didDetachLayer;
- (void)checkActivation:(unsigned long long)a0;
- (void)uncacheWindowContext;
- (void)clearAcquiringFocusFlags;
- (void)transition:(id)a0 eventStage:(unsigned long long)a1 withInfo:(id)a2;
- (void)setKeyboardTotalDisable:(BOOL)a0 withFence:(id)a1 completionHandler:(id /* block */)a2;
- (void)startArbitrationWithExpectedState:(id)a0 hostingPIDs:(id)a1 usingFence:(BOOL)a2 withSuppression:(int)a3 onConnected:(id /* block */)a4;
- (id)description;
- (void)notifyIAVHeight:(double)a0;
- (void)retrieveMoreDebugInformationWithCompletion:(id /* block */)a0;
- (void)setWantsFencing:(BOOL)a0;
- (void)updateSuspensionCountForPids:(id)a0 active:(BOOL)a1;
- (void).cxx_destruct;
- (void)didAttachLayer;
- (void)applicationShouldFocusWithBundle:(id)a0 onCompletion:(id /* block */)a1;
- (void)cacheWindowContext;
- (void)setWindowContextID:(unsigned int)a0 sceneIdentity:(id)a1 windowState:(unsigned long long)a2 withLevel:(double)a3;
- (void)focusApplicationWithProcessIdentifier:(int)a0 sceneIdentity:(id)a1 onCompletion:(id /* block */)a2;
- (void)addHostedPids:(id)a0;
- (void)signalEventSourceChanged:(long long)a0 completionHandler:(id /* block */)a1;
- (void)_deactivateScene;
- (void)invalidate;
- (BOOL)_shouldRejectSceneIdentityUpdateCorrectingClientIfNeeded:(id)a0 fromSelector:(SEL)a1;
- (void)notifyHostedPIDsOfSuppression:(BOOL)a0;
- (void)notifyHostedPIDsOfSuppression:(BOOL)a0 active:(BOOL)a1;
- (void)dealloc;
- (BOOL)isHandlerShowableWithHandler:(id)a0;
- (void)signalKeyboardChangeComplete;
- (void)setWindowHostingPID:(int)a0 active:(BOOL)a1;
- (void)setSceneIdentity:(id)a0;
- (void)signalKeyboardChanged:(id)a0 onCompletion:(id /* block */)a1;
- (BOOL)isHostingPID:(int)a0;

@end
