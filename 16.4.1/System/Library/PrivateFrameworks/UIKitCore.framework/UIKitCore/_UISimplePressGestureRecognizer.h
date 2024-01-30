@class NSArray, NSDictionary, NSValue, UIDelayedAction;

@interface _UISimplePressGestureRecognizer : UIGestureRecognizer

@property (retain, nonatomic) UIDelayedAction *delayedAction;
@property (retain, nonatomic) NSDictionary *triggersByPressType;
@property (retain, nonatomic) NSArray *triggers;
@property (readonly, nonatomic) NSValue *activeTrigger;

- (void)_begin;
- (void)pressesBegan:(id)a0 withEvent:(id)a1;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)pressesCancelled:(id)a0 withEvent:(id)a1;
- (void)_endOrFail;
- (void)dealloc;
- (void)pressesEnded:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)reset;

@end
