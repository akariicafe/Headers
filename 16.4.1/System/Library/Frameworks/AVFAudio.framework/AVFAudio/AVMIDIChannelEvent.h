@interface AVMIDIChannelEvent : AVMusicEvent {
    struct MIDIChannelMessage { unsigned char status; unsigned char data1; unsigned char data2; unsigned char reserved; } _msg;
}

@property (readonly) struct MIDIChannelMessage { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; } *message;
@property unsigned int channel;

- (BOOL)isEqualTo:(id)a0;
- (id)initWithMessage:(struct MIDIChannelMessage { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; } *)a0;
- (unsigned char)data1;
- (unsigned char)data2;
- (id)initWithChannel:(unsigned char)a0 status:(unsigned char)a1 data1:(unsigned char)a2 data2:(unsigned char)a3;
- (void)setData1:(unsigned char)a0;
- (void)setData2:(unsigned char)a0;

@end
