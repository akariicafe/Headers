@interface AXVoiceOverServer : AXServer

@property (readonly, nonatomic, getter=isScreenCurtainEnabled) BOOL isScreenCurtainEnabled;

+ (id)server;

- (id)_serviceName;
- (BOOL)_connectIfNecessary;
- (BOOL)triggerCommand:(long long)a0;
- (BOOL)triggerGesture:(id)a0;
- (void)clearLastSoundsPlayed:(id /* block */)a0;
- (void)clearLastSpokenPhrases:(id /* block */)a0;
- (id)currentFocusedElement;
- (id)currentRotorName;
- (BOOL)isBluetoothBrailleDisplayConnected;
- (BOOL)isBrailleInputUIShowing;
- (BOOL)isHandwritingInputUIShowing;
- (id)lastScreenChange;
- (id)lastSoundsPlayed;
- (id)lastSpokenContents;
- (id)lastSpokenPhrases;
- (void)performAutomationTestingCommand:(id)a0 userInfo:(id)a1 timeout:(double)a2 completion:(id /* block */)a3;
- (BOOL)triggerCommand:(long long)a0 withArgument:(id)a1;
- (BOOL)triggerEventCommand:(id)a0;

@end
