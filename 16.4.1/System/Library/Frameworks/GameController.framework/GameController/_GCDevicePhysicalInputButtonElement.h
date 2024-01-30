@class NSString, NSSet;
@protocol GCPressedStateInput, GCLinearInput, GCTouchedStateInput;

@interface _GCDevicePhysicalInputButtonElement : _GCDevicePhysicalInputElement <GCLinearInput, GCPressedStateInput, GCButtonElement> {
    BOOL _isAnalog;
    float _pressedThreshold;
    long long _pressedValueField;
    unsigned long long _valueChangedHandlerSlot;
    unsigned long long _pressedChangedHandlerSlot;
    unsigned long long _valueSlot;
    unsigned long long _timestampSlot;
}

@property (copy) id /* block */ valueDidChangeHandler;
@property (readonly) float value;
@property (readonly, getter=isAnalog) BOOL analog;
@property (readonly) BOOL canWrap;
@property (readonly) double lastValueTimestamp;
@property (readonly) double lastValueLatency;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy) id /* block */ pressedDidChangeHandler;
@property (readonly, getter=isPressed) BOOL pressed;
@property (readonly) double lastPressedStateTimestamp;
@property (readonly) double lastPressedStateLatency;
@property (readonly) id<GCPressedStateInput, GCLinearInput> pressedInput;
@property (readonly) id<GCTouchedStateInput> touchedInput;
@property (readonly) NSString *sfSymbolsName;
@property (readonly) NSString *localizedName;
@property (readonly) NSSet *aliases;

- (id)initWithIdentifier:(id)a0 configuration:(id)a1;
- (unsigned long long)handleGamepadEvent:(id)a0 withTimestamp:(double)a1;
- (id)initWith:(id)a0 context:(id)a1;
- (BOOL)isEqualToElement:(id)a0;
- (void)onCommitInvokeCallbacks:(unsigned long long)a0;

@end
