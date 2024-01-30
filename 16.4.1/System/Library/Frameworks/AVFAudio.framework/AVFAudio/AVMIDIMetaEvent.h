@interface AVMIDIMetaEvent : AVMusicEvent

@property (readonly) struct MIDIMetaEvent { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned int x4; unsigned char x5[1]; } *metaEvent;
@property (readonly) long long type;

- (void)dealloc;
- (id)initWithType:(long long)a0 data:(id)a1;
- (id)initWithMetaEvent:(struct MIDIMetaEvent { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned int x4; unsigned char x5[1]; } *)a0;

@end
