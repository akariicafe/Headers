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

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)handleEvent:(struct __IOHIDEvent { } *)a0;
- (id)initWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)name;
- (BOOL)allowsRotation;
- (void)setAllowsRotation:(BOOL)a0;
- (id)button2;
- (id)productCategory;
- (id)button0;
- (id)button1;
- (id)button3;
- (void)_triggerValueChangedHandlerForElement:(id)a0 queue:(id)a1;
- (BOOL)reportsAbsoluteDpadValues;
- (id)saveSnapshot;
- (void)setGamepadEventSource:(id)a0;
- (void)setReportsAbsoluteDpadValues:(BOOL)a0;

@end
