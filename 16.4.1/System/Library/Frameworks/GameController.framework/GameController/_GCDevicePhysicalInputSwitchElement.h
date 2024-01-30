@class NSString, NSSet;
@protocol GCSwitchPositionInput;

@interface _GCDevicePhysicalInputSwitchElement : _GCDevicePhysicalInputElement <GCSwitchPositionInput, GCSwitchElement> {
    BOOL _canWrap;
    BOOL _sequential;
    struct _NSRange { unsigned long long location; unsigned long long length; } _positionRange;
    long long _gamepadEventPositionField;
    unsigned long long _positionChangedHandlerSlot;
    unsigned long long _positionSlot;
    unsigned long long _timestampSlot;
}

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
@property (readonly) id<GCSwitchPositionInput> positionInput;
@property (readonly) NSString *sfSymbolsName;
@property (readonly) NSString *localizedName;
@property (readonly) NSSet *aliases;

- (id)initWithIdentifier:(id)a0 configuration:(id)a1;
- (unsigned long long)handleGamepadEvent:(id)a0 withTimestamp:(double)a1;
- (id)initWith:(id)a0 context:(id)a1;
- (BOOL)isEqualToElement:(id)a0;
- (void)onCommitInvokeCallbacks:(unsigned long long)a0;

@end
