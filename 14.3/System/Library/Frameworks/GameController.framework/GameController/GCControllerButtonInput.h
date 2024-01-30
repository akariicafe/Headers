@interface GCControllerButtonInput : GCControllerElement {
    int _pressCounter;
}

@property (nonatomic, getter=areTouchedAndValueDistinct) BOOL touchedAndValueDistinct;
@property BOOL nonAnalog;
@property (nonatomic) float deadzone;
@property (copy, nonatomic) id /* block */ valueChangedHandler;
@property (copy, nonatomic) id /* block */ pressedChangedHandler;
@property (copy, nonatomic) id /* block */ touchedChangedHandler;
@property (readonly, nonatomic) float value;
@property (readonly, nonatomic, getter=isPressed) BOOL pressed;
@property (readonly, nonatomic, getter=isTouched) BOOL touched;

- (void).cxx_destruct;
- (id)description;
- (BOOL)_setValue:(float)a0;
- (void)setValue:(float)a0;
- (BOOL)isAnalog;
- (BOOL)_setValue:(float)a0 queue:(id)a1;
- (int)getAndResetTimesPressed;
- (id)initWithDescriptionName:(id)a0;
- (BOOL)_setTouched:(BOOL)a0 queue:(id)a1;
- (BOOL)_setTouched:(BOOL)a0;

@end
