@class NSString, NSSet;
@protocol GCAxisInput, GCRelativeInput;

@interface GCSteeringWheelElement : _GCDevicePhysicalInputElement <GCAxisInput, GCRelativeInput, GCAxisElement> {
    long long _wheelField;
    unsigned long long _valueChangedHandlerSlot;
    unsigned long long _deltaChangedHandlerSlot;
    unsigned long long _valueSlot;
    unsigned long long _deltaSlot;
    unsigned long long _timestampSlot;
}

@property (readonly) float maximumDegreesOfRotation;
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
@property (copy) id /* block */ deltaDidChangeHandler;
@property (readonly) float delta;
@property (readonly) double lastDeltaTimestamp;
@property (readonly) double lastDeltaLatency;
@property (readonly) id<GCAxisInput> absoluteInput;
@property (readonly) id<GCRelativeInput> relativeInput;
@property (readonly) NSString *sfSymbolsName;
@property (readonly) NSString *localizedName;
@property (readonly) NSSet *aliases;

- (id)initWithIdentifier:(id)a0 configuration:(id)a1;
- (unsigned long long)handleGamepadEvent:(id)a0 withTimestamp:(double)a1;
- (id)initWith:(id)a0 context:(id)a1;
- (BOOL)isEqualToElement:(id)a0;
- (void)onCommitInvokeCallbacks:(unsigned long long)a0;

@end
