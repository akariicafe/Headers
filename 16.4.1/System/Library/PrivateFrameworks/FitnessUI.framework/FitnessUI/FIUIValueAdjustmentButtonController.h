@class UIButton, FIUIWorkoutLapLengthIndexTranslator, NSTimer;

@interface FIUIValueAdjustmentButtonController : NSObject {
    NSTimer *_plusMinusActionTimer;
    long long _plusMinusActionRepeatCount;
}

@property (nonatomic) double value;
@property (nonatomic) double valueStepIncremement;
@property (nonatomic) double minumumStepValueIncrement;
@property (nonatomic) double maxValue;
@property (nonatomic) double minValue;
@property (copy, nonatomic) id /* block */ valueUpdateHandler;
@property (retain, nonatomic) FIUIWorkoutLapLengthIndexTranslator *lapLengthIndexTranslator;
@property (copy, nonatomic) id /* block */ buttonStateUpdateHandler;
@property (nonatomic) BOOL didUserUpdatevalue;
@property (readonly, weak, nonatomic) UIButton *incrementButton;
@property (readonly, weak, nonatomic) UIButton *decrementButton;

- (void).cxx_destruct;
- (void)_incrementRepeatCount;
- (void)_notifyValueChanged;
- (void)_performPlusMinusActionWithButton:(id)a0;
- (void)_performPlusMinusActionWithIndexTranslationForButton:(id)a0;
- (void)_plusMinusActionTimerDidFire:(id)a0;
- (void)_plusMinusButtonTouchCancel:(id)a0;
- (void)_plusMinusButtonTouchDown:(id)a0;
- (void)_plusMinusButtonTouchUpInside:(id)a0;
- (void)_updateButton:(id)a0 forPressedState:(BOOL)a1;
- (void)_updatePlusMinusButtonStates;
- (void)setIncrementButton:(id)a0 decrementButton:(id)a1;

@end
