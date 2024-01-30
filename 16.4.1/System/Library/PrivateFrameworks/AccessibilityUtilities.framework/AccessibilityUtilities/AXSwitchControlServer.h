@interface AXSwitchControlServer : AXServer

+ (id)server;

- (void)_wasDisconnectedFromClient;
- (void)_willClearServer;
- (id)_serviceName;
- (BOOL)_connectIfNecessary;
- (void)_didConnectToClient;
- (BOOL)isScannerPaused;
- (BOOL)setupAutomation;
- (BOOL)triggerCommand:(long long)a0;
- (BOOL)isScannerActive;
- (BOOL)_triggerAutomationCommand:(long long)a0;
- (id)currentFocusedElement;
- (BOOL)isAutoScanEnabled;
- (BOOL)isDwellEnabled;
- (BOOL)isManualScanEnabled;
- (BOOL)tearDownAutomation;

@end
