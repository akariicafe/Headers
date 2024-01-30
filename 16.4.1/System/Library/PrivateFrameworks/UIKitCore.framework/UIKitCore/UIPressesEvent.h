@class NSSet, NSMutableSet, NSHashTable, UIPress;

@interface UIPressesEvent : UIEvent {
    NSMutableSet *_allPresses;
    NSHashTable *_terminalEventRegistrants;
}

@property (retain, nonatomic) UIPress *_triggeringPhysicalButton;
@property (readonly, nonatomic) NSSet *allPresses;

- (id)_windows;
- (id)_physicalButtonsForPhase:(long long)a0;
- (long long)_modifierFlags;
- (id)_physicalButtonsForResponder:(id)a0 withPhase:(long long)a1;
- (void)_addPress:(id)a0 forDelayedDelivery:(BOOL)a1;
- (BOOL)_sendEventToGestureRecognizer:(id)a0;
- (id)_directionalPressWithStrongestForce;
- (long long)subtype;
- (void)_removePhysicalButton:(id)a0;
- (id)_terminalRegistrantsForPressType:(long long)a0;
- (long long)type;
- (id)_init;
- (id)_allPresses;
- (id)_gestureRecognizersForWindow:(id)a0;
- (void)_registerForTerminalEvent:(id)a0;
- (void)_cleanupAfterDispatch;
- (void)_unregisterForTerminalEvent:(id)a0;
- (void)_addGesturesForPress:(id)a0;
- (id)_respondersForWindow:(id)a0;
- (id)pressesForGestureRecognizer:(id)a0;
- (id)_physicalButtonsForGestureRecognizer:(id)a0;
- (id)description;
- (id)physicalButtonsForWindow:(id)a0;
- (void).cxx_destruct;
- (id)_physicalButtonsForGestureRecognizer:(id)a0 withPhase:(long long)a1;
- (id)_cloneEvent;

@end
