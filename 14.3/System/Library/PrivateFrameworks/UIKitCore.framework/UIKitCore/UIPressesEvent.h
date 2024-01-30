@class NSSet, NSMutableSet, NSHashTable, UIPress;

@interface UIPressesEvent : UIEvent {
    NSMutableSet *_allPresses;
    NSHashTable *_terminalEventRegistrants;
}

@property (retain, nonatomic) UIPress *_triggeringPhysicalButton;
@property (readonly, nonatomic) NSSet *allPresses;

- (id)_windows;
- (long long)subtype;
- (id)_physicalButtonsForGestureRecognizer:(id)a0;
- (id)_cloneEvent;
- (BOOL)_sendEventToGestureRecognizer:(id)a0;
- (void).cxx_destruct;
- (id)_allPresses;
- (id)_physicalButtonsForGestureRecognizer:(id)a0 withPhase:(long long)a1;
- (void)_addGesturesForPress:(id)a0;
- (id)_respondersForWindow:(id)a0;
- (id)_terminalRegistrantsForPressType:(long long)a0;
- (void)_registerForTerminalEvent:(id)a0;
- (id)_physicalButtonsForResponder:(id)a0;
- (id)description;
- (long long)type;
- (id)_init;
- (id)pressesForGestureRecognizer:(id)a0;
- (id)_directionalPressWithStrongestForce;
- (void)_addPress:(id)a0 forDelayedDelivery:(BOOL)a1;
- (id)_physicalButtonsForResponder:(id)a0 withPhase:(long long)a1;
- (void)_removePhysicalButton:(id)a0;
- (void)_unregisterForTerminalEvent:(id)a0;
- (void)_cleanupAfterDispatch;
- (id)_gestureRecognizersForWindow:(id)a0;
- (id)physicalButtonsForWindow:(id)a0;

@end
