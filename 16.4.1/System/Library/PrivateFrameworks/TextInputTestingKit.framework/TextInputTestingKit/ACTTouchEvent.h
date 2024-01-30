@class TIKeyboardTouchEvent;

@interface ACTTouchEvent : ACTUserAction

@property (readonly, nonatomic) TIKeyboardTouchEvent *touchEvent;

- (id)description;
- (void).cxx_destruct;
- (id)initWithTouchEvent:(id)a0;
- (void)applyWithTyper:(id)a0 log:(id)a1;

@end
