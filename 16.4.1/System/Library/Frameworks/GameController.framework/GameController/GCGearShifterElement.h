@class NSString, NSSet;
@protocol GCRelativeInput, GCSwitchPositionInput;

@interface GCGearShifterElement : _GCDevicePhysicalInputElement <GCSwitchPositionInput, GCRelativeInput, GCPhysicalInputElement> {
    BOOL _isPatternShifter;
    struct _NSRange { unsigned long long location; unsigned long long length; } _positionRange;
    long long _valueField;
    unsigned long long _valueChangedHandlerSlot;
    unsigned long long _valueSlot;
    unsigned long long _timestampSlot;
}

@property (readonly) id<GCSwitchPositionInput> patternInput;
@property (readonly) id<GCRelativeInput> sequentialInput;
@property (copy) id /* block */ positionDidChangeHandler;
@property (readonly) long long position;
@property (readonly) struct _NSRange { unsigned long long x0; unsigned long long x1; } positionRange;
@property (readonly, getter=isSequential) BOOL sequential;
@property (readonly) BOOL canWrap;
@property (readonly) double lastPositionTimestamp;
@property (readonly) double lastPositionLatency;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy) id /* block */ deltaDidChangeHandler;
@property (readonly) float delta;
@property (readonly, getter=isAnalog) BOOL analog;
@property (readonly) double lastDeltaTimestamp;
@property (readonly) double lastDeltaLatency;
@property (readonly) NSString *sfSymbolsName;
@property (readonly) NSString *localizedName;
@property (readonly) NSSet *aliases;

- (id)initWithIdentifier:(id)a0 configuration:(id)a1;
- (unsigned long long)handleGamepadEvent:(id)a0 withTimestamp:(double)a1;
- (id)initWith:(id)a0 context:(id)a1;
- (BOOL)isEqualToElement:(id)a0;
- (void)onCommitInvokeCallbacks:(unsigned long long)a0;

@end
