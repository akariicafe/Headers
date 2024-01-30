@interface AVMIDIPolyPressureEvent : AVMIDIChannelEvent

@property unsigned int key;
@property unsigned int pressure;

- (id)initWithMessage:(struct MIDIChannelMessage { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; } *)a0;
- (id)initWithChannel:(unsigned int)a0 key:(unsigned int)a1 pressure:(unsigned int)a2;

@end
