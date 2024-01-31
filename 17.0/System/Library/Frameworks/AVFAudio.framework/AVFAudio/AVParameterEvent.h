@interface AVParameterEvent : AVMusicEvent {
    struct ParameterEvent { unsigned int parameterID; unsigned int scope; unsigned int element; float value; } _event;
}

@property (readonly) struct ParameterEvent { unsigned int x0; unsigned int x1; unsigned int x2; float x3; } *event;
@property unsigned int parameterID;
@property unsigned int scope;
@property unsigned int element;
@property float value;

- (id)initWithParameterEvent:(struct ParameterEvent { unsigned int x0; unsigned int x1; unsigned int x2; float x3; } *)a0;
- (id)initWithParameterID:(unsigned int)a0 scope:(unsigned int)a1 element:(unsigned int)a2 value:(float)a3;

@end
