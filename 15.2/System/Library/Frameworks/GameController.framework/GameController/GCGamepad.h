@class GCController, NSString, GCControllerDirectionPad, GCControllerButtonInput;

@interface GCGamepad : GCPhysicalInputProfile <_GCGamepadEventSink, NSSecureCoding> {
    id _gamepadEventObservation;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) GCControllerButtonInput *buttonMenu;
@property (readonly, weak, nonatomic) GCController *controller;
@property (copy, nonatomic) id /* block */ valueChangedHandler;
@property (readonly, nonatomic) GCControllerDirectionPad *dpad;
@property (readonly, nonatomic) GCControllerButtonInput *buttonA;
@property (readonly, nonatomic) GCControllerButtonInput *buttonB;
@property (readonly, nonatomic) GCControllerButtonInput *buttonX;
@property (readonly, nonatomic) GCControllerButtonInput *buttonY;
@property (readonly, nonatomic) GCControllerButtonInput *leftShoulder;
@property (readonly, nonatomic) GCControllerButtonInput *rightShoulder;

- (id)initWithIdentifier:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)handleEvent:(struct __IOHIDEvent { } *)a0;
- (void).cxx_destruct;
- (id)button2;
- (id)initWithCoder:(id)a0;
- (BOOL)allowsRotation;
- (id)name;
- (id)button0;
- (id)button1;
- (id)button3;
- (void)setAllowsRotation:(BOOL)a0;
- (id)productCategory;
- (void)setGamepadEventSource:(id)a0;
- (BOOL)reportsAbsoluteDpadValues;
- (void)_triggerValueChangedHandlerForElement:(id)a0 queue:(id)a1;
- (void)setReportsAbsoluteDpadValues:(BOOL)a0;
- (id)saveSnapshot;

@end
