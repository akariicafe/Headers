@class GCControllerButtonInput, GCControllerAxisInput;

@interface GCControllerDirectionPad : GCControllerElement {
    BOOL _wasZeroed;
    int _timesPressed;
}

@property (retain, nonatomic) GCControllerAxisInput *xAxis;
@property (retain, nonatomic) GCControllerAxisInput *yAxis;
@property BOOL nonAnalog;
@property (copy, nonatomic) id /* block */ valueChangedHandler;
@property (readonly, nonatomic) GCControllerButtonInput *up;
@property (readonly, nonatomic) GCControllerButtonInput *down;
@property (readonly, nonatomic) GCControllerButtonInput *left;
@property (readonly, nonatomic) GCControllerButtonInput *right;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isAnalog;
- (void)setUnmappedNameLocalizationKey:(id)a0;
- (BOOL)_commitPendingValueOnQueue:(id)a0;
- (void)_fireValueChanged;
- (void)_fireValueChangedWithQueue:(id)a0;
- (int)getAndResetTimesPressed;
- (id)initWithDigital:(BOOL)a0;
- (id)initWithDigital:(BOOL)a0 descriptionName:(id)a1;
- (void)setUnmappedLocalizedName:(id)a0;
- (void)setValueForXAxis:(float)a0 yAxis:(float)a1;

@end
