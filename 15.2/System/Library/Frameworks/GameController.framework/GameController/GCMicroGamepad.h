@class GCController, GCControllerDirectionPad, GCControllerButtonInput;

@interface GCMicroGamepad : GCPhysicalInputProfile <NSSecureCoding> {
    long long _deviceType;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, weak, nonatomic) GCController *controller;
@property (copy, nonatomic) id /* block */ valueChangedHandler;
@property (readonly, nonatomic) GCControllerDirectionPad *dpad;
@property (readonly, nonatomic) GCControllerButtonInput *buttonA;
@property (readonly, nonatomic) GCControllerButtonInput *buttonX;
@property (readonly, nonatomic) GCControllerButtonInput *buttonMenu;
@property (nonatomic) BOOL reportsAbsoluteDpadValues;
@property (nonatomic) BOOL allowsRotation;

+ (id)_current;

- (id)initWithIdentifier:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)buttonB;
- (void)handleEvent:(struct __IOHIDEvent { } *)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)name;
- (id)button0;
- (id)button1;
- (id)productCategory;
- (void)_triggerValueChangedHandlerForElement:(id)a0 queue:(id)a1;
- (void)setLastEventTimestamp:(double)a0;
- (id)saveSnapshot;
- (BOOL)supportsDpadTaps;
- (void)setStateFromMicroGamepad:(id)a0;
- (void)microControllerWithDigitizerX:(float)a0 digitizerY:(float)a1 timestamp:(unsigned long long)a2 touchDown:(BOOL)a3;

@end
