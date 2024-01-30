@class RWIRelay, BKSApplicationStateMonitor;
@protocol BSInvalidatable;

@interface RWIRelayDelegateIOS : NSObject <RWIRelayDelegate> {
    RWIRelay *_relay;
    BKSApplicationStateMonitor *_applicationStateMonitor;
    id<BSInvalidatable> _idleTimerAssertion;
}

- (void).cxx_destruct;
- (void)relayInitialize:(id)a0;
- (void)relay:(id)a0 activateApplicationWithBundleIdentifier:(id)a1;
- (void)relayClientConnectionDidChange:(id)a0;
- (BOOL)relay:(id)a0 allowIncomingApplicationViaProxy:(struct { unsigned int x0[8]; })a1 pid:(int)a2;
- (void)relay:(id)a0 applicationUpdated:(id)a1;
- (void)relay:(id)a0 applicationConnected:(id)a1;
- (void)relay:(id)a0 applicationDisconnected:(id)a1;
- (BOOL)relay:(id)a0 allowIncomingApplicationConnection:(id)a1 bundleIdentifier:(id)a2;
- (id)relay:(id)a0 applicationInfoForIncomingConnection:(id)a1 bundleIdentifier:(id)a2;
- (void)relay:(id)a0 unhandledApplicationXPCMessage:(id)a1;
- (void)_createApplicationStateMonitorIfNeeded;
- (void)_backBoardApplicationStateChanged:(id)a0;
- (void)_updateDeviceIdlePrevention;
- (void)_startPreventingDeviceFromIdling;
- (void)_stopPreventingDeviceFromIdling;
- (id)relaySetupResponseForClientConnection:(id)a0;

@end
