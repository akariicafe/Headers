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

- (void)killSpringBoard;
- (BOOL)_shouldSendEvent:(long long)a0;
- (id)init;
- (void)_createConnection;
- (void).cxx_destruct;
- (BOOL)handleVolumeIncreaseEvent;
- (BOOL)_handlePrototypingEvent:(long long)a0;
- (BOOL)handleRingerSwitchEvent;
- (BOOL)handleKeyHIDEvent:(struct __IOHIDEvent { } *)a0;
- (id)rootSettings;
- (void)_updateRemoteEditingState;
- (BOOL)_handleKeyHIDEvent:(struct __IOHIDEvent { } *)a0;
- (void)_sendEvent:(long long)a0;
- (BOOL)handleVolumeDecreaseEvent;
- (void)_updateKeyHIDEventRouters;
- (void)_invalidateRemotePrototypingAssertion;
- (void)_acquireRemotePrototypingAssertion;
- (void)restartSpringBoard;

@end
