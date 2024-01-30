@class NSArray, NSString, UIPressesEvent;

@interface UIHBLongClickGestureRecognizer : UIGestureRecognizer <UIPressesEventTerminalRegistration> {
    UIPressesEvent *_registeredEventForTerminalEvents;
    unsigned long long _lastSeenClickCount;
}

@property (nonatomic) unsigned long long numberOfClicksRequired;
@property (readonly, nonatomic) NSArray *allowedPressTypes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)pressesChanged:(id)a0 withEvent:(id)a1;
- (void)_succeed;
- (void)pressesBegan:(id)a0 withEvent:(id)a1;
- (void)_resetGestureRecognizer;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)pressesCancelled:(id)a0 withEvent:(id)a1;
- (void)_processPresses:(id)a0;
- (void)pressesEnded:(id)a0 withEvent:(id)a1;
- (void)_fail;
- (void).cxx_destruct;
- (BOOL)_requiredClickCountMetForPress:(id)a0;
- (void)pressesEventDidReceiveTerminal:(id)a0;
- (unsigned long long)_effectiveNumberOfClicksRequired;

@end
