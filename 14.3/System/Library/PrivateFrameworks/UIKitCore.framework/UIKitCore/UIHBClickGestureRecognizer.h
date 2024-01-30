@class NSArray, NSString, UIPressesEvent;

@interface UIHBClickGestureRecognizer : UIGestureRecognizer <UIPressesEventTerminalRegistration> {
    UIPressesEvent *_registeredEventForTerminalEvents;
    unsigned long long _lastSeenClickCount;
}

@property (nonatomic) unsigned long long clickCount;
@property (nonatomic) BOOL recognizesOnPressPhaseBegan;
@property (readonly, nonatomic) NSArray *allowedPressTypes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_resetGestureRecognizer;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)_fail;
- (void)pressesBegan:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)pressesCancelled:(id)a0 withEvent:(id)a1;
- (void)pressesChanged:(id)a0 withEvent:(id)a1;
- (void)pressesEnded:(id)a0 withEvent:(id)a1;
- (void)_processPresses:(id)a0;
- (void)pressesEventDidReceiveTerminal:(id)a0;
- (void)_succeed;

@end
