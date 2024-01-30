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

- (void).cxx_destruct;
- (void)handleEvent:(struct __IOHIDEvent { } *)a0;
- (id)initWithIdentifier:(id)a0;
- (id)buttonB;
- (id)initWithCoder:(id)a0;
- (id)saveSnapshot;
- (id)name;
- (id)button0;
- (id)button1;
- (void)encodeWithCoder:(id)a0;
- (id)productCategory;
- (void)_triggerValueChangedHandlerForElement:(id)a0 queue:(id)a1;
- (void)setLastEventTimestamp:(double)a0;
- (BOOL)supportsDpadTaps;
- (void)setStateFromMicroGamepad:(id)a0;
- (void)microControllerWithDigitizerX:(float)a0 digitizerY:(float)a1 timestamp:(unsigned long long)a2 touchDown:(BOOL)a3;

@end
