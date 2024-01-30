@class NSString, NSSet;
@protocol GCLinearInput, GCAxisInput, GCPressedStateInput;

@interface _GCDevicePhysicalInputDirectionPadElement : _GCDevicePhysicalInputElement <GCDirectionPadElement> {
    unsigned long long _xAxisSlot;
    unsigned long long _yAxisSlot;
    unsigned long long _upInputSlot;
    unsigned long long _downInputSlot;
    unsigned long long _leftInputSlot;
    unsigned long long _rightInputSlot;
    long long _gamepadEventUpValueField;
    long long _gamepadEventDownValueField;
    long long _gamepadEventLeftValueField;
    long long _gamepadEventRightValueField;
}

@property (readonly) id<GCAxisInput> xAxis;
@property (readonly) id<GCAxisInput> yAxis;
@property (readonly) id<GCLinearInput, GCPressedStateInput> up;
@property (readonly) id<GCLinearInput, GCPressedStateInput> down;
@property (readonly) id<GCLinearInput, GCPressedStateInput> left;
@property (readonly) id<GCLinearInput, GCPressedStateInput> right;
@property (readonly) NSString *sfSymbolsName;
@property (readonly) NSString *localizedName;
@property (readonly) NSSet *aliases;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithIdentifier:(id)a0 configuration:(id)a1;
- (unsigned long long)handleGamepadEvent:(id)a0 withTimestamp:(double)a1;
- (id)initWith:(id)a0 context:(id)a1;
- (BOOL)isEqualToElement:(id)a0;
- (void)onCommitInvokeCallbacks:(unsigned long long)a0;

@end
