@class NSString;

@interface _GCDevicePhysicalInputAxisInput : _GCDevicePhysicalInputView <GCAxisInput> {
    BOOL _isAnalog;
    BOOL _canWrap;
    unsigned long long _valueChangedHandlerSlot;
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

@end
