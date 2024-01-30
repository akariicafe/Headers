@interface AXVoiceOverServer : AXServer

@property (readonly, nonatomic, getter=isScreenCurtainEnabled) BOOL isScreenCurtainEnabled;

+ (id)server;

- (id)_serviceName;
- (BOOL)_connectIfNecessary;
- (id)currentFocusedElement;
- (BOOL)isBluetoothBrailleDisplayConnected;
- (id)lastSpokenPhrases;
- (BOOL)isBrailleInputUIShowing;
- (id)lastScreenChange;
- (void)performAutomationTestingCommand:(id)a0 userInfo:(id)a1 timeout:(double)a2 completion:(id /* block */)a3;
- (BOOL)triggerCommand:(long long)a0 withArgument:(id)a1;
- (void)clearLastSpokenPhrases:(id /* block */)a0;
- (BOOL)isHandwritingInputUIShowing;
- (id)lastSoundsPlayed;
- (id)lastSpokenContents;
- (BOOL)triggerGesture:(id)a0;
- (id)currentRotorName;
- (BOOL)triggerCommand:(long long)a0;

@end
