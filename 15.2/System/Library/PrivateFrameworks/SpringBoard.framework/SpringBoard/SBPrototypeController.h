@class SBRestartManager, NSString, NSXPCConnection, SBRootSettings, SBSStatusBarStyleOverridesAssertion, SBPrototypeDumpingGround;

@interface SBPrototypeController : NSObject <PTUIClient> {
    NSXPCConnection *_prototypingUIServerConnection;
    BOOL _hasActiveKeyHIDEventRouters;
    SBPrototypeDumpingGround *_dumpingGround;
    SBRootSettings *_rootSettings;
    SBSStatusBarStyleOverridesAssertion *_remotePrototypingAssertion;
}

@property (weak, nonatomic) SBRestartManager *restartManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (BOOL)handleKeyHIDEvent:(struct __IOHIDEvent { } *)a0;
- (BOOL)handleVolumeIncreaseEvent;
- (void)_updateKeyHIDEventRouters;
- (void)_updateRemoteEditingState;
- (void)restartSpringBoard;
- (BOOL)_handlePrototypingEvent:(long long)a0;
- (void)killSpringBoard;
- (BOOL)_shouldSendEvent:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (id)rootSettings;
- (void)_createConnection;
- (BOOL)handleRingerSwitchEvent;
- (void)_acquireRemotePrototypingAssertion;
- (BOOL)_handleKeyHIDEvent:(struct __IOHIDEvent { } *)a0;
- (BOOL)handleVolumeDecreaseEvent;
- (void)_invalidateRemotePrototypingAssertion;
- (void)_sendEvent:(long long)a0;

@end
