@interface AXVoiceOverServer : AXServer

@property (readonly, nonatomic, getter=isScreenCurtainEnabled) BOOL isScreenCurtainEnabled;

+ (id)server;

- (BOOL)_connectIfNecessary;
- (id)_serviceName;
- (id)currentRotorName;
- (BOOL)triggerGesture:(id)a0;
- (void)performAutomationTestingCommand:(id)a0 userInfo:(id)a1 timeout:(double)a2 completion:(id /* block */)a3;
- (BOOL)isHandwritingInputUIShowing;
- (id)lastSpokenContents;
- (id)lastSoundsPlayed;
- (BOOL)isBrailleInputUIShowing;
- (void)clearLastSpokenPhrases:(id /* block */)a0;
- (id)lastSpokenPhrases;
- (id)currentFocusedElement;
- (BOOL)triggerCommand:(long long)a0 withArgument:(id)a1;
- (BOOL)triggerCommand:(long long)a0;
- (BOOL)isBluetoothBrailleDisplayConnected;
- (id)lastScreenChange;

@end
