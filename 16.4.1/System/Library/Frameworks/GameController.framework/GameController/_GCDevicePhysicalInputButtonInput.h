@class NSString;

@interface _GCDevicePhysicalInputButtonInput : _GCDevicePhysicalInputView <GCLinearInput, GCPressedStateInput> {
    BOOL _isAnalog;
    float _pressedThreshold;
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

@end
