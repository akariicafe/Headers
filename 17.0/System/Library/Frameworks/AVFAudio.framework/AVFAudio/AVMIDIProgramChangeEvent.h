@interface AVMIDIProgramChangeEvent : AVMIDIChannelEvent

@property unsigned int programNumber;

- (id)initWithMessage:(struct MIDIChannelMessage { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; } *)a0;
- (id)initWithChannel:(unsigned int)a0 programNumber:(unsigned int)a1;

@end
