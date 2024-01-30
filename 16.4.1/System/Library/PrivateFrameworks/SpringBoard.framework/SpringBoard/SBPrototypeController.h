@class SBRestartManager, NSString, NSXPCConnection, SBRootSettings, SBSStatusBarStyleOverridesAssertion, SBWindowScene, SBPrototypeDumpingGround;

@interface SBPrototypeController : NSObject <PTUIClient> {
    NSXPCConnection *_prototypingUIServerConnection;
    BOOL _hasActiveKeyHIDEventRouters;
    SBPrototypeDumpingGround *_dumpingGround;
    SBRootSettings *_rootSettings;
    SBSStatusBarStyleOverridesAssertion *_remotePrototypingAssertion;
}

@property (weak, nonatomic) SBRestartManager *restartManager;
@property (weak, nonatomic) SBWindowScene *windowScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)_sendEvent:(long long)a0;
- (void)_updateRemoteEditingState;
- (BOOL)_shouldSendEvent:(long long)a0;
- (BOOL)handleVolumeIncreaseEvent;
- (BOOL)handleVolumeDecreaseEvent;
- (void)_updateKeyHIDEventRouters;
- (BOOL)handleKeyHIDEvent:(struct __IOHIDEvent { } *)a0;
- (BOOL)_handlePrototypingEvent:(long long)a0;
- (id)rootSettings;
- (void)restartSpringBoard;
- (id)init;
- (void)_invalidateRemotePrototypingAssertion;
- (void)_acquireRemotePrototypingAssertion;
- (BOOL)handleRingerSwitchEvent;
- (void)killSpringBoard;
- (void).cxx_destruct;
- (void)_createConnection;
- (BOOL)_handleKeyHIDEvent:(struct __IOHIDEvent { } *)a0;

@end
