@class NSSet, NSMutableSet, NSHashTable, UIPress;

@interface UIPressesEvent : UIEvent {
    NSMutableSet *_allPresses;
    NSHashTable *_terminalEventRegistrants;
}

@property (retain, nonatomic) UIPress *_triggeringPhysicalButton;
@property (readonly, nonatomic) NSSet *allPresses;

- (id)_gestureRecognizersForWindow:(id)a0;
- (long long)_modifierFlags;
- (id)_windows;
- (BOOL)_sendEventToGestureRecognizer:(id)a0;
- (void)_cleanupAfterDispatch;
- (id)physicalButtonsForWindow:(id)a0;
- (id)_cloneEvent;
- (id)_respondersForWindow:(id)a0;
- (void)_removePhysicalButton:(id)a0;
- (void)_addGesturesForPress:(id)a0;
- (long long)subtype;
- (void)_registerForTerminalEvent:(id)a0;
- (id)_allPresses;
- (id)_physicalButtonsForGestureRecognizer:(id)a0 withPhase:(long long)a1;
- (id)description;
- (id)_physicalButtonsForGestureRecognizer:(id)a0;
- (id)_terminalRegistrantsForPressType:(long long)a0;
- (void).cxx_destruct;
- (id)_physicalButtonsForPhase:(long long)a0;
- (void)_unregisterForTerminalEvent:(id)a0;
- (id)_init;
- (id)_physicalButtonsForResponder:(id)a0 withPhase:(long long)a1;
- (void)_addPress:(id)a0 forDelayedDelivery:(BOOL)a1;
- (id)pressesForGestureRecognizer:(id)a0;
- (long long)type;
- (id)_directionalPressWithStrongestForce;

@end
