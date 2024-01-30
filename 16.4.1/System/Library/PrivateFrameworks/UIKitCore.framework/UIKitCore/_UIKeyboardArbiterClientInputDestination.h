@class UIWindowScene, NSString, UIScreen, NSMutableSet;

@interface _UIKeyboardArbiterClientInputDestination : _UIKeyboardArbiterClient {
    BOOL _deactivatedBySystemAnimation;
    BOOL _resignActiveByControlCenter;
    BOOL _hadFocusBeforeOverlay;
    UIWindowScene *_suppressedScene;
    int _hostedCount;
    UIScreen *_lastScreen;
    BOOL _resigningByOtherApp;
    NSString *_keyboardSceneIdentifierEnteringForeground;
}

@property (retain, nonatomic) NSMutableSet *pendingKeyboardGrabs;
@property (retain, nonatomic) NSMutableSet *activePIDs;
@property (nonatomic) BOOL updatingKeyWindow;
@property (copy, nonatomic) NSString *focusedSceneIdentityStringOrIdentifier;

+ (id)currentBundleIdentifier;

- (void)didSuspend:(id)a0;
- (void)willResume:(id)a0;
- (void)setWindowHostingPID:(int)a0 active:(BOOL)a1;
- (void)willResignActive:(id)a0;
- (void)startConnection;
- (BOOL)allowedToShowKeyboard;
- (void)queue_keyboardUIDidChange:(id)a0 onComplete:(id /* block */)a1;
- (unsigned long long)localSceneCount;
- (void)sceneDidActivate:(id)a0;
- (void)clearKeyboardSceneIdentifierEnteringForeground:(id)a0;
- (void)queue_activeProcessResignWithCompletion:(id /* block */)a0;
- (void)didBecomeActive:(id)a0;
- (void)peekApplicationEvent:(id)a0;
- (void)queue_setKeyboardDisabled:(BOOL)a0 withCompletion:(id /* block */)a1;
- (void)applicationKeyWindowDidChange:(id)a0;
- (void)queue_keyboardChanged:(id)a0 onComplete:(id /* block */)a1;
- (void)finishWithHostedWindow;
- (id)currentHostedPIDs;
- (void)sceneWillEnterForeground:(id)a0;
- (void)userSelectedApp:(id)a0 onCompletion:(id /* block */)a1;
- (void)signalToProxyKeyboardChanged:(id)a0 onCompletion:(id /* block */)a1;
- (BOOL)_sceneFocusUpdatePermittedForWindow:(id)a0;
- (void)setKeyboardSceneIdentifierEnteringForegroundForScene:(id)a0;
- (BOOL)allowedToEnableKeyboardWindow;
- (void)sceneDidEnterBackground:(id)a0;
- (void)setSnapshotting:(BOOL)a0;
- (void)setWindowEnabled:(BOOL)a0;
- (id)prepareForHostedWindowWithScene:(id)a0;
- (id)init;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })keyboardFrameIncludingRemoteIAV;
- (void)setWindowEnabled:(BOOL)a0 force:(BOOL)a1;
- (void)queue_sceneBecameFocused:(id)a0 withCompletion:(id /* block */)a1;
- (BOOL)_sceneFocusPermittedForApplication;
- (void)restorePreservedInputViewsIfNecessary;
- (void)setSuppressingKeyboard:(BOOL)a0 forScene:(id)a1;
- (void).cxx_destruct;
- (void)sceneDidDisconnect:(id)a0;
- (id)_activeScreen;
- (void)stopConnection;
- (void)handleKeyboardUITrackingChange:(id)a0;
- (BOOL)_didHandleKeyboardClientChange:(id)a0 shouldConsiderSnapshottingKeyboard:(BOOL)a1 isLocalEvent:(BOOL)a2;
- (void)_layoutKeyboardViews:(id)a0;
- (void)_preserveInputViewsForClientChange:(BOOL)a0 snapshotIfNecessary:(BOOL)a1;
- (void)addWindowHostingPID:(int)a0;
- (void)completeMoveKeyboard;
- (void)configureArbiterCommunication:(id)a0;
- (void)didFailArbiterConnection;
- (void)didRemoveDeactivationReason:(id)a0;
- (void)handleKeyboardUIDidChange:(id)a0;
- (BOOL)hasWindowHostingPID:(int)a0;
- (void)inputDestinationDidChange:(BOOL)a0 withIAVHeight:(double)a1 isIAVRelevant:(BOOL)a2 notifyRemote:(BOOL)a3 forScene:(id)a4;
- (BOOL)isHostedInAnotherProcess;
- (BOOL)needsToShowKeyboard;
- (BOOL)needsToShowKeyboardForViewServiceHost;
- (void)removeWindowHostingPID:(int)a0;
- (void)resignFirstResponderIfNeeded;
- (void)setCurrentClientState:(id)a0;
- (BOOL)shouldIgnoreInputDestinationChange:(BOOL)a0 withIAVHeight:(double)a1;
- (BOOL)shouldSnapshot;
- (void)startConnectionWithCompletion:(id /* block */)a0;
- (void)updateWindowState;
- (BOOL)wantsToShowKeyboard;
- (BOOL)wantsToShowKeyboardForViewServiceHost;
- (void)willAddDeactivationReason:(id)a0;

@end
