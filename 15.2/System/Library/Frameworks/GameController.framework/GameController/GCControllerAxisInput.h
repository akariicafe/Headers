@class GCControllerButtonInput;

@interface GCControllerAxisInput : GCControllerElement {
    float _minValue;
    float _maxValue;
}

@property (nonatomic) float value;
@property (retain, nonatomic) GCControllerButtonInput *positive;
@property (retain, nonatomic) GCControllerButtonInput *negative;
@property (nonatomic, getter=isHorizontal) BOOL horizontal;
@property (copy, nonatomic) id /* block */ valueChangedHandler;

- (float)minValue;
- (float)maxValue;
- (BOOL)_setValue:(float)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCollection:(id)a0;
- (BOOL)isAnalog;
- (BOOL)_setValue:(float)a0 queue:(id)a1;
- (id)initWithCollection:(id)a0 horizontal:(BOOL)a1;
- (int)getAndResetTimesPressed;
- (void)setMinValue:(float)a0 andMaxValue:(float)a1;

@end
