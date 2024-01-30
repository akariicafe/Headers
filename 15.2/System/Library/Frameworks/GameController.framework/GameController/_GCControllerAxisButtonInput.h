@class GCControllerAxisInput;

@interface _GCControllerAxisButtonInput : GCControllerButtonInput

@property (weak, nonatomic) GCControllerAxisInput *axis;
@property (readonly, nonatomic, getter=isPositive) BOOL positive;

- (BOOL)_setValue:(float)a0;
- (float)value;
- (id)collection;
- (void).cxx_destruct;
- (BOOL)isAnalog;
- (BOOL)_setValue:(float)a0 queue:(id)a1;
- (BOOL)_setValueFromAxisButton:(float)a0 queue:(id)a1;
- (BOOL)_commitPendingValueOnQueue:(id)a0;
- (id)initWithAxis:(id)a0 positive:(BOOL)a1;
- (BOOL)_setValueFromAxisButton:(float)a0;
- (void)_setPendingValue:(float)a0;

@end
