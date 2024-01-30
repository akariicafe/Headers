@class NSDictionary, BSTimer, SBHIDButtonStateArbiter;
@protocol SBHIDValueModifyingButtonSetArbiterDelegate;

@interface SBHIDValueModifyingButtonSetArbiter : NSObject <SBHIDButtonStateDelegate> {
    NSDictionary *_usageToButtonDictionary;
    NSDictionary *_buttonToUsageDictionary;
    BSTimer *_timer;
    SBHIDButtonStateArbiter *_currentDownButton;
}

@property (nonatomic) double initialRepeatDelay;
@property (nonatomic) double subsequentRepeatDelay;
@property (weak, nonatomic) id<SBHIDValueModifyingButtonSetArbiterDelegate> delegate;

- (void).cxx_destruct;
- (void)reset;
- (void)dealloc;
- (void)performActionsForButtonLongPress:(id)a0;
- (void)performActionsForButtonUp:(id)a0;
- (void)performActionsForButtonDown:(id)a0;
- (id)initWithHIDKeyPressEventUsages:(id)a0 initialRepeatDelay:(double)a1 subsequentRepeatDelay:(double)a2;
- (BOOL)processKeyboardEvent:(struct __IOHIDEvent { } *)a0;
- (void)_cancelRepeatingActionTimer;
- (void)_performActionForButton:(id)a0;
- (void)_startRepeatingActionTimer;
- (void)_fireRepeatingActionTimer;

@end
