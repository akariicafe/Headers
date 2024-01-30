@interface AVMIDIControlChangeEvent : AVMIDIChannelEvent

@property (readonly) long long messageType;
@property (readonly) unsigned int value;

- (id)initWithMessage:(struct MIDIChannelMessage { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; } *)a0;
- (id)initWithChannel:(unsigned int)a0 messageType:(long long)a1 value:(unsigned int)a2;

@end
